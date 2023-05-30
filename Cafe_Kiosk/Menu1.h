#pragma once
#include "afxdialogex.h"


// Menu1 대화 상자

class Menu1 : public CDialogEx
{
	DECLARE_DYNAMIC(Menu1)

public:
	Menu1(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~Menu1();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	void SetUpForLayout();
	afx_msg void OnNMThemeChangedScrollbar1(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnNMOutofmemoryHotkey2(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnEnChangeRichedit21();
};
