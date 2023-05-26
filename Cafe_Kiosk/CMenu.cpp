// CMenu.cpp: 구현 파일
//

#include "pch.h"
#include "Cafe_Kiosk.h"
#include "CMenu.h"
#include "afxdialogex.h"


// CMenu 대화 상자

IMPLEMENT_DYNAMIC(CMenu, CDialogEx)

CMenu::CMenu(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_Menu, pParent)
{

}

CMenu::~CMenu()
{
}

void CMenu::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_TAB_TYPE, m_tab);
}


BEGIN_MESSAGE_MAP(CMenu, CDialogEx)
	ON_NOTIFY(TCN_SELCHANGE, IDC_TAB_TYPE, &CMenu::OnSelchangeTabType)
END_MESSAGE_MAP()


// CMenu 메시지 처리기


void CMenu::OnSelchangeTabType(NMHDR* pNMHDR, LRESULT* pResult)
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	*pResult = 0;
}
