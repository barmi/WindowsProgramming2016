
// Practice2.h : Practice2 ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CPractice2App:
// �� Ŭ������ ������ ���ؼ��� Practice2.cpp�� �����Ͻʽÿ�.
//

class CPractice2App : public CWinApp
{
public:
	CPractice2App();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// �����Դϴ�.

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CPractice2App theApp;
