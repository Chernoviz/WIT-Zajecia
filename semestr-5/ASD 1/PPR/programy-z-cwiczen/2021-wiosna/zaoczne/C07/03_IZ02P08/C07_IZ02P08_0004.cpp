#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <iomanip>
#include <fstream>
///Linux ctrl + d
///Windows ctrl + z potem ENTER
using std::istringstream;
using std::stringstream;
using std::string;
using std::getline;
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::setw;
using std::istream;
using std::fstream;

///---------------------------------------------------------------------------
///---------------------------------------------------------------------------
///---------------------------------------------------------------------------
int main(){
    fstream fileStream;
    string myStr;
    stringstream ss1;
    
    fileStream.open("Bill_0001.txt",fstream::in);
    
    
    while(getline(fileStream, myStr)){
        ss1 = stringstream("");
        ss1<<myStr;
        double x;
        while(ss1>>myStr) 
            if(stringstream(myStr)>> x) cout<<x<<" ";        
        cout<<endl;
        }
    
    
    fileStream.close();      
    
    
    return 0;
    }

