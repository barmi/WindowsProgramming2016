
// ChildView.cpp : CChildView 클래스의 구현
//

#include "stdafx.h"
#include "Practice9.h"
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

	CBitmap bitmap; //비트맵 객체 생성
	bitmap.LoadBitmap(IDB_BITMAP1); //비트맵 로드
	CBrush brush(&bitmap);
	CBrush *pOldBrush = dc.SelectObject(&brush);
	dc.Rectangle(50,50,250,250);
	bitmap.DeleteObject();

	bitmap.LoadBitmap(IDB_BITMAP2);
	CBrush brush2(&bitmap);
	dc.SelectObject(&brush2);
	dc.Rectangle(300,50,500,250);
	dc.SelectObject(pOldBrush);

}

