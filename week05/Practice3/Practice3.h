
// Practice3.h : Practice3 ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CPractice3App:
// �� Ŭ������ ������ ���ؼ��� Practice3.cpp�� �����Ͻʽÿ�.
//

class CPractice3App : public CWinApp
{
public:
	CPractice3App();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// �����Դϴ�.

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CPractice3App theApp;
