#include <stdio.h>
#include <stdlib.h>
/*********************************************************/
/*********************************************************/
int MyRead(char * myStr);
/*********************************************************/
/*********************************************************/
int MyRead(char* myStr){
    int x;
    printf("%s", myStr);
    scanf("%d", &x);

    return x;
    }
/*********************************************************/
/*********************************************************/
int main(){
    int x;

    x=MyRead("x ?=");

    return 0;
    }