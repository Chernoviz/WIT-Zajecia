#include <stdio.h>
/******************************************************************/
int MyRead();
void BlackLine(int);
/******************************************************************/
/******************************************************************/
int MyRead(){
    int x;

    printf("x ?=");
    scanf("%d", &x);

    return x;
    }

/******************************************************************/
void BlackLine(int x){
    int j;
    for(j=0; j<x; ++j)
        printf("* ");
    }
/******************************************************************/
/******************************************************************/
int main(){
    int x;
    int i;

    x = MyRead();

    for(i=0; i<x; ++i){
        BlackLine(x);
        printf("\n");
        }


    return 0;
    }