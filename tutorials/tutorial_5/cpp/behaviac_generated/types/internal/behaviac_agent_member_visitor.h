﻿// ---------------------------------------------------------------------
// THIS FILE IS AUTO-GENERATED BY BEHAVIAC DESIGNER, SO PLEASE DON'T MODIFY IT BY YOURSELF!
// ---------------------------------------------------------------------

#ifndef _BEHAVIAC_MEMBER_VISITOR_H_
#define _BEHAVIAC_MEMBER_VISITOR_H_

#include "behaviac_agent_headers.h"

// Agent property and method handlers

namespace behaviac
{
}

struct PROPERTY_TYPE_FirstAgent_p1 { };
template<> inline int& FirstAgent::_Get_Property_<PROPERTY_TYPE_FirstAgent_p1>()
{
	unsigned char* pc = (unsigned char*)this;
	pc += (int)BEHAVIAC_OFFSETOF(FirstAgent, FirstAgent::p1);
	return *(reinterpret_cast<int*>(pc));
}

struct METHOD_TYPE_FirstAgent_Say { };
template<> inline void FirstAgent::_Execute_Method_<METHOD_TYPE_FirstAgent_Say>(behaviac::string& p0)
{
	this->FirstAgent::Say(p0);
}


#endif // _BEHAVIAC_MEMBER_VISITOR_H_