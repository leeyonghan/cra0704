#pragma once
#include"Car.h"
#include"ValidCheck.h"
#include<iostream>
class RunProducer
{
public:

    void printCarType(Car mycar);
    void printEngine(Car mycar);
    void printbrakeSystem(Car mycar);
    void printSteeringSystem(Car mycar);
    void runProducedCar(Car mycar);
};