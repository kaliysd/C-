// Created by bbbb on 2024/12/10.
//函数的双向传递，地址传递
/*
 * 参数传递机制2，地址传递
 *
 * 概念：实参将地址传递给形参，二者地址相同
 * 在函数内部，通过形参保存的地址，修改地址指向的数据值，会导致函数外实参调用时，此数据的值也是可以修改的--->双向传递
 * 针对的数据类型：指针，数组
 *
 */
#include<stdio.h>
void test (int *,int *);//函数原型
int main(){
    int a=10,b=9;
    test(&a,&b);
    printf("a=%d,b=%d",a,b);
    return 0;
}
void test (int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}