#include <stdio.h>
/***************************************************************************************/
/***************************************************************************************/
typedef struct{
    double x;
    double y;
    }MyPoint;
/***************************************************************************************/
/***************************************************************************************/
typedef struct{
    MyPoint A;
    MyPoint B;
    }MySegment;
/***************************************************************************************/
/***************************************************************************************/
MyPoint MyPointNew(double,double);
void MyPointPrint(MyPoint, char*);
MyPoint MyPointMove(MyPoint, MyPoint);
/***************************************************************************************/
/***************************************************************************************/
double MyRead(char*);
/***************************************************************************************/
/***************************************************************************************/
MyPoint MyPointNew(double x, double y){
    MyPoint myPoint;
    myPoint.x = x;
    myPoint.y = y;
    return myPoint;
    }
/***************************************************************************************/
void MyPointPrint(MyPoint myPoint, char * mS){
    printf("%sx = %f, y=%f",mS, myPoint.x, myPoint.y);

    }
/***************************************************************************************/
MyPoint MyPointMove(MyPoint mP1, MyPoint mV){
    return MyPointNew(mP1.x + mV.x, mP1.y + mV.y);
    }
/***************************************************************************************/
/***************************************************************************************/
double MyRead(char* mS){
    double x;
    printf("%s",mS);
    scanf("%lf", &x);
    return x;
    }
/***************************************************************************************/
/**
    MyPoint a1, a2;
        a2 = 11101011
        a1 = a2
        a1 -> 11101011
*/
/***************************************************************************************/
int main(){
    MyPoint mP1, mP2;

    mP1 = MyPointNew(MyRead("\tx ?="),MyRead("\nmP1:\n\ty ?="));
    MyPointPrint(mP1,"\nmP1:\t");
    mP2 = MyPointMove(mP1, MyPointNew(1,1));
    MyPointPrint(mP2,"\nmP2:\t");



    return 0;
    }