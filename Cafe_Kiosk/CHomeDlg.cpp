// CHomeDlg.cpp: 구현 파일
//

#include "pch.h"
#include "Cafe_Kiosk.h"
#include "afxdialogex.h"
#include "CHomeDlg.h"


// CHomeDlg 대화 상자

IMPLEMENT_DYNAMIC(CHomeDlg, CDialogEx)

CHomeDlg::CHomeDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_HOME, pParent)
	
{

}

CHomeDlg::~CHomeDlg()
{
}

void CHomeDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);

	
}


BEGIN_MESSAGE_MAP(CHomeDlg, CDialogEx)
	ON_STN_CLICKED(IDCANCEL, &CHomeDlg::OnStnClickedCancel)
	ON_WM_CREATE()
END_MESSAGE_MAP()


// CHomeDlg 메시지 처리기


void CHomeDlg::OnStnClickedCancel()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}





int CHomeDlg::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CDialogEx::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  여기에 특수화된 작성 코드를 추가합니다.
	CRect rect;//픽쳐 컨트롤의 크기를 저장할 CRect 객체
	m_picture_control.GetWindowRect(rect);//GetWindowRect를 사용해서 픽쳐 컨트롤의 크기를 받는다.
	CDC* dc; //픽쳐 컨트롤의 DC를 가져올  CDC 포인터
	dc = m_picture_control.GetDC(); //픽쳐 컨트롤의 DC를 얻는다.
	CImage image;//불러오고 싶은 이미지를 로드할 CImage 
	image.Load(_T("Cafe WPA+"));//이미지 로드

	image.StretchBlt(dc->m_hDC, 0, 0, rect.Width(), rect.Height(), SRCCOPY);//이미지를 픽쳐 컨트롤 크기로 조정
	ReleaseDC(dc);//DC 해제

	return 0;
}
