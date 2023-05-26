#pragma once
#include "CCoffee.h"
#include "CTea.h"
#include "CSmoothie.h"
#include "CDessert.h"

// CMenu 대화 상자

class CMenu : public CDialogEx
{
	DECLARE_DYNAMIC(CMenu)

public:
	CMenu(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CMenu();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Menu };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	CTabCtrl m_tab;
	afx_msg void OnSelchangeTabType(NMHDR* pNMHDR, LRESULT* pResult);
	CCoffee* coffee;
	CTea* tea;
	CSmoothie* smoothie;
	CDessert* dessert;
};
