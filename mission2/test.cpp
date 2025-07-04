#ifdef _DEBUG

#include "gmock/gmock.h"
#include"Car.h"
#include"TestProducer.h"
#include"ValidCheck.h"
#include"runProducerCar.h"
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
	Car mycar(MOBIS, GM, MANDO, SEDAN);
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
	Car mycar(MOBIS, GM, BOSCH_B, SUV);
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
	Car mycar(BOSCH_S, GM, MANDO, SEDAN);
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
	Car mycar(BOSCH_S, GM, CONTINENTAL, SEDAN);
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
	Car mycar(BOSCH_S, GM, BOSCH_B, SEDAN);
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
	Car mycar(BOSCH_S, TOYOTA, MANDO, SEDAN);
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
	Car mycar(BOSCH_S, TOYOTA, CONTINENTAL, SEDAN);
	ValidCheck valid;
	RunProducer runproducer;
	TestProducer testproducer;
	runproducer.runProducedCar(mycar);
	testproducer.testProducedCar(mycar);
	EXPECT_FALSE(valid.isValidCheck(mycar));
}

TEST(SEDANTEST, BOSCH_TOYOTA_BOSCH)
{
	//Steering - Engine - Brake - Type
	Car mycar(BOSCH_S, TOYOTA, BOSCH_B, SEDAN);
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
	Car mycar(BOSCH_S, WIA, MANDO, SEDAN);
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
	Car mycar(BOSCH_S, WIA, CONTINENTAL, SEDAN);
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
	Car mycar(BOSCH_S, WIA, BOSCH_B, SEDAN);
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
	Car mycar(BOSCH_S, BROKEN, BOSCH_B, SEDAN);
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
	Car mycar(BOSCH_S, GM, MANDO, SUV);
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
	Car mycar(BOSCH_S, GM, CONTINENTAL, SUV);
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
	Car mycar(BOSCH_S, GM, BOSCH_B, SUV);
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
	Car mycar(BOSCH_S, TOYOTA, MANDO, SUV);
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
	Car mycar(BOSCH_S, TOYOTA, CONTINENTAL, SUV);
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
	Car mycar(BOSCH_S, TOYOTA, BOSCH_B, SUV);
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
	Car mycar(BOSCH_S, WIA, MANDO, SUV);
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
	Car mycar(BOSCH_S, WIA, CONTINENTAL, SUV);
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
	Car mycar(BOSCH_S, WIA, BOSCH_B, SUV);
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
	Car mycar(BOSCH_S, BROKEN, BOSCH_B, SUV);
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
	Car mycar(BOSCH_S, GM, MANDO, TRUCK);
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
	Car mycar(BOSCH_S, GM, CONTINENTAL, TRUCK);
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
	Car mycar(BOSCH_S, GM, BOSCH_B, TRUCK);
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
	Car mycar(BOSCH_S, TOYOTA, MANDO, TRUCK);
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
	Car mycar(BOSCH_S, TOYOTA, CONTINENTAL, TRUCK);
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
	Car mycar(BOSCH_S, TOYOTA, BOSCH_B, TRUCK);
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
	Car mycar(BOSCH_S, WIA, MANDO, TRUCK);
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
	Car mycar(BOSCH_S, WIA, CONTINENTAL, TRUCK);
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
	Car mycar(BOSCH_S, WIA, BOSCH_B, TRUCK);
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
	Car mycar(BOSCH_S, BROKEN, BOSCH_B, TRUCK);
	ValidCheck valid;
	RunProducer runproducer;
	TestProducer testproducer;
	runproducer.runProducedCar(mycar);
	testproducer.testProducedCar(mycar);
	EXPECT_TRUE(valid.isValidCheck(mycar));
}




#endif