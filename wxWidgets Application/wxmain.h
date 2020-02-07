#pragma once
#include "pch.h"

class WXMain : public wxApp
{
public:
	WXMain();
	~WXMain();
	virtual bool OnInit();
};