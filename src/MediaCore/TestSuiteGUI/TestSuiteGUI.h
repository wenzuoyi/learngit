
// TestSuiteGUI.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// TestSuiteGUIApp: 
// �йش����ʵ�֣������ TestSuiteGUI.cpp
//

class TestSuiteGUIApp : public CWinApp
{
public:
	TestSuiteGUIApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern TestSuiteGUIApp theApp;