#if !defined(AFX_TABVIEWMAIN_H_38F120B3358C__INCLUDED_)
#define AFX_TABVIEWABOUT_H__0DFDC68D_7177_4EAB_9A42_38F120B3358C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// TabViewAbout.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CTabViewAbout dialog

class CTabViewMain : public CDialogImpl<CTabViewMain>
{
private:

public:
    enum { IDD = IDD_VIEW_MAIN };

    BOOL PreTranslateMessage(MSG* pMsg) {
        return IsDialogMessage(pMsg);
    }

    BEGIN_MSG_MAP(CTabViewAbout)
    MESSAGE_HANDLER(WM_INITDIALOG, OnInitDialog)
    //COMMAND_ID_HANDLER(IDC_BUTTON_DIR, OnDirCmd)
	REFLECT_NOTIFICATIONS()
    END_MSG_MAP()

    // Handler prototypes (uncomment arguments if needed):
    //  LRESULT MessageHandler(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/)
    //  LRESULT CommandHandler(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/)
    //  LRESULT NotifyHandler(int /*idCtrl*/, LPNMHDR /*pnmh*/, BOOL& /*bHandled*/)

    LRESULT OnInitDialog(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/) {
        CenterWindow(GetParent());

		//m_ctrlLink.SubclassWindow(GetDlgItem(IDC_STATIC_VISIT));
		//m_ctrlLink.SetHyperLink(_T("https://yinqingwang.wordpress.com"));
		
		//m_ctrlMail.SubclassWindow(GetDlgItem(IDC_STATIC_MAIL));
		//m_ctrlMail.SetHyperLink(_T("mailto:yinqingwang@163.com"));
        return TRUE;
    }

    LRESULT OnDirCmd(WORD /*wNotifyCode*/, WORD wID, HWND /*hWndCtl*/, BOOL& /*bHandled*/) {
        //
	}
  
};


#endif // !defined(AFX_TABVIEWMAIN_H_38F120B3358C__INCLUDED_)
