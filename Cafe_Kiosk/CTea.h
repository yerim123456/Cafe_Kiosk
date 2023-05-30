#pragma once


// CTea 대화 상자

class CTea : public CDialogEx
{
	DECLARE_DYNAMIC(CTea)

public:
	CTea(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CTea();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TEA };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
};
