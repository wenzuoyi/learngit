#ifndef TESTSUITEGUI_H_
#define TESTSUITEGUI_H_
#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������
class TestSuiteGUIApp : public CWinApp
{
public:
	TestSuiteGUIApp();
	virtual BOOL InitInstance();
protected:
	DECLARE_MESSAGE_MAP()
};
extern TestSuiteGUIApp theApp;
#endif // TESTSUITEGUI_H_
