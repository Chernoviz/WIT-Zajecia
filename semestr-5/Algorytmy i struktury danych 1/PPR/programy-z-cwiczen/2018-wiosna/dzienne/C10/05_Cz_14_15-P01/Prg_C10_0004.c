#include <stdio.h>
#include <stdlib.h>
/*********************************************************/
/*********************************************************/
int MyRead(char*);
/*********************************************************/
/*********************************************************/
int MyRead(char* myStr){
    int x;
    printf("%s",myStr);
    scanf("%d", &x);

    return x;
    }
/*********************************************************/
/*********************************************************/
int main(){
    FILE* myFile;

    myFile = fopen("MyData.dat","r");

    /**
    r - read
    w - write
    a - append
    */

    return 0;
    }







