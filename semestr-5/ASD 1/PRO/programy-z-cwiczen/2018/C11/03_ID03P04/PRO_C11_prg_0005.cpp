#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ostream;
using std::istream;
///********************************************************************************************
///********************************************************************************************
class A{
    public:
        A(int, int);

        int GetX1();
        int GetX2();
        void Print(string="",string="", string="");

    private:
        int x1;
        int x2;
    };
///********************************************************************************************
class B:public A{
    public:
        B(int, int);
    private:

    };
///********************************************************************************************
///********************************************************************************************
A::A(int x1, int x2):x1(x1), x2(x2){}
///********************************************************************************************
int A::GetX1(){return x1;}
///********************************************************************************************
int A::GetX2(){return x2;}
///********************************************************************************************
void A::Print(string strB, string strM, string strE){
    cout<<strB<<x1<<strM<<x2<<strE;
    }
///********************************************************************************************
///********************************************************************************************
B::B(int x1, int x2):A(x1,x2){}
///********************************************************************************************
///********************************************************************************************
int main(){
    B myA(1,2);

    cout<<"x1 = "<<myA.GetX1()<<", x2 = "<<myA.GetX2()<<endl;
    myA.Print("A::x1 = ",", A::x2 = ","\n");

    return 0;
    }