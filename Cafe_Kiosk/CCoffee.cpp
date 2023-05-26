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
}


BEGIN_MESSAGE_MAP(CCoffee, CDialogEx)
END_MESSAGE_MAP()


// CCoffee 메시지 처리기
