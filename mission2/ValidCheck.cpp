#include"ValidCheck.h"
bool ValidCheck::isValidCheck(Car *mycar)
{
    if (mycar->getCarType() == SEDAN && mycar->getBrake() == CONTINENTAL)
        return false;
    else if (mycar->getCarType() == SUV && mycar->getEngine() == TOYOTA)
        return false;
    else if (mycar->getCarType() == TRUCK && mycar->getEngine() == WIA)
        return false;
    else if (mycar->getCarType() == TRUCK && mycar->getBrake() == MANDO)
        return false;
    else if (mycar->getBrake() == BOSCH_B && mycar->getSteering() != BOSCH_S)
        return false;
    else
        return true;
}