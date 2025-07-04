#ifdef _DEBUG

#include "gmock/gmock.h"

int main()
{
    testing::InitGoogleMock();
    return RUN_ALL_TESTS();
}

#else

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include"define.h"
#include"Car.h"
#include"TestProducer.h"
#include"ValidCheck.h"
#include"runProducerCar.h"
#define CLEAR_SCREEN "\033[H\033[2J"

int stack[10];

void selectCarType(int answer);
void selectEngine(int answer);
void selectbrakeSystem(int answer);
void selectSteeringSystem(int answer);
void runProducedCar();
void delay(int ms);
void printStepMessage(int step);
bool eraseNewlineChar(char* buf);
bool checkPossibleRange(int step, int answer);
bool backtoInit(int& step, int answer);
bool backtoBefore(int& step, int answer);
void goNextStep(int& step, int answer);
void getInput(char* buf);

void delay(int ms)
{
    volatile int sum = 0;
    for (int i = 0; i < 1000; i++)
    {
        for (int j = 0; j < 1000; j++)
        {
            for (int t = 0; t < ms; t++)
            {
                sum++;
            }
        }
    }
}

void printCarTypemenu()
{
    printf(CLEAR_SCREEN);

    printf("        ______________\n");
    printf("       /|            | \n");
    printf("  ____/_|_____________|____\n");
    printf(" |                      O  |\n");
    printf(" '-(@)----------------(@)--'\n");
    printf("===============================\n");
    printf("어떤 차량 타입을 선택할까요?\n");
    printf("1. Sedan\n");
    printf("2. SUV\n");
    printf("3. Truck\n");
}
void printEnginemenu()
{
    printf(CLEAR_SCREEN);
    printf("어떤 엔진을 탑재할까요?\n");
    printf("0. 뒤로가기\n");
    printf("1. GM\n");
    printf("2. TOYOTA\n");
    printf("3. WIA\n");
    printf("4. 고장난 엔진\n");
}
void printBreakSystemmenu()
{
    printf(CLEAR_SCREEN);
    printf("어떤 제동장치를 선택할까요?\n");
    printf("0. 뒤로가기\n");
    printf("1. MANDO\n");
    printf("2. CONTINENTAL\n");
    printf("3. BOSCH\n");
}
void printSteeringSystemmenu()
{
    printf(CLEAR_SCREEN);
    printf("어떤 조향장치를 선택할까요?\n");
    printf("0. 뒤로가기\n");
    printf("1. BOSCH\n");
    printf("2. MOBIS\n");
}
void printRunTest()
{
    printf(CLEAR_SCREEN);
    printf("멋진 차량이 완성되었습니다.\n");
    printf("어떤 동작을 할까요?\n");
    printf("0. 처음 화면으로 돌아가기\n");
    printf("1. RUN\n");
    printf("2. Test\n");
}
void printStepMessage(int step)
{
    if (step == CarType_Q)
    {
        printCarTypemenu();
    }
    else if (step == Engine_Q)
    {
        printEnginemenu();
    }
    else if (step == brakeSystem_Q)
    {
        printBreakSystemmenu();;
    }
    else if (step == SteeringSystem_Q)
    {
        printSteeringSystemmenu();
    }
    else if (step == Run_Test)
    {
        printRunTest();
    }
    printf("===============================\n");

}
bool eraseNewlineChar(char* buf)
{
    char* context = nullptr;
    strtok_s(buf, "\r", &context);
    strtok_s(buf, "\n", &context);

    if (!strcmp(buf, "exit"))
    {
        printf("바이바이\n");
        return false;// break;
    }
    return true;
}
bool isNumber(char* buf, int &answer)
{
    // 숫자로 된 대답인지 확인

    char* checkNumber;
    answer = strtol(buf, &checkNumber, 10); // 문자열을 10진수로 변환

    // 입력받은 문자가 숫자가 아니라면
    if (*checkNumber != '\0')
    {
        printf("ERROR :: 숫자만 입력 가능\n");
        delay(800);
        return false;
    }
    return true;

}
int main()
{
    char buf[100];
    int step = CarType_Q;
    int answer;

    while (1)
    {
        // step message 출력
        printStepMessage(step);
        
        // input 입력
        getInput(buf);
        // 엔터 개행문자 제거
        if (eraseNewlineChar(buf) == false)break;
        
        // 숫자로 된 대답인지 확인
        if (isNumber(buf, answer) == false)continue;
        
        // 범위 체크
        if (checkPossibleRange(step, answer) == false) continue;
        
        // 처음으로 돌아가기
        if (backtoInit(step, answer)) continue;

        // 이전으로 돌아가기
        if (backtoBefore(step, answer))continue;

        // 다음 메뉴 진행
        goNextStep(step, answer);
    }
}


void selectCarType(int answer)
{
    stack[CarType_Q] = answer;
    if (answer == 1)
        printf("차량 타입으로 Sedan을 선택하셨습니다.\n");
    if (answer == 2)
        printf("차량 타입으로 SUV을 선택하셨습니다.\n");
    if (answer == 3)
        printf("차량 타입으로 Truck을 선택하셨습니다.\n");
}

