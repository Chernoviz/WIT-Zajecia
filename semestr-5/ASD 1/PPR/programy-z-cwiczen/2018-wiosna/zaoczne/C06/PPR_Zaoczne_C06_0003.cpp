#include <iostream>
using namespace std;
///************************************************************************************
///************************************************************************************
struct MyPoint{
    double x;
    double y;
    };
///************************************************************************************
///************************************************************************************
MyPoint MyPointNew(double, double);
void MyPointPrint(MyPoint, string);
///************************************************************************************
///************************************************************************************
double MyRead(string);
///************************************************************************************
///************************************************************************************
MyPoint MyPointNew(double x, double y){
    MyPoint myPoint;

    myPoint.x = x;
    myPoint.y = y;

    return myPoint;
    }
///************************************************************************************
void MyPointPrint(MyPoint myPoint, string mS){
    cout<<mS;
    cout<<"x = "<<myPoint.x<<", y = "<<myPoint.y;
    }
///************************************************************************************
///************************************************************************************
double MyRead(string mS){
    double x;
    cout<<mS;
    cin>>x;
    return x;
    }
///************************************************************************************
///************************************************************************************

int main(){
    MyPoint mP1;
    string aQQ ="\nAla ma kota\n******************\n";

    cout<<aQQ;
    mP1 = MyPointNew(MyRead("\tx ?="), MyRead("mP1:\n\ty ?="));
    MyPointPrint(mP1, "mP1: ");
    MyPointPrint(MyPointNew(MyRead("\tx ?="),
                            MyRead("\nEmpty:\n\ty ?=")),
                 "\n********************\nEmpty: ");

    return 0;
    }










