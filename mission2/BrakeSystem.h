#pragma once
#include"define.h"
class BrakSystemName
{
public:
	virtual brakeSystem getbreakSystem() = 0;
};
class MANDOBreakSystem :public BrakSystemName
{
public:
	brakeSystem getbreakSystem()
	{
		return brakeSystem::MANDO;
	}
};
class CONTINENTALBreakSystem :public BrakSystemName
{
public:
	brakeSystem getbreakSystem()
	{
		return brakeSystem::CONTINENTAL;
	}
};
class BOSCH_BBreakSystem :public BrakSystemName
{
public:
	brakeSystem getbreakSystem()
	{
		return brakeSystem::BOSCH_B;
	}
};
