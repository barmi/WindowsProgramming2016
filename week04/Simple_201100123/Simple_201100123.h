
// Simple_201100123.h : Simple_201100123 ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CSimple_201100123App:
// �� Ŭ������ ������ ���ؼ��� Simple_201100123.cpp�� �����Ͻʽÿ�.
//

class CSimple_201100123App : public CWinApp
{
public:
	CSimple_201100123App();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// �����Դϴ�.

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CSimple_201100123App theApp;
