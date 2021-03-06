//stamp:0ce9d6746674a782
/*<------------------------------------------------------------------------------------------------->*/
/*该文件由uiresbuilder生成，请不要手动修改*/
/*<------------------------------------------------------------------------------------------------->*/
#ifndef _UIRES_H_
#define _UIRES_H_
	struct _UIRES{
		struct _UIDEF{
			const TCHAR * XML_INIT;
			}UIDEF;
		struct _LAYOUT{
			const TCHAR * XML_MAINWND;
			const TCHAR * PAGE_1;
			const TCHAR * PAGE_2;
			const TCHAR * PAGE_3;
			}LAYOUT;
		struct _values{
			const TCHAR * string;
			const TCHAR * color;
			const TCHAR * skin;
			}values;
		struct _ICON{
			const TCHAR * ICON_LOGO;
			}ICON;
		struct _SVG{
			const TCHAR * hacker_svg;
			const TCHAR * menu_svg;
			const TCHAR * window_maximize_svg;
			const TCHAR * window_minimize_svg;
			const TCHAR * window_restore_svg;
			const TCHAR * close_svg;
			}SVG;
		struct _anim{
			const TCHAR * hide_xml;
			const TCHAR * show_xml;
			}anim;
	};
#endif//_UIRES_H_
#ifdef INIT_R_DATA
struct _UIRES UIRES={
		{
			_T("UIDEF:XML_INIT"),
		},
		{
			_T("LAYOUT:XML_MAINWND"),
			_T("LAYOUT:PAGE_1"),
			_T("LAYOUT:PAGE_2"),
			_T("LAYOUT:PAGE_3"),
		},
		{
			_T("values:string"),
			_T("values:color"),
			_T("values:skin"),
		},
		{
			_T("ICON:ICON_LOGO"),
		},
		{
			_T("SVG:hacker_svg"),
			_T("SVG:menu_svg"),
			_T("SVG:window_maximize_svg"),
			_T("SVG:window_minimize_svg"),
			_T("SVG:window_restore_svg"),
			_T("SVG:close_svg"),
		},
		{
			_T("anim:hide_xml"),
			_T("anim:show_xml"),
		},
	};
#else
extern struct _UIRES UIRES;
#endif//INIT_R_DATA

#ifndef _R_H_
#define _R_H_
struct _R{
	struct _name{
		 const wchar_t * btn4_1;
		 const wchar_t * btn4_2;
		 const wchar_t * btn4_3;
		 const wchar_t * btn_close;
		 const wchar_t * btn_max;
		 const wchar_t * btn_min;
		 const wchar_t * btn_restore;
		 const wchar_t * select;
		 const wchar_t * side_menu;
		 const wchar_t * side_menu_hide;
		 const wchar_t * tab_radio2;
	}name;
	struct _id{
		int btn4_1;
		int btn4_2;
		int btn4_3;
		int btn_close;
		int btn_max;
		int btn_min;
		int btn_restore;
		int select;
		int side_menu;
		int side_menu_hide;
		int tab_radio2;
	}id;
	struct _color{
		int blue;
		int gray;
		int green;
		int red;
		int white;
	}color;
	struct _string{
		int title;
		int ver;
	}string;

};
#endif//_R_H_
#ifdef INIT_R_DATA
struct _R R={
	{
		L"btn4_1",
		L"btn4_2",
		L"btn4_3",
		L"btn_close",
		L"btn_max",
		L"btn_min",
		L"btn_restore",
		L"select",
		L"side_menu",
		L"side_menu_hide",
		L"tab_radio2"
	}
	,
	{
		65538,
		65540,
		65541,
		65545,
		65543,
		65542,
		65544,
		65539,
		65536,
		65537,
		65546
	}
	,
	{
		0,
		1,
		2,
		3,
		4
	}
	,
	{
		0,
		1
	}
	
};
#else
extern struct _R R;
#endif//INIT_R_DATA
