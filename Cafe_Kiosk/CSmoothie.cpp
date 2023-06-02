// CSmoothie.cpp: 구현 파일
//

#include "pch.h"
#include "Cafe_Kiosk.h"
#include "CSmoothie.h"
#include "afxdialogex.h"


// CSmoothie 대화 상자

IMPLEMENT_DYNAMIC(CSmoothie, CDialogEx)

CSmoothie::CSmoothie(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_SMOOTHIE, pParent)
{

}

CSmoothie::~CSmoothie()
{
}

void CSmoothie::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CSmoothie, CDialogEx)
END_MESSAGE_MAP()


// CSmoothie 메시지 처리기
