
// ChildView.cpp : CChildView 클래스의 구현
//

#include "stdafx.h"
#include "MidEx3.h"
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

	CPen redPen(PS_SOLID, 3, RGB(255,0,0));
	CPen greenPen(PS_SOLID, 3, RGB(0,255,0));
	CPen blackPen(PS_SOLID, 3, RGB(0,0,0));
	CPen bluePen(PS_SOLID, 3, RGB(0,0,255));

	CBrush yellowBrush(RGB(255,255,0));
	CBrush blueBrush(RGB(0,0,255));
	CBrush greenBrush(RGB(0,255,0));
	CBrush cyanBrush(RGB(0,255,255));
	CBrush whiteBrush(RGB(255,255,255));

	dc.SelectObject(&blackPen);
	dc.SelectObject(&yellowBrush);
	dc.Rectangle(100, 250, 200, 350);
	dc.SelectObject(&whiteBrush);
	dc.Ellipse(100, 250, 200, 350);

	dc.SelectObject(&greenPen);
	dc.SelectObject(&blueBrush);
	dc.Pie(40, 20, 226, 144, 155, 32, 202, 115);
	dc.SelectObject(&redPen);
	dc.SelectObject(&greenBrush);
	dc.Pie(40+20, 20-10, 226+20, 144-10, 202+20, 115-10, 155+20, 32-10);

	dc.SelectObject(&bluePen);
	dc.SelectObject(&cyanBrush);
	POINT pts[] = { {300, 330}, {300, 180}, {350, 180}, {350, 80}, {400, 80}, {400, 50}, {450, 50}, {450, 250}, {500, 250}, {500, 330} };
	dc.Polygon(pts, sizeof(pts) / sizeof(pts[0]));

	dc.SelectObject(&redPen);
	POINT pts2[] = { {325, 180}, {375, 80}, {425, 50}, {475, 250} };
	dc.Polyline(pts2, sizeof(pts2) / sizeof(pts2[0]));
}

