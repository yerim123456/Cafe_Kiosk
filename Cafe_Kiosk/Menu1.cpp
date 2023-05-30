// Menu1.cpp: 구현 파일
//

#include "pch.h"
#include "Cafe_Kiosk.h"
#include "afxdialogex.h"
#include "Menu1.h"


// Menu1 대화 상자

IMPLEMENT_DYNAMIC(Menu1, CDialogEx)

Menu1::Menu1(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

Menu1::~Menu1()
{
}

void Menu1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Menu1, CDialogEx)
	ON_NOTIFY(NM_THEMECHANGED, IDC_SCROLLBAR1, &Menu1::OnNMThemeChangedScrollbar1)
	ON_NOTIFY(NM_OUTOFMEMORY, IDC_HOTKEY2, &Menu1::OnNMOutofmemoryHotkey2)
	ON_EN_CHANGE(IDC_RICHEDIT21, &Menu1::OnEnChangeRichedit21)
END_MESSAGE_MAP()


// Menu1 메시지 처리기


void Menu1::SetUpForLayout()
{
	// TODO: 여기에 구현 코드 추가.

}


void Menu1::OnNMThemeChangedScrollbar1(NMHDR* pNMHDR, LRESULT* pResult)
{
	// 이 기능을 사용하려면 Windows XP 이상이 필요합니다.
	// _WIN32_WINNT 기호는 0x0501보다 크거나 같아야 합니다.
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	*pResult = 0;
}


void Menu1::OnNMOutofmemoryHotkey2(NMHDR* pNMHDR, LRESULT* pResult)
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	*pResult = 0;
}


void Menu1::OnEnChangeRichedit21()
{
	// TODO:  RICHEDIT 컨트롤인 경우, 이 컨트롤은
	// CDialogEx::OnInitDialog() 함수를 재지정 
	//하고 마스크에 OR 연산하여 설정된 ENM_CHANGE 플래그를 지정하여 CRichEditCtrl().SetEventMask()를 호출하지 않으면
	// 이 알림 메시지를 보내지 않습니다.

	// TODO:  여기에 컨트롤 알림 처리기 코드를 추가합니다.
}
