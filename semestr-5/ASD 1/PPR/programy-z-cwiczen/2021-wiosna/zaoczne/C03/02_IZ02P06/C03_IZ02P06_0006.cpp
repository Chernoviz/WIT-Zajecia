#include <iostream>
using std::cout;
using std::endl;
using std::cin;
///---------------------------------------------------------------------------------
void MyTest();
void PrintInt(int);
int Add(int, int);
///---------------------------------------------------------------------------------
void MyTest(){
    cout<<"\n\t\tFunkcja MyTest()\n\n";
    }
///---------------------------------------------------------------------------------
void PrintInt(int x){
    cout<<"x = "<<x;
    }
///---------------------------------------------------------------------------------
int Add(int x, int y){
/**    int sum;
    sum = x + y;
    return sum;
    */
    return x + y;
    }
///---------------------------------------------------------------------------------
///---------------------------------------------------------------------------------
int main(){
    int x =7, y = 12, z;
    MyTest();
    PrintInt(x);
    cout<<"\t";
    PrintInt(y);
    cout<<"\n";
    z = Add(x, y);
    cout<<"Sum = "<<z<<endl;
    return 0;
    }

    
    
    
    
    