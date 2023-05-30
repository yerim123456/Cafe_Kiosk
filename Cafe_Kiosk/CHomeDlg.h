#pragma once
#include "afxdialogex.h"


// CHomeDlg 대화 상자

class CHomeDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CHomeDlg)

public:
	CHomeDlg(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CHomeDlg();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_HOME };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnStnClickedCancel();
	
	
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	CStatic m_picture_control;
};
