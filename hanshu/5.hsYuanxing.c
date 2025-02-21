// Created by bbbb on 2024/12/4.
//函数原型：写在main函数下方的函数是调用不了的，所有添加了函数原型来解决此问题
#include<stdio.h>
//函数原型
int max(int, int );
void print(){
    printf("hello");
}
int add(int a,int b){
    return a+b;
}
int main(){
    print();
    add(2,3);
    //如果没有加函数原型的话直接调用max函数是错误的，
    //max(3,4);
    max(3,4);
    return 0;
}
int max(int a,int b){
    int max;
    if(a<b){
       max=b;
    }else{
        max=a;
    }
    return max;
}