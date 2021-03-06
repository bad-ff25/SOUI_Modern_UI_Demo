// MainDlg.cpp : implementation of the CMainDlg class
//
/////////////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "MainDlg.h"	
#include <helper/SMenuEx.h>

#include "controls_extend/SMcListViewEx/STabCtrlHeaderBinder.h"

CMainDlg::CMainDlg() : SHostWnd(_T("LAYOUT:XML_MAINWND"))
{
}

CMainDlg::~CMainDlg()
{
}

BOOL CMainDlg::OnInitDialog(HWND hWnd, LPARAM lParam)
{
    STabCtrl *pTabCtrl = FindChildByName2<STabCtrl>(L"tab_radio2");

    auto m_pTabBinder = new STabCtrlHeaderBinder(pTabCtrl);
    m_pTabBinder->Bind(FindChildByName(L"btn4_1"), 0);
    m_pTabBinder->Bind(FindChildByName(L"btn4_2"), 1);
    m_pTabBinder->Bind(FindChildByName(L"btn4_3"), 2);
	return 0;
}

void CMainDlg::on_side_menu_hide()
{
    static auto side_menu = FindChildByName(L"side_menu");
    if (side_menu)
    {
		SStringW switch_xml = _T("anim:show_xml");
        const auto param = side_menu->GetLayoutParam()->GetSpecifiedSize(Horz).fSize;
        if (param == 200.f)
        {
			switch_xml = _T("anim:hide_xml");
        }

        IValueAnimator* pAni = SApplication::getSingletonPtr()->LoadValueAnimator(switch_xml);
        if (pAni)
        {
            pAni->addUpdateListener(this);
            pAni->start(this);
        }
	}
}

void CMainDlg::onAnimationStart(IAnimation* animation)
{
	OutputDebugString(L"" __FUNCTION__);
}

void CMainDlg::onAnimationEnd(IAnimation* animation)
{
	OutputDebugString(L"" __FUNCTION__);
}

void CMainDlg::onAnimationRepeat(IAnimation* animation)
{
	OutputDebugString(L"" __FUNCTION__);
}

void CMainDlg::onAnimationUpdate(IValueAnimator* pAnimator)
{
	static auto side_menu = FindChildByName(L"side_menu");
    if (side_menu == nullptr)
    {
        side_menu = FindChildByName(L"side_menu");
    }

	SFloatAnimator *ani = sobj_cast<SFloatAnimator>(pAnimator);
    if (ani && side_menu)
    {
		SStringT temp;
		temp.Format(_T("%f"), ani->getValue());
		side_menu->SetAttribute(L"width", temp);
    }
}

//TODO:消息映射
void CMainDlg::OnClose()
{
	SNativeWnd::DestroyWindow();
}

void CMainDlg::OnMaximize()
{
	SendMessage(WM_SYSCOMMAND, SC_MAXIMIZE);
}
void CMainDlg::OnRestore()
{
	SendMessage(WM_SYSCOMMAND, SC_RESTORE);
}
void CMainDlg::OnMinimize()
{
	SendMessage(WM_SYSCOMMAND, SC_MINIMIZE);
}

void CMainDlg::OnSize(UINT nType, CSize size)
{
	SetMsgHandled(FALSE);	
	SWindow *pBtnMax = FindChildByName(L"btn_max");
	SWindow *pBtnRestore = FindChildByName(L"btn_restore");
	if(!pBtnMax || !pBtnRestore) return;
	
	if (nType == SIZE_MAXIMIZED)
	{
		pBtnRestore->SetVisible(TRUE);
		pBtnMax->SetVisible(FALSE);
	}
	else if (nType == SIZE_RESTORED)
	{
		pBtnRestore->SetVisible(FALSE);
		pBtnMax->SetVisible(TRUE);
	}
}

