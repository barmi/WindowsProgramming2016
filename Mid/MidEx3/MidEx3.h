
// MidEx3.h : MidEx3 ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CMidEx3App:
// �� Ŭ������ ������ ���ؼ��� MidEx3.cpp�� �����Ͻʽÿ�.
//

class CMidEx3App : public CWinApp
{
public:
	CMidEx3App();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// �����Դϴ�.

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMidEx3App theApp;
