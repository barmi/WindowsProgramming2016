
// ChildView.cpp : CChildView Ŭ������ ����
//

#include "stdafx.h"
#include "Practice5.h"
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



// CChildView �޽��� ó����

BOOL CChildView::PreCreateWindow(CREATESTRUCT& cs) 
{
	if (!CWnd::PreCreateWindow(cs))
		return FALSE;

	cs.dwExStyle |= WS_EX_CLIENTEDGE;
	cs.style &= ~WS_BORDER;
	cs.lpszClass = AfxRegisterWndClass(CS_HREDRAW|CS_VREDRAW|CS_DBLCLKS, 
		::LoadCursor(NULL, IDC_ARROW), (HBRUSH)GetStockObject(GRAY_BRUSH), NULL);
	//	::LoadCursor(NULL, IDC_ARROW), reinterpret_cast<HBRUSH>(COLOR_WINDOW+1), NULL);

	return TRUE;
}

void CChildView::OnPaint() 
{
	CPaintDC dc(this);
	dc.SetBkMode(OPAQUE); // �� ���� �ּ� ó���ص� ����� ����
	dc.TextOut(100, 50, _T(" OPAQUE ��� [1] "));

	dc.SetBkMode(TRANSPARENT);
	dc.TextOut(100, 100, _T(" TRANSPARENT ��� "));

	dc.SetBkMode(OPAQUE);
	dc.SetBkColor(RGB(0, 255, 0)); // ����� �ʷϻ����� ����
	dc.TextOut(100, 150, _T(" OPAQUE ��� [2] "));
}
