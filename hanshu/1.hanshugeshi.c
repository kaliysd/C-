// Created by bbbb on 2024/11/17.
//函数格式的使用
/*
 1.函数的声明格式：
 返回值类型 函数名(数据类型1 形参1， 数据类型2 形参2 ... 数据类型n 形参n){
        函数体;
 }
 * */
#include<stdio.h>
//定义一个函数，计算两个整数的和，并返回
int add(int a,int b){
    int c;
    c=a+b;
    return c;
}
//定义一个函数，计算两个整数的最大值，并返回
int max(int a,int b){
    int c;
    c=(a>b)?a:b;
    return c;
}
//定义一个函数，计算两个函数的最大值，并打印
void printMax(int a,int b){
    int c;
    c=(a>b)?a:b;
    printf("%d\n",c);
}
//情况1:函数在声明有返回值类型的情况下，如果没有在函数内使用“return+返回值”结构，则是错误的
int test(){
    printf("hello");
    return 0;//输出有个0
}
//有参函数和无参函数的比较
//打印5行6列的*型矩形
void print(){
    for(int a=0;a<5;a++){
        for(int b=0;b<6;b++){
            printf("*");
        }
    }
}
//有形参的
void print1(int m,int n){
    for(int a=0;a<m;a++){
        for(int b=0;b<n;b++){
            printf("*");
        }
        printf("\n");
    }
}
void print2(){
    int arr[7]={1,2,3,5,6,7,4};
    for(int a=0;a<7;a++){
        for(int b=0;b<7-1-a;b++){
            if(arr[b]>arr[b+1]){
                int temp=arr[b];
                arr[b]=arr[b+1];
                arr[b+1]=temp;
            }
        }
    }
    for(int i=0;i<7;i++){
        printf("%d ",arr[i]);
    }
}
//注意事项：1,return后面不能写其他代码,因为不执行;
// return的作用:① 结束函数的执行 ②将函数运算的结果返回


int main(){
    int i=test();
    printf("%d\n",i);
    print1(5,6);//调用函数
    print2();
    return 0;
}
