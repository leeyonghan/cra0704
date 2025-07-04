#include"runProducerCar.h"


void RunProducer:: printCarType(Car mycar)
{
    if (mycar.getCarType() == 1)
        printf("Car Type : Sedan\n");
    if (mycar.getCarType() == 2)
        printf("Car Type : SUV\n");
    if (mycar.getCarType() == 3)
        printf("Car Type : Truck\n");
}
void RunProducer::printEngine(Car mycar)
{
    if (mycar.getEngine() == 1)
        printf("Engine : GM\n");
    if (mycar.getEngine() == 2)
        printf("Engine : TOYOTA\n");
    if (mycar.getEngine() == 3)
        printf("Engine : WIA\n");
}
void RunProducer::printbrakeSystem(Car mycar)
{
    if (mycar.getBrake() == 1)
        printf("Brake System : Mando");
    if (mycar.getBrake() == 2)
        printf("Brake System : Continental\n");
    if (mycar.getBrake() == 3)
        printf("Brake System : Bosch\n");
}
void RunProducer::printSteeringSystem(Car mycar)
{
    if (mycar.getSteering() == 1)
        printf("SteeringSystem : Bosch\n");
    if (mycar.getSteering() == 2)
        printf("SteeringSystem : Mobis\n");
}

void RunProducer::runProducedCar(Car mycar)
{
    ValidCheck valid;
    if (valid.isValidCheck(mycar) == false)
    {
        printf("자동차가 동작되지 않습니다\n");
    }
    else
    {
        if (mycar.getEngine() == BROKEN)
        {
            printf("엔진이 고장나있습니다.\n");
            printf("자동차가 움직이지 않습니다.\n");
        }
        else
        {
            printCarType(mycar);
            printEngine(mycar);
            printbrakeSystem(mycar);
            printSteeringSystem(mycar);
            printf("자동차가 동작됩니다.\n");
        }
    }
}