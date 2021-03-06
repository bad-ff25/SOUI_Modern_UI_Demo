// MainDlg.h : interface of the CMainDlg class
//
/////////////////////////////////////////////////////////////////////////////
#pragma once

class CMainDlg : public SHostWnd,
                 public SDpiHandler<CMainDlg>,
                 public IAnimationListener,
                 public IAnimatorUpdateListener
{
public:
	CMainDlg();
	~CMainDlg();

	void OnClose();
	void OnMaximize();
	void OnRestore();
	void OnMinimize();
	void OnSize(UINT nType, CSize size);
	BOOL OnInitDialog(HWND wndFocus, LPARAM lInitParam);

	void on_side_menu_hide();

protected:
	//soui消息
	EVENT_MAP_BEGIN()
		EVENT_NAME_COMMAND(L"btn_close", OnClose)
		EVENT_NAME_COMMAND(L"btn_min", OnMinimize)
		EVENT_NAME_COMMAND(L"btn_max", OnMaximize)
		EVENT_NAME_COMMAND(L"btn_restore", OnRestore)
	    EVENT_NAME_COMMAND(L"side_menu_hide", on_side_menu_hide)

	EVENT_MAP_END()
		
	//HostWnd真实窗口消息处理
	BEGIN_MSG_MAP_EX(CMainDlg)
		MSG_WM_INITDIALOG(OnInitDialog)
		MSG_WM_CLOSE(OnClose)
		MSG_WM_SIZE(OnSize)
		CHAIN_MSG_MAP(SHostWnd)
		REFLECT_NOTIFICATIONS_EX()
	END_MSG_MAP()

    void __stdcall onAnimationStart(IAnimation* animation) override;
    void __stdcall onAnimationEnd(IAnimation* animation) override;
    void __stdcall onAnimationRepeat(IAnimation* animation) override;
    void __stdcall onAnimationUpdate(IValueAnimator* pAnimator) override;
};
