#include<stdio.h>
#include<stdlib.h>
/************************************************************************/
/************************************************************************/
int MyRead(char*);
void MySwap(int*, int*);
/** 3b, 4b, 5b*/
int* MyTabIntX01(int*);
/** 3, 4, 5 */
void FillTabIntX01(int*, int, int, int);
void PrinTabIntX01(int*, int);
void SwapTable(int**, int*, int**, int*);
/************************************************************************/
/************************************************************************/
int MyRead(char* myStr){
    int x;
    printf("%s",myStr);
    scanf("%d", &x);
    return x;
    }
/************************************************************************/
void MySwap(int* a, int* b){
    int tmp;

    tmp=*a;
    *a=*b;
    *b=tmp;
    }
/************************************************************************/
int* MyTabIntX01(int* sT){
    *sT=MyRead("size ?=");
    return (int*)malloc(sizeof(int)**sT);
    }
/************************************************************************/
void FillTabIntX01(int* mT, int sT, int a1, int r){
    int i;
    mT[0]=a1;
    for(i=1; i<sT;++i)
        mT[i]=mT[i-1]+r;
    }
/************************************************************************/
void PrinTabIntX01(int* mT, int sT){
    int i;
    for(i=0; i<sT;++i)
        printf("[%2d]",mT[i]);
    }
/************************************************************************/
void SwapTable(int** mT1, int* sS1, int** mT2, int* sS2 ){
    int * tmp;
    tmp=*mT1;
    *mT1=*mT2;
    *mT2=tmp;
    MySwap(sS1,sS2);
    }
/************************************************************************/
/************************************************************************/
int main(){
    int *myT1, sT1;
    int *myT2, sT2;

    printf("myT1: ");
    myT1=MyTabIntX01(&sT1);
    printf("myT2: ");
    myT2=MyTabIntX01(&sT2);

    printf("myT1: ");
    FillTabIntX01(myT1, sT1, MyRead("myT1: a1 ?="), MyRead("r ?="));
    printf("myT2: ");
    FillTabIntX01(myT2, sT2, MyRead("myT2: a1 ?="), MyRead("r ?="));

    printf("myT1: ");
    PrinTabIntX01(myT1, sT1);
    printf("\n");

    printf("myT2: ");
    PrinTabIntX01(myT2, sT2);
    printf("\n");

    SwapTable( &myT1, &sT1,&myT2, &sT2);

    printf("\n***************************************\n\n");
    printf("myT1: ");
    PrinTabIntX01(myT1, sT1);
    printf("\n");

    printf("myT2: ");
    PrinTabIntX01(myT2, sT2);
    printf("\n");

    free(myT2);
    free(myT1);
    return 0;
    }