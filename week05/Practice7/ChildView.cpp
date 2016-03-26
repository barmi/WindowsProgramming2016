
// ChildView.cpp : CChildView Ŭ������ ����
//

#include "stdafx.h"
#include "Practice7.h"
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
		::LoadCursor(NULL, IDC_ARROW), reinterpret_cast<HBRUSH>(COLOR_WINDOW+1), NULL);

	return TRUE;
}

void CChildView::OnPaint() 
{
	CPaintDC dc(this); // �׸��⸦ ���� ����̽� ���ؽ�Ʈ�Դϴ�.

	CBrush brush1(RGB(255, 0, 255)); // �귯�� ��ü�� �����.
	CBrush *pOldBrush = dc.SelectObject(&brush1); // ���ο� �귯�� ����, ���� �귯�� ����
	dc.Rectangle(50, 50, 150, 150); 
	CBrush brush2(HS_DIAGCROSS, RGB(0, 255, 255));
	pOldBrush = dc.SelectObject(&brush2);
	dc.Rectangle(200, 50, 300, 150);
	CBrush brush3(RGB(255, 255, 0));
	pOldBrush = dc.SelectObject(&brush3);
	dc.Rectangle(350, 50, 450, 150);
	dc.SelectObject(pOldBrush); // ���� �귯�� ����, ����ϴ� �귯�� ���� ����
}

