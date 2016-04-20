
// ChildView.cpp : CChildView 클래스의 구현
//

#include "stdafx.h"
#include "MidEx2.h"
#include "ChildView.h"
#include "Shape.h"

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

#define MAX_SHAPE	4
void CChildView::OnPaint() 
{
	CPaintDC dc(this); // device context for painting

	CShape *shape[MAX_SHAPE];
	shape[0] = new CRectangle(0, 0, 250, 220);
	shape[1] = new CCircle(0, 0, 100);
	shape[2] = new CTriangle(0, 0, 250, 220);
	shape[3] = new CSquare(0, 0, 200);
	
	double totalArea = 0.0;
	double totalPerimeter = 0.0;
	double scale = 1.0;
	for (int i = 0; i < MAX_SHAPE; i++)
	{
		shape[i]->setCenterPosition(200, 200);
		shape[i]->setScale(scale);
		totalArea += shape[i]->getArea();
		totalPerimeter += shape[i]->getPerimeter();
		shape[i]->move(i*5, i*10);
		shape[i]->draw(&dc);
		scale -= 0.25;
	}

	TRACE(_T("total area = %.2lf\n"), totalArea);
	TRACE(_T("total perimeter = %.2lf\n"), totalPerimeter);

	for (int i = 0; i < MAX_SHAPE; i++)
		delete shape[i];
}

