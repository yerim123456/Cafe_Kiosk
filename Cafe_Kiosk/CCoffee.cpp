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
	CString m_Name[LENGTH] = { _T("아메리카노"), _T("카푸치노"), _T("아인슈페너"), _T("바닐라 라떼") , _T("콜드브루 라떼") };
	CString m_Payment[LENGTH] = { _T("3000원"), _T("3500원"), _T("6000원"), _T("4000원") , _T("3500원") };

	m_imgCoffeeList.Create(32, 32, ILC_COLOR32, 0, 0);
	m_imgCoffeeList.Add(AfxGetApp()->LoadIcon(IDI_ICON2));
	m_imgCoffeeList.Add(AfxGetApp()->LoadIcon(IDI_ICON3));
	m_imgCoffeeList.Add(AfxGetApp()->LoadIcon(IDI_ICON4));
	m_imgCoffeeList.Add(AfxGetApp()->LoadIcon(IDI_ICON5));
	m_imgCoffeeList.Add(AfxGetApp()->LoadIcon(IDI_ICON6));
	// 여기에 ICON 추가

	// 이미지 리스트와 리스트 연결
	m_listCoffee.SetImageList(&m_imgCoffeeList, LVSIL_NORMAL);

	// 아이템 추가
	for (int i = 0; i < LENGTH; i++) {
		m_listCoffee.InsertItem(i, m_Name[i] + "\n" + m_Payment[i], i);
	}
	return TRUE;  // return TRUE unless you set the focus to a control
	// 예외: OCX 속성 페이지는 FALSE를 반환해야 합니다.
}
