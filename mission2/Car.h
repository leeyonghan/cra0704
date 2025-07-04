#pragma once

#include "define.h"
#include"BrakeSystem.h"
#include"Engine.h"
#include"Steering.h"
#include "CarType.h"

class Car
{

public:
	Car()
	{

	}
	Car(SteeringSystem steering, Engine engine, brakeSystem brake, CarType type)
	{
		
		if (steering == SteeringSystem::BOSCH_S)
			this->steering = new BOSCH_SSteering();
		else if (steering == SteeringSystem::MOBIS)
			this->steering = new MOBISSteering();

		if (engine == Engine::GM)
			this->engine = new GMEngine();
		else if (engine == Engine::TOYOTA)
			this->engine = new TOYOTAEngine();
		else if (engine == Engine::WIA)
			this->engine = new WIAEngine();
		else if (engine == Engine::BROKEN)
			this->engine = new BROKENEngine();

		if (brake == brakeSystem::MANDO)
			this->brake = new MANDOBreakSystem();
		else if (brake == brakeSystem::CONTINENTAL)
			this->brake = new CONTINENTALBreakSystem();
		else if (brake == brakeSystem::BOSCH_B)
			this->brake = new BOSCH_BBreakSystem();

		if (type  == CarType::SEDAN)
			this->type = new SEDANCarType();
		else if (type  == CarType::SUV)
			this->type = new SUVCarType();
		else if (type  == CarType::TRUCK)
			this->type = new TRUCKCarType();
	}

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
