
// ChildView.cpp : CChildView 클래스의 구현
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

	CBrush brush1(RGB(255, 0, 255)); // 브러시 객체를 만든다.
	CBrush *pOldBrush = dc.SelectObject(&brush1); // 새로운 브러시 선택, 이전 브러시 저장
	dc.Rectangle(50, 50, 150, 150); 
	CBrush brush2(HS_DIAGCROSS, RGB(0, 255, 255));
	pOldBrush = dc.SelectObject(&brush2);
	dc.Rectangle(200, 50, 300, 150);
	CBrush brush3(RGB(255, 255, 0));
	pOldBrush = dc.SelectObject(&brush3);
	dc.Rectangle(350, 50, 450, 150);
	dc.SelectObject(pOldBrush); // 이전 브러시 복원, 사용하던 브러시 선택 해제
}

