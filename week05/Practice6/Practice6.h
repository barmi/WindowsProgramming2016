
// Practice6.h : Practice6 ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CPractice6App:
// �� Ŭ������ ������ ���ؼ��� Practice6.cpp�� �����Ͻʽÿ�.
//

class CPractice6App : public CWinApp
{
public:
	CPractice6App();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// �����Դϴ�.

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CPractice6App theApp;
