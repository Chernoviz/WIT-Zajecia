#include <iostream>
#include <ctime>
#include <cstdlib>

using std::cout;
using std::endl;
using std::cin;

///---------------------------------------------------------------------------------------
///---------------------------------------------------------------------------------------
int Fate(int a, int b);///funkcja zwraca losową liczbę z przedziału [a, b)
///---------------------------------------------------------------------------------------
///---------------------------------------------------------------------------------------
int Fate(int a, int b){
    return rand()%(b-a) + a;
    }


///---------------------------------------------------------------------------------------
///std = c++0x
///---------------------------------------------------------------------------------------
int main(){
    srand(time(0));
    for(int i = 0; i< 30; ++i)
        cout<<Fate(10, 21)<<endl;
            
    return 0;
    }
