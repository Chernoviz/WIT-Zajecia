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


///std = c++0x
///---------------------------------------------------------------------------------------
///---------------------------------------------------------------------------------------
int main(){
    srand(time(0));
    for(int i = 0; i< 20; ++i)
        cout<<rand()%10<<endl;
            
    return 0;
    }
///13, 13, 13, 13, 10 ...
