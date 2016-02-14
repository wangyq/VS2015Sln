// TabCtrlMain.h: interface for the CTabCtrlMain class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_TABCTRLMAIN_H__01D6B306_3599_4C31_9AF9_2FDC113FD0B6__INCLUDED_)
#define AFX_TABCTRLMAIN_H__01D6B306_3599_4C31_9AF9_2FDC113FD0B6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "resource.h"

#include "WTLTabViewCtrl.h"

class CTabCtrlMain  : public CWTLTabViewCtrl  
{
protected:
	
	CTabViewMain m_viewMain;
	CTabViewAbout m_viewAbout;



	//==============================================================================
	//	WTL
	//==============================================================================

	public:
		DECLARE_WND_SUPERCLASS(NULL, CWTLTabViewCtrl::GetWndClassName())

		BOOL PreTranslateMessage(MSG* pMsg)
		{
			pMsg;
			return FALSE;
		}

		BEGIN_MSG_MAP_EX(CTabCtrlMain)
			CHAIN_MSG_MAP(CWTLTabViewCtrl)
		END_MSG_MAP()
	
		// Handler prototypes (uncomment arguments if needed):
		//	LRESULT MessageHandler(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/)
		//	LRESULT CommandHandler(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/)
		//	LRESULT NotifyHandler(int /*idCtrl*/, LPNMHDR /*pnmh*/, BOOL& /*bHandled*/)

public:
	CTabCtrlMain()
	{

	}
	virtual ~CTabCtrlMain()
	{
	}

	BOOL Initialize()
	{
		m_viewMain.Create(m_hWnd);
		AddTab(_T("BookMark for PDF"), m_viewMain);
		m_viewAbout.Create(m_hWnd);
		AddTab(_T("About"), m_viewAbout);

		SetActiveTab(0);

		return TRUE;
	}

};

#endif // !defined(AFX_TABCTRLMAIN_H__01D6B306_3599_4C31_9AF9_2FDC113FD0B6__INCLUDED_)