void selectEngine(int answer)
{
    stack[Engine_Q] = answer;
    if (answer == 1)
        printf("GM 엔진을 선택하셨습니다.\n");
    if (answer == 2)
        printf("TOYOTA 엔진을 선택하셨습니다.\n");
    if (answer == 3)
        printf("WIA 엔진을 선택하셨습니다.\n");
}

void selectbrakeSystem(int answer)
{
    stack[brakeSystem_Q] = answer;
    if (answer == 1)
        printf("MANDO 제동장치를 선택하셨습니다.\n");
    if (answer == 2)
        printf("CONTINENTAL 제동장치를 선택하셨습니다.\n");
    if (answer == 3)
        printf("BOSCH 제동장치를 선택하셨습니다.\n");
}

void selectSteeringSystem(int answer)
{
    stack[SteeringSystem_Q] = answer;
    if (answer == 1)
        printf("BOSCH 조향장치를 선택하셨습니다.\n");
    if (answer == 2)
        printf("MOBIS 조향장치를 선택하셨습니다.\n");
}

void testProducedCar(Car mycar)
{
    
    if (mycar.getCarType() == SEDAN && mycar.getBrake() == CONTINENTAL)
    {
        printf("자동차 부품 조합 테스트 결과 : FAIL\n");
        printf("Sedan에는 Continental제동장치 사용 불가\n");
    }
    else if (mycar.getCarType() == SUV && mycar.getEngine() == TOYOTA)
    {
        printf("자동차 부품 조합 테스트 결과 : FAIL\n");
        printf("SUV에는 TOYOTA엔진 사용 불가\n");
    }
    else if (mycar.getCarType() == TRUCK && mycar.getEngine() == WIA)
    {
        printf("자동차 부품 조합 테스트 결과 : FAIL\n");
        printf("Truck에는 WIA엔진 사용 불가\n");
    }
    else if (mycar.getCarType() == TRUCK && mycar.getBrake() == MANDO)
    {
        printf("자동차 부품 조합 테스트 결과 : FAIL\n");
        printf("Truck에는 Mando제동장치 사용 불가\n");
    }
    else if (mycar.getBrake() == BOSCH_B && mycar.getSteering() != BOSCH_S)
    {
        printf("자동차 부품 조합 테스트 결과 : FAIL\n");
        printf("Bosch제동장치에는 Bosch조향장치 이외 사용 불가\n");
    }
    else
    {
        printf("자동차 부품 조합 테스트 결과 : PASS\n");
    }
}

bool checkPossibleRange(int step, int answer)
{
    if (step == CarType_Q && !(answer >= 1 && answer <= 3))
    {
        printf("ERROR :: 차량 타입은 1 ~ 3 범위만 선택 가능\n");
        delay(800);
        return false;
    }

    if (step == Engine_Q && !(answer >= 0 && answer <= 4))
    {
        printf("ERROR :: 엔진은 1 ~ 4 범위만 선택 가능\n");
        delay(800);
        return false;
    }

    if (step == brakeSystem_Q && !(answer >= 0 && answer <= 3))
    {
        printf("ERROR :: 제동장치는 1 ~ 3 범위만 선택 가능\n");
        delay(800);
        return false;
    }

    if (step == SteeringSystem_Q && !(answer >= 0 && answer <= 2))
    {
        printf("ERROR :: 조향장치는 1 ~ 2 범위만 선택 가능\n");
        delay(800);
        return false;
    }

    if (step == Run_Test && !(answer >= 0 && answer <= 2))
    {
        printf("ERROR :: Run 또는 Test 중 하나를 선택 필요\n");
        delay(800);
        return false;
    }
    return true;
}

bool backtoInit(int& step, int answer)
{
    if (answer == 0 && step == Run_Test)
    {
        step = CarType_Q;
        return true;
    }
    return false;
}

bool backtoBefore(int& step, int answer)
{
    if (answer == 0 && step >= 1)
    {
        step -= 1;
        return true;
    }
    return false;
}

void goNextStep(int& step, int answer)
{
    if (step == CarType_Q)
    {
        selectCarType(answer);
        delay(800);
        step = Engine_Q;
    }
    else if (step == Engine_Q)
    {
        selectEngine(answer);
        delay(800);
        step = brakeSystem_Q;
    }
    else if (step == brakeSystem_Q)
    {
        selectbrakeSystem(answer);
        delay(800);
        step = SteeringSystem_Q;
    }
    else if (step == SteeringSystem_Q)
    {
        selectSteeringSystem(answer);
        delay(800);
        step = Run_Test;
    }
    else if (step == Run_Test)
    {
        Car mycar(static_cast<SteeringSystem>(stack[SteeringSystem_Q]), static_cast<Engine>(stack[Engine_Q]), static_cast<brakeSystem>(stack[brakeSystem_Q]), static_cast<CarType>(stack[CarType_Q]));
        if (answer == 1)
        {
            RunProducer runproducer;
            runproducer.runProducedCar(mycar);
            delay(2000);
        }
        else if (answer == 2)
        {
            printf("Test...\n");
            delay(1500);
            TestProducer CarTest;
            CarTest.testProducedCar(mycar);
            delay(2000);
        }
        
    }
}

void getInput(char* buf)
{
    printf("INPUT > ");
    fgets(buf, sizeof(buf), stdin);

}

#endif