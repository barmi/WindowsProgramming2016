
// Practice7.h : Practice7 ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CPractice7App:
// �� Ŭ������ ������ ���ؼ��� Practice7.cpp�� �����Ͻʽÿ�.
//

class CPractice7App : public CWinApp
{
public:
	CPractice7App();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// �����Դϴ�.

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CPractice7App theApp;
