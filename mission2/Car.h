#pragma once

#include "define.h"
#include"BrakeSystem.h"
#include"Engine.h"
#include"Steering.h"
#include "CarType.h"

class Car
{

public:

	void setSteering(SteeringName*steer)
	{
		this->steering = steer;
	}
	void setEngine(EngineName* engine)
	{
		this->engine = engine;
	}
	void setBrake(BrakSystemName* brake)
	{
		this->brake = brake;
	}
	void setCarType(CarTypeName *type)
	{
		this->type = type;
	}


	SteeringSystem getSteering()
	{
		return this->steering->getSteeringSystem();
	}
	Engine getEngine()
	{
		return this->engine->getEngine();
	}

	brakeSystem getBrake()
	{
		
		return this->brake->getbreakSystem();
	}
	CarType getCarType()
	{
		return this->type->getCarType();
	}
private:
	SteeringName* steering;
	EngineName *engine;
	BrakSystemName* brake;
	CarTypeName* type;
};
