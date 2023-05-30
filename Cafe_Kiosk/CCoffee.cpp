// CCoffee.cpp: 구현 파일
//

#include "pch.h"
#include "Cafe_Kiosk.h"
#include "CCoffee.h"
#include "afxdialogex.h"


// CCoffee 대화 상자

IMPLEMENT_DYNAMIC(CCoffee, CDialogEx)

CCoffee::CCoffee(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_Coffee, pParent)
{

}

CCoffee::~CCoffee()
{
}

void CCoffee::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST_COFFEE, m_listCoffee);
}


BEGIN_MESSAGE_MAP(CCoffee, CDialogEx)
END_MESSAGE_MAP()


// CCoffee 메시지 처리기


BOOL CCoffee::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  여기에 추가 초기화 작업을 추가합니다.

	// 이미지 리스트 생성 및 초기화
	m_imgCoffeeList.Create(32, 32, ILC_COLOR32, 2, 0);
	m_imgCoffeeList.Add(AfxGetApp()->LoadIcon(IDI_ICON1));
	// 여기에 ICON 추가

	// 이미지 리스트와 리스트 연결
	m_listCoffee.SetImageList(&m_imgCoffeeList, LVSIL_NORMAL);

	// 아이템 추가
	m_listCoffee.InsertItem(0, _T("아메리카노"),0);
	m_listCoffee.InsertItem(1, _T("카페 라떼"), 0);
	m_listCoffee.InsertItem(2, _T("콜드브루"), 0);
	m_listCoffee.InsertItem(3, _T("카페 모카"), 0);
	m_listCoffee.InsertItem(4, _T("아포가토"), 0);
	return TRUE;  // return TRUE unless you set the focus to a control
	// 예외: OCX 속성 페이지는 FALSE를 반환해야 합니다.
}
