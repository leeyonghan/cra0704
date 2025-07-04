#pragma once
#include "define.h"
class EngineName
{
public:
	virtual Engine getEngine() = 0;
};

class GMEngine :public EngineName
{
public:
	Engine getEngine()
	{
		return Engine::GM;
	}
};
class TOYOTAEngine : public EngineName
{
public:
	Engine getEngine()
	{
		return Engine::TOYOTA;
	}
};
class WIAEngine : public EngineName
{
public:
	Engine getEngine()
	{
		return Engine::WIA;
	}
};

class BROKENEngine : public EngineName
{
public:
	Engine getEngine()
	{
		return Engine::BROKEN;
	}
};
