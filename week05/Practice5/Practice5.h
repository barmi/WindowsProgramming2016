
// Practice5.h : Practice5 ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CPractice5App:
// �� Ŭ������ ������ ���ؼ��� Practice5.cpp�� �����Ͻʽÿ�.
//

class CPractice5App : public CWinApp
{
public:
	CPractice5App();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// �����Դϴ�.

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CPractice5App theApp;
