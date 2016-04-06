
// ChildView.cpp : CChildView Ŭ������ ����
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

	CBitmap bitmap; //��Ʈ�� ��ü ����
	bitmap.LoadBitmap(IDB_BITMAP1); //��Ʈ�� �ε�
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

