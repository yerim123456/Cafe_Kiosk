// CDessert.cpp: 구현 파일
//

#include "pch.h"
#include "Cafe_Kiosk.h"
#include "CDessert.h"
#include "afxdialogex.h"


// CDessert 대화 상자

IMPLEMENT_DYNAMIC(CDessert, CDialogEx)

CDessert::CDessert(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DESSERT, pParent)
{

}

CDessert::~CDessert()
{
}

void CDessert::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDessert, CDialogEx)
END_MESSAGE_MAP()


// CDessert 메시지 처리기
