#ifdef _DEBUG

#include "gmock/gmock.h"
#include"Car.h"
#include"TestProducer.h"
#include"ValidCheck.h"
#include"runProducerCar.h"
#include"Builder.h"
TEST(t1, tc1) {
	EXPECT_EQ(1, 1);
}
/*

Type
Sedan/SUV/Truck

Steering
Bosch/Mobis

Engine 
GM/TOYOTA/WIA/Broken

Brake
MANDO/Continental/Bosch

*/

TEST(SEDANTEST, Mobis_GM_MANDO)
{
	//Steering - Engine - Brake - Type
	Car* mycar = builder().steeringsystem(MOBIS).enginesystem(GM).brakesystem(MANDO).typesystem(SEDAN).build();
	ValidCheck valid;
	RunProducer runproducer;
	TestProducer testproducer;
	runproducer.runProducedCar(mycar);
	testproducer.testProducedCar(mycar);
	EXPECT_TRUE(valid.isValidCheck(mycar));
}

TEST(SUVTEST, Mobis_GM_BOSCH_B)
{
	//Steering - Engine - Brake - Type
	Car* mycar = builder().steeringsystem(MOBIS).enginesystem(GM).brakesystem(BOSCH_B).typesystem(SUV).build();

	ValidCheck valid;
	RunProducer runproducer;
	TestProducer testproducer;
	runproducer.runProducedCar(mycar);
	testproducer.testProducedCar(mycar);
	EXPECT_FALSE(valid.isValidCheck(mycar));
}


TEST(SEDANTEST, BOSCH_GM_MANDO)
{
	//Steering - Engine - Brake - Type
	Car* mycar = builder().steeringsystem(BOSCH_S).enginesystem(GM).brakesystem(MANDO).typesystem(SEDAN).build();

	ValidCheck valid;
	RunProducer runproducer;
	TestProducer testproducer;
	runproducer.runProducedCar(mycar);
	testproducer.testProducedCar(mycar);
	EXPECT_TRUE(valid.isValidCheck(mycar));
}

TEST(SEDANTEST, BOSCH_GM_Continental)
{
	//Steering - Engine - Brake - Type
	Car* mycar = builder().steeringsystem(BOSCH_S).enginesystem(GM).brakesystem(CONTINENTAL).typesystem(SEDAN).build();

	ValidCheck valid;
	RunProducer runproducer;
	TestProducer testproducer;
	runproducer.runProducedCar(mycar);
	testproducer.testProducedCar(mycar);
	EXPECT_FALSE(valid.isValidCheck(mycar));
}
TEST(SEDANTEST, BOSCH_GM_Bosch)
{
	//Steering - Engine - Brake - Type
	Car* mycar = builder().steeringsystem(BOSCH_S).enginesystem(GM).brakesystem(BOSCH_B).typesystem(SEDAN).build();

	ValidCheck valid;
	RunProducer runproducer;
	TestProducer testproducer;
	runproducer.runProducedCar(mycar);
	testproducer.testProducedCar(mycar);
	EXPECT_TRUE(valid.isValidCheck(mycar));
}


TEST(SEDANTEST, BOSCH_TOYOTA_MANDO)
{
	//Steering - Engine - Brake - Type
	Car* mycar = builder().steeringsystem(BOSCH_S).enginesystem(TOYOTA).brakesystem(MANDO).typesystem(SEDAN).build();

	ValidCheck valid;
	RunProducer runproducer;
	TestProducer testproducer;
	runproducer.runProducedCar(mycar);
	testproducer.testProducedCar(mycar);
	EXPECT_TRUE(valid.isValidCheck(mycar));
}



TEST(SEDANTEST, BOSCH_TOYOTA_BOSCH)
{
	//Steering - Engine - Brake - Type
	Car* mycar = builder().steeringsystem(BOSCH_S).enginesystem(TOYOTA).brakesystem(BOSCH_B).typesystem(SEDAN).build();

	ValidCheck valid;
	RunProducer runproducer;
	TestProducer testproducer;
	runproducer.runProducedCar(mycar);
	testproducer.testProducedCar(mycar);
	EXPECT_TRUE(valid.isValidCheck(mycar));
}

