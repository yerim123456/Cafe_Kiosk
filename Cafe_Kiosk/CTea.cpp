// CTea.cpp: 구현 파일
//

#include "pch.h"
#include "Cafe_Kiosk.h"
#include "CTea.h"
#include "afxdialogex.h"


// CTea 대화 상자

IMPLEMENT_DYNAMIC(CTea, CDialogEx)

CTea::CTea(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_TEA, pParent)
{

}

CTea::~CTea()
{
}

void CTea::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CTea, CDialogEx)
END_MESSAGE_MAP()


// CTea 메시지 처리기
