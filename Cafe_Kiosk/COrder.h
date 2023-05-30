#pragma once
#include "CCoffee.h"
#include "CTea.h"
#include "CSmoothie.h"
#include "CDessert.h"

// COrder 대화 상자

class COrder : public CDialogEx
{
	DECLARE_DYNAMIC(COrder)

public:
	COrder(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~COrder();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ORDER };
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
	virtual BOOL OnInitDialog();
	CListCtrl m_listOrder;
	afx_msg void OnBnClickedButtonSeldel();
	afx_msg void OnBnClickedButtonAlldel();
};
