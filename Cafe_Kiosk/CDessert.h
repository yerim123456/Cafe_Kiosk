#pragma once


// CDessert 대화 상자

class CDessert : public CDialogEx
{
	DECLARE_DYNAMIC(CDessert)

public:
	CDessert(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CDessert();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DESSERT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
};
