#include <stdio.h>
/************************************************************************/
/************************************************************************/
int MyRead();
void BlackLine(int);
void MySquare(int);
/************************************************************************/
/************************************************************************/
int MyRead(){
    int x;
    printf("x ?=");
    scanf("%d", &x);

    return x;
    }
/************************************************************************/
void BlackLine(int x){
    int j;
    for(j=0;j<x;++j)
        printf("* ");
    }
/************************************************************************/
void MySquare(int x){
    int j;
    for(j=0;j<x;++j){
        BlackLine(x);
        printf("\n");
        }
    }
/************************************************************************/
/************************************************************************/
int main(){
    int x, i, j;

    x = MyRead();

    MySquare(x);

    return 0;
    }