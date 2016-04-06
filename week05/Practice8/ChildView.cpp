
// ChildView.cpp : CChildView 클래스의 구현
//

#include "stdafx.h"
#include "Practice8.h"
#include "ChildView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CChildView

CChildView::CChildView()
{
}

CChildView::~CChildView()
{
}


BEGIN_MESSAGE_MAP(CChildView, CWnd)
	ON_WM_PAINT()
END_MESSAGE_MAP()



// CChildView 메시지 처리기

BOOL CChildView::PreCreateWindow(CREATESTRUCT& cs) 
{
	if (!CWnd::PreCreateWindow(cs))
		return FALSE;

	cs.dwExStyle |= WS_EX_CLIENTEDGE;
	cs.style &= ~WS_BORDER;
	cs.lpszClass = AfxRegisterWndClass(CS_HREDRAW|CS_VREDRAW|CS_DBLCLKS, 
		::LoadCursor(NULL, IDC_ARROW), reinterpret_cast<HBRUSH>(COLOR_WINDOW+1), NULL);

	return TRUE;
}

void CChildView::OnPaint() 
{
	CPaintDC dc(this); // 그리기를 위한 디바이스 컨텍스트입니다.

	CFont font;				//폰트 객체를 생성
	font.CreatePointFont(400, _T("궁서"));	//크기가 40 포인트인 Arial 폰트
	dc.SelectObject(&font);		//새로운 폰트를 선택
	dc.TextOut(10,10, _T("안녕하세요.....!"));
	font.DeleteObject();

	font.CreatePointFont(400, _T("굴림"));	//크기가 40 포인트인 Arial 폰트
	dc.SelectObject(&font);		//새로운 폰트를 선택
	dc.TextOut(10,110, _T("안녕하세요.....!"));
	font.DeleteObject();

	font.CreatePointFont(400, _T("바탕"));	//크기가 40 포인트인 Arial 폰트
	dc.SelectObject(&font);		//새로운 폰트를 선택
	dc.TextOut(10,210, _T("안녕하세요.....!"));
	font.DeleteObject();

	font.CreatePointFont(400, _T("맑은 고딕"));	//크기가 40 포인트인 Arial 폰트
	dc.SelectObject(&font);		//새로운 폰트를 선택
	dc.TextOut(10,310, _T("안녕하세요.....!"));
	font.DeleteObject();
}