TEST(SEDANTEST, BOSCH_WIA_MANDO)
{
	//Steering - Engine - Brake - Type
	Car* mycar = builder().steeringsystem(BOSCH_S).enginesystem(WIA).brakesystem(MANDO).typesystem(SEDAN).build();

	ValidCheck valid;
	RunProducer runproducer;
	TestProducer testproducer;
	runproducer.runProducedCar(mycar);
	testproducer.testProducedCar(mycar);
	EXPECT_TRUE(valid.isValidCheck(mycar));
}

TEST(SEDANTEST, BOSCH_WIA_CONTINENTAL)
{
	//Steering - Engine - Brake - Type
	Car* mycar = builder().steeringsystem(BOSCH_S).enginesystem(WIA).brakesystem(CONTINENTAL).typesystem(SEDAN).build();
	ValidCheck valid;
	RunProducer runproducer;
	TestProducer testproducer;
	runproducer.runProducedCar(mycar);
	testproducer.testProducedCar(mycar);
	EXPECT_FALSE(valid.isValidCheck(mycar));
}

TEST(SEDANTEST, BOSCH_WIA_BOSCH)
{
	//Steering - Engine - Brake - Type
	Car* mycar = builder().steeringsystem(BOSCH_S).enginesystem(WIA).brakesystem(BOSCH_B).typesystem(SEDAN).build();

	ValidCheck valid;
	RunProducer runproducer;
	TestProducer testproducer;
	runproducer.runProducedCar(mycar);
	testproducer.testProducedCar(mycar);
	EXPECT_TRUE(valid.isValidCheck(mycar));
}

TEST(SEDANTEST, BOSCH_BROKEN_BOSCH)
{
	//Steering - Engine - Brake - Type
	Car* mycar = builder().steeringsystem(BOSCH_S).enginesystem(BROKEN).brakesystem(BOSCH_B).typesystem(SEDAN).build();

	ValidCheck valid;
	RunProducer runproducer;
	TestProducer testproducer;
	runproducer.runProducedCar(mycar);
	testproducer.testProducedCar(mycar);
	EXPECT_TRUE(valid.isValidCheck(mycar));
}



TEST(SUVTEST, BOSCH_GM_MANDO)
{
	//Steering - Engine - Brake - Type
	Car* mycar = builder().steeringsystem(BOSCH_S).enginesystem(GM).brakesystem(MANDO).typesystem(SUV).build();

	ValidCheck valid;
	RunProducer runproducer;
	TestProducer testproducer;
	runproducer.runProducedCar(mycar);
	testproducer.testProducedCar(mycar);
	EXPECT_TRUE(valid.isValidCheck(mycar));
}

TEST(SUVTEST, BOSCH_GM_Continental)
{
	//Steering - Engine - Brake - Type
	Car* mycar = builder().steeringsystem(BOSCH_S).enginesystem(GM).brakesystem(CONTINENTAL).typesystem(SUV).build();

	ValidCheck valid;
	RunProducer runproducer;
	TestProducer testproducer;
	runproducer.runProducedCar(mycar);
	testproducer.testProducedCar(mycar);
	EXPECT_TRUE(valid.isValidCheck(mycar));
}
TEST(SUVTEST, BOSCH_GM_Bosch)
{
	//Steering - Engine - Brake - Type
	Car* mycar = builder().steeringsystem(BOSCH_S).enginesystem(GM).brakesystem(BOSCH_B).typesystem(SUV).build();

	ValidCheck valid;
	RunProducer runproducer;
	TestProducer testproducer;
	runproducer.runProducedCar(mycar);
	testproducer.testProducedCar(mycar);
	EXPECT_TRUE(valid.isValidCheck(mycar));
}


TEST(SUVTEST, BOSCH_TOYOTA_MANDO)
{
	//Steering - Engine - Brake - Type
	Car* mycar = builder().steeringsystem(BOSCH_S).enginesystem(TOYOTA).brakesystem(MANDO).typesystem(SUV).build();

	ValidCheck valid;
	RunProducer runproducer;
	TestProducer testproducer;
	runproducer.runProducedCar(mycar);
	testproducer.testProducedCar(mycar);
	EXPECT_FALSE(valid.isValidCheck(mycar));
}


TEST(SUVTEST, BOSCH_TOYOTA_CONTINENTAL)
{
	//Steering - Engine - Brake - Type
	Car* mycar = builder().steeringsystem(BOSCH_S).enginesystem(TOYOTA).brakesystem(CONTINENTAL).typesystem(SUV).build();

	ValidCheck valid;
	RunProducer runproducer;
	TestProducer testproducer;
	runproducer.runProducedCar(mycar);
	testproducer.testProducedCar(mycar);
	EXPECT_FALSE(valid.isValidCheck(mycar));
}

