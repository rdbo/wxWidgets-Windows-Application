#include "pch.h"
#include "wxmain.h"
#include "mframe.h"

wxIMPLEMENT_APP(WXMain);

WXMain::WXMain()
{

}

WXMain::~WXMain()
{

}

bool WXMain::OnInit()
{
	MFrame* mframe = new MFrame();
	mframe->Show();
	return true;
}