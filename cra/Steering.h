#pragma once
#include "define.h"


class SteeringName
{
public:
	virtual SteeringSystem getSteeringSystem() = 0;

};

class BOSCH_SSteering :public SteeringName
{
public:
	SteeringSystem getSteeringSystem()override

	{
		return SteeringSystem::BOSCH_S;
	}
};

class MOBISSteering :public SteeringName
{
public:
	SteeringSystem getSteeringSystem()override
	{
		return SteeringSystem::MOBIS;
	}
};