TEST(SUVTEST, BOSCH_TOYOTA_BOSCH)
{
	//Steering - Engine - Brake - Type
	Car* mycar = builder().steeringsystem(BOSCH_S).enginesystem(TOYOTA).brakesystem(BOSCH_B).typesystem(SUV).build();

	ValidCheck valid;
	RunProducer runproducer;
	TestProducer testproducer;
	runproducer.runProducedCar(mycar);
	testproducer.testProducedCar(mycar);
	EXPECT_FALSE(valid.isValidCheck(mycar));
}

TEST(SUVTEST, BOSCH_WIA_MANDO)
{
	//Steering - Engine - Brake - Type
	Car* mycar = builder().steeringsystem(BOSCH_S).enginesystem(WIA).brakesystem(MANDO).typesystem(SUV).build();

	ValidCheck valid;
	RunProducer runproducer;
	TestProducer testproducer;
	runproducer.runProducedCar(mycar);
	testproducer.testProducedCar(mycar);
	EXPECT_TRUE(valid.isValidCheck(mycar));
}

TEST(SUVTEST, BOSCH_WIA_CONTINENTAL)
{
	//Steering - Engine - Brake - Type
	Car* mycar = builder().steeringsystem(BOSCH_S).enginesystem(WIA).brakesystem(CONTINENTAL).typesystem(SUV).build();
	ValidCheck valid;
	RunProducer runproducer;
	TestProducer testproducer;
	runproducer.runProducedCar(mycar);
	testproducer.testProducedCar(mycar);
	EXPECT_TRUE(valid.isValidCheck(mycar));
}

TEST(SUVTEST, BOSCH_WIA_BOSCH)
{
	//Steering - Engine - Brake - Type
	Car* mycar = builder().steeringsystem(BOSCH_S).enginesystem(WIA).brakesystem(BOSCH_B).typesystem(SUV).build();

	ValidCheck valid;
	RunProducer runproducer;
	TestProducer testproducer;
	runproducer.runProducedCar(mycar);
	testproducer.testProducedCar(mycar);
	EXPECT_TRUE(valid.isValidCheck(mycar));
}

TEST(SUVTEST, BOSCH_BROKEN_BOSCH)
{
	//Steering - Engine - Brake - Type
	Car* mycar = builder().steeringsystem(BOSCH_S).enginesystem(BROKEN).brakesystem(BOSCH_B).typesystem(SUV).build();

	ValidCheck valid;
	RunProducer runproducer;
	TestProducer testproducer;
	runproducer.runProducedCar(mycar);
	testproducer.testProducedCar(mycar);
	EXPECT_TRUE(valid.isValidCheck(mycar));
}





TEST(TRUCKTEST, BOSCH_GM_MANDO)
{
	//Steering - Engine - Brake - Type
	Car* mycar = builder().steeringsystem(BOSCH_S).enginesystem(GM).brakesystem(MANDO).typesystem(TRUCK).build();

	ValidCheck valid;
	RunProducer runproducer;
	TestProducer testproducer;
	runproducer.runProducedCar(mycar);
	testproducer.testProducedCar(mycar);
	EXPECT_FALSE(valid.isValidCheck(mycar));
}

TEST(TRUCKTEST, BOSCH_GM_Continental)
{
	//Steering - Engine - Brake - Type
	Car* mycar = builder().steeringsystem(BOSCH_S).enginesystem(GM).brakesystem(CONTINENTAL).typesystem(TRUCK).build();

	ValidCheck valid;
	RunProducer runproducer;
	TestProducer testproducer;
	runproducer.runProducedCar(mycar);
	testproducer.testProducedCar(mycar);
	EXPECT_TRUE(valid.isValidCheck(mycar));
}
TEST(TRUCKTEST, BOSCH_GM_Bosch)
{
	//Steering - Engine - Brake - Type
	Car* mycar = builder().steeringsystem(BOSCH_S).enginesystem(GM).brakesystem(BOSCH_B).typesystem(TRUCK).build();

	ValidCheck valid;
	RunProducer runproducer;
	TestProducer testproducer;
	runproducer.runProducedCar(mycar);
	testproducer.testProducedCar(mycar);
	EXPECT_TRUE(valid.isValidCheck(mycar));
}


