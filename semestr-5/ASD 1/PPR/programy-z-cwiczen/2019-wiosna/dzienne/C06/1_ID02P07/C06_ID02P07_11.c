#include <stdio.h>
/********************************************************/
/********************************************************/
int Add2(int, int);
/********************************************************/
/********************************************************/
int Add3(int px, int py){
    return Add2(px,py);
    }
/********************************************************/
int Add2(int px, int py){
    int sum;
    sum = px+py;
    return sum;
    }
/********************************************************/
int MyAbs(int px){
    if(px<0) px=-px;
    return px;
    }
/********************************************************/
int MyRead(){
    int x;
    printf("x? = ");
    scanf("%d",&x);
    return x;
    }
/********************************************************/
int main(){
    int x=6;
    printf("Adres MyAbs = %p\n ",MyAbs);
    printf("%d\n",Add3(x,x));
    return 0;
    }