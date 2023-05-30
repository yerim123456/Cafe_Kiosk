// COrder.cpp: 구현 파일
//

#include "pch.h"
#include "Cafe_Kiosk.h"
#include "COrder.h"
#include "afxdialogex.h"


// COrder 대화 상자

IMPLEMENT_DYNAMIC(COrder, CDialogEx)

COrder::COrder(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_ORDER, pParent)
{

}

COrder::~COrder()
{
}

void COrder::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_TAB_TYPE, m_tab);
	DDX_Control(pDX, IDC_LIST_ORDER, m_listOrder);
}


BEGIN_MESSAGE_MAP(COrder, CDialogEx)
	ON_NOTIFY(TCN_SELCHANGE, IDC_TAB_TYPE, &COrder::OnSelchangeTabType)
	ON_BN_CLICKED(IDC_BUTTON_SELDEL, &COrder::OnBnClickedButtonSeldel)
	ON_BN_CLICKED(IDC_BUTTON_ALLDEL, &COrder::OnBnClickedButtonAlldel)
END_MESSAGE_MAP()


// COrder 메시지 처리기


void COrder::OnSelchangeTabType(NMHDR* pNMHDR, LRESULT* pResult)
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (IDC_TAB_TYPE == pNMHDR->idFrom) {
		int select = m_tab.GetCurSel();
		switch (select) {
		case 0:
			coffee->ShowWindow(SW_SHOW);
			tea->ShowWindow(SW_HIDE);
			smoothie->ShowWindow(SW_HIDE);
			dessert->ShowWindow(SW_HIDE);
			break;
		case 1:
			coffee->ShowWindow(SW_HIDE);
			tea->ShowWindow(SW_SHOW);
			smoothie->ShowWindow(SW_HIDE);
			dessert->ShowWindow(SW_HIDE);
			break;
		case 2:
			coffee->ShowWindow(SW_HIDE);
			tea->ShowWindow(SW_HIDE);
			smoothie->ShowWindow(SW_SHOW);
			dessert->ShowWindow(SW_HIDE);
			break;
		case 3:
			coffee->ShowWindow(SW_HIDE);
			tea->ShowWindow(SW_HIDE);
			smoothie->ShowWindow(SW_HIDE);
			dessert->ShowWindow(SW_SHOW);
			break;
		}
	}

	*pResult = 0;
}


BOOL COrder::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  여기에 추가 초기화 작업을 추가합니다.
	CRect rect;
	m_tab.GetWindowRect(rect);
	
	m_tab.InsertItem(0, _T("커피"));
	m_tab.InsertItem(1, _T("티"));
	m_tab.InsertItem(2, _T("스무디"));
	m_tab.InsertItem(3, _T("디저트"));

	m_tab.SetCurSel(0);

	coffee = new CCoffee;
	coffee->Create(IDD_Coffee, &m_tab);
	coffee->MoveWindow(0, 20, rect.Width(), rect.Height());
	coffee->ShowWindow(SW_SHOW);

	tea = new CTea;
	tea->Create(IDD_TEA, &m_tab);
	tea->MoveWindow(0, 20, rect.Width(), rect.Height());
	tea->ShowWindow(SW_HIDE);

	smoothie = new CSmoothie;
	smoothie->Create(IDD_SMOOTHIE, &m_tab);
	smoothie->MoveWindow(0, 20, rect.Width(), rect.Height());
	smoothie->ShowWindow(SW_HIDE);

	dessert = new CDessert;
	dessert->Create(IDD_DESSERT, &m_tab);
	dessert->MoveWindow(0, 20, rect.Width(), rect.Height());
	dessert->ShowWindow(SW_HIDE);


	m_listOrder.InsertColumn(0, _T("이름"), LVCFMT_CENTER, 100);
	m_listOrder.InsertColumn(1, _T("가격"), LVCFMT_CENTER, 100);
	m_listOrder.InsertColumn(2, _T("개수"), LVCFMT_CENTER, 100);

	// 	m_listOrder.InsertItem(0, _T("Item 0 - 0"));
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 예외: OCX 속성 페이지는 FALSE를 반환해야 합니다.
}


void COrder::OnBnClickedButtonSeldel()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	
	// 삭제할 아이템 번호 저장하고 받아오는 변수 필요
	m_listOrder.DeleteItem(0);
}


void COrder::OnBnClickedButtonAlldel()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_listOrder.DeleteAllItems();

}