TEST(TRUCKTEST, BOSCH_TOYOTA_MANDO)
{
	//Steering - Engine - Brake - Type
	Car* mycar = builder().steeringsystem(BOSCH_S).enginesystem(TOYOTA).brakesystem(MANDO).typesystem(TRUCK).build();

	ValidCheck valid;
	RunProducer runproducer;
	TestProducer testproducer;
	runproducer.runProducedCar(mycar);
	testproducer.testProducedCar(mycar);
	EXPECT_FALSE(valid.isValidCheck(mycar));
}


TEST(TRUCKTEST, BOSCH_TOYOTA_CONTINENTAL)
{
	//Steering - Engine - Brake - Type
	Car* mycar = builder().steeringsystem(BOSCH_S).enginesystem(TOYOTA).brakesystem(CONTINENTAL).typesystem(TRUCK).build();

	ValidCheck valid;
	RunProducer runproducer;
	TestProducer testproducer;
	runproducer.runProducedCar(mycar);
	testproducer.testProducedCar(mycar);
	EXPECT_TRUE(valid.isValidCheck(mycar));
}

TEST(TRUCKTEST, BOSCH_TOYOTA_BOSCH)
{
	//Steering - Engine - Brake - Type
	Car* mycar = builder().steeringsystem(BOSCH_S).enginesystem(TOYOTA).brakesystem(BOSCH_B).typesystem(TRUCK).build();

	ValidCheck valid;
	RunProducer runproducer;
	TestProducer testproducer;
	runproducer.runProducedCar(mycar);
	testproducer.testProducedCar(mycar);
	EXPECT_TRUE(valid.isValidCheck(mycar));
}

TEST(TRUCKTEST, BOSCH_WIA_MANDO)
{
	//Steering - Engine - Brake - Type
	Car* mycar = builder().steeringsystem(BOSCH_S).enginesystem(WIA).brakesystem(MANDO).typesystem(TRUCK).build();

	ValidCheck valid;
	RunProducer runproducer;
	TestProducer testproducer;
	runproducer.runProducedCar(mycar);
	testproducer.testProducedCar(mycar);
	EXPECT_FALSE(valid.isValidCheck(mycar));
}

TEST(TRUCKTEST, BOSCH_WIA_CONTINENTAL)
{
	//Steering - Engine - Brake - Type
	Car* mycar = builder().steeringsystem(BOSCH_S).enginesystem(WIA).brakesystem(CONTINENTAL).typesystem(TRUCK).build();

	ValidCheck valid;
	RunProducer runproducer;
	TestProducer testproducer;
	runproducer.runProducedCar(mycar);
	testproducer.testProducedCar(mycar);
	EXPECT_FALSE(valid.isValidCheck(mycar));
}

TEST(TRUCKTEST, BOSCH_WIA_BOSCH)
{
	//Steering - Engine - Brake - Type
	Car* mycar = builder().steeringsystem(BOSCH_S).enginesystem(WIA).brakesystem(BOSCH_B).typesystem(TRUCK).build();

	ValidCheck valid;
	RunProducer runproducer;
	TestProducer testproducer;
	runproducer.runProducedCar(mycar);
	testproducer.testProducedCar(mycar);
	EXPECT_FALSE(valid.isValidCheck(mycar));
}

TEST(TRUCKTEST, BOSCH_BROKEN_BOSCH)
{
	//Steering - Engine - Brake - Type
	Car* mycar = builder().steeringsystem(BOSCH_S).enginesystem(BROKEN).brakesystem(BOSCH_B).typesystem(TRUCK).build();

	ValidCheck valid;
	RunProducer runproducer;
	TestProducer testproducer;
	runproducer.runProducedCar(mycar);
	testproducer.testProducedCar(mycar);
	EXPECT_TRUE(valid.isValidCheck(mycar));
}



TEST(SEDANTEST, BOSCH_TOYOTA_CONTINENTAL)
{
	//Steering - Engine - Brake - Type

	Car* mycar = builder().steeringsystem(BOSCH_S).enginesystem(TOYOTA).brakesystem(CONTINENTAL).typesystem(SEDAN).build();
	ValidCheck valid;
	RunProducer runproducer;
	TestProducer testproducer;
	runproducer.runProducedCar(mycar);
	testproducer.testProducedCar(mycar);
	EXPECT_FALSE(valid.isValidCheck(mycar));
}

#endif