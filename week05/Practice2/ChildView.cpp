
// ChildView.cpp : CChildView 클래스의 구현
//

#include "stdafx.h"
#include "Practice2.h"
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
	
	// get client rect
	CRect rect;
	GetClientRect(&rect);

	dc.MoveTo(0, rect.bottom/2);
	dc.LineTo(rect.right, rect.bottom/2);
	dc.MoveTo(rect.right/2, 0);
	dc.LineTo(rect.right/2, rect.bottom);

	POINT points[] = { 
		{rect.right/4*3, 0}, {rect.right, rect.bottom/2},
		{rect.right/4*3, rect.bottom-1}, {rect.right/4, rect.bottom-1},
		{0, rect.bottom/2}, {rect.right/4, 0},
		{rect.right/4*3, 0}
	};
	dc.Polyline(points, 7);

	// 그리기 메시지에 대해서는 CWnd::OnPaint()를 호출하지 마십시오.
}

