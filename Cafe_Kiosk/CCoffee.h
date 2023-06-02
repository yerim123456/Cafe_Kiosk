#pragma once

// CCoffee 대화 상자

class CCoffee : public CDialogEx
{
	DECLARE_DYNAMIC(CCoffee)

public:
	CCoffee(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CCoffee();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Coffee };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	static const int LENGTH = 5;
	CListCtrl m_listCoffee;
	CImageList m_imgCoffeeList;
	virtual BOOL OnInitDialog();
};
