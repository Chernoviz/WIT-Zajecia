#include <iostream>
#include <ctime>
using std::cout;
using std::endl;
using std::cin;
///---------------------------------------------------------------------------
int Fate(int, int);///losowa liczba z przedziału [a, b)
///---------------------------------------------------------------------------
int Fate(int a, int b){
    return (rand()%(b-a))  + a;
    }
///---------------------------------------------------------------------------
///---------------------------------------------------------------------------
int main(){
    srand(time(0));
    for(int i=0; i< 40;++i)
        cout<<Fate(10,21)<<endl;

    return 0;
    }
///13, 13, 13, 13, 10 ...