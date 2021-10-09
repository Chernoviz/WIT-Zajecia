#include <stdio.h>
#include <stdlib.h>
/*******************************************************************/
/*******************************************************************/
typedef struct MyBst{
    int x;
    struct MyBst* left;
    struct MyBst* right;
    }BST;
/*******************************************************************/
/*******************************************************************/
BST* NewNodeBST(int);
BST* AddNodeBST(BST*,BST*);
BST* NewBST(int);
BST* PrintInBST(BST*);
/*******************************************************************/
/*******************************************************************/
int MyRead(char*);
/*******************************************************************/
/*******************************************************************/
BST* NewNodeBST(int x){
    BST* myBST;
    myBST = (BST*)malloc(sizeof(BST));
    myBST->x=x;
    myBST->left = NULL;
    myBST->right = NULL;
    return myBST;
    }
/*******************************************************************/
BST* AddNodeBST(BST* root,BST* node){
    if(NULL==root) return NULL;
    if(root->x>node->x){
        if(NULL==root->left) root->left=node;
        else AddNodeBST(root->left,node);
        }
    else{
        if(NULL==root->right) root->right=node;
        else AddNodeBST(root->right,node);
        }
    return root;
    }
/*******************************************************************/
BST* NewBST(int x){
    int i;
    BST* root=NewNodeBST(MyRead("x ?= "));
    if(x<1)return NULL;
    for(i=1;i<x;++i){
        AddNodeBST(root,NewNodeBST(MyRead("x ?= ")));
        }
    return root;
    }
/*******************************************************************/
BST* PrintInBST(BST* root){
    if(NULL==root) return 0;
    PrintInBST(root->left);
    printf("%3d\n",root->x);
    PrintInBST(root->right);
    return root;
    }
/*******************************************************************/
/*******************************************************************/
int MyRead(char* myStr){
    int x;
    printf("%s",myStr);
    scanf("%d",&x);
    return x;
    }
/*******************************************************************/
/*******************************************************************/
int main(){
    PrintInBST(NewBST(MyRead("size ?= ")));
    return 0;
    }











