
// ChildView.cpp : CChildView Ŭ������ ����
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

	CFont font;				//��Ʈ ��ü�� ����
	font.CreatePointFont(400, _T("�ü�"));	//ũ�Ⱑ 40 ����Ʈ�� Arial ��Ʈ
	dc.SelectObject(&font);		//���ο� ��Ʈ�� ����
	dc.TextOut(10,10, _T("�ȳ��ϼ���.....!"));
	font.DeleteObject();

	font.CreatePointFont(400, _T("����"));	//ũ�Ⱑ 40 ����Ʈ�� Arial ��Ʈ
	dc.SelectObject(&font);		//���ο� ��Ʈ�� ����
	dc.TextOut(10,110, _T("�ȳ��ϼ���.....!"));
	font.DeleteObject();

	font.CreatePointFont(400, _T("����"));	//ũ�Ⱑ 40 ����Ʈ�� Arial ��Ʈ
	dc.SelectObject(&font);		//���ο� ��Ʈ�� ����
	dc.TextOut(10,210, _T("�ȳ��ϼ���.....!"));
	font.DeleteObject();

	font.CreatePointFont(400, _T("���� ���"));	//ũ�Ⱑ 40 ����Ʈ�� Arial ��Ʈ
	dc.SelectObject(&font);		//���ο� ��Ʈ�� ����
	dc.TextOut(10,310, _T("�ȳ��ϼ���.....!"));
	font.DeleteObject();
}

