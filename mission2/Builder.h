#pragma once
#include"BrakeSystem.h"
#include"Engine.h"
#include"Steering.h"
#include "CarType.h"
#include"Car.h"
#include"define.h"

class builder
{
private:
	SteeringName* steering;
	EngineName* engine;
	BrakSystemName* brake;
	CarTypeName* type;
public:
	builder& steeringsystem(SteeringSystem steering)
	{
		if (steering == SteeringSystem::BOSCH_S)
			this->steering = new BOSCH_SSteering();
		else if (steering == SteeringSystem::MOBIS)
			this->steering = new MOBISSteering();
		return *this;
	}
	builder& enginesystem(Engine engine)
	{
		if (engine == Engine::GM)
			this->engine = new GMEngine();
		else if (engine == Engine::TOYOTA)
			this->engine = new TOYOTAEngine();
		else if (engine == Engine::WIA)
			this->engine = new WIAEngine();
		else if (engine == Engine::BROKEN)
			this->engine = new BROKENEngine();
		return *this;

	}
	builder& brakesystem(brakeSystem brake)
	{
		if (brake == brakeSystem::MANDO)
			this->brake = new MANDOBreakSystem();
		else if (brake == brakeSystem::CONTINENTAL)
			this->brake = new CONTINENTALBreakSystem();
		else if (brake == brakeSystem::BOSCH_B)
			this->brake = new BOSCH_BBreakSystem();
		return *this;

	}
	builder& typesystem(CarType type)
	{
		if (type == CarType::SEDAN)
			this->type = new SEDANCarType();
		else if (type == CarType::SUV)
			this->type = new SUVCarType();
		else if (type == CarType::TRUCK)
			this->type = new TRUCKCarType();
		return *this;

	}
	Car* build()
	{
		Car* mycar = new Car();
		mycar->setBrake(brake);
		mycar->setCarType(type);
		mycar->setEngine(engine);
		mycar->setSteering(steering);
		return mycar;
	}
};