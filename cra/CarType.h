#pragma once
#include"define.h"
class CarTypeName
{
public:
	virtual CarType getCarType() = 0;
};

class SEDANCarType :public CarTypeName
{
public:
	CarType getCarType()
	{
		return CarType::SEDAN;
	}
};

class SUVCarType :public CarTypeName
{
public:
	CarType getCarType()
	{
		return CarType::SUV;
	}
};

class TRUCKCarType :public CarTypeName
{
public:
	CarType getCarType()
	{
		return CarType::TRUCK;
	}
};
