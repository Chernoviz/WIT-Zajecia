#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::string;
///------------------------------------------------------------------------------------
int ReadInt(string ="x? = ");
///------------------------------------------------------------------------------------
int ReadInt(string myStr){
    int x;
    cout<<myStr;
    cin>>x;
    return x;
    }
///------------------------------------------------------------------------------------
///------------------------------------------------------------------------------------
int main(){    
    int x, y;
    x = ReadInt();
    y = ReadInt("y? = ");
    cout<<"x = "<<x<<", y = "<<y<<endl;
    
    return 0;
    }
    
    
    
    
    