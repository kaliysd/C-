// Created by bbbb on 2024/12/10.
//函数参数传递机制1.值传递
/*
 * 参数传递机制1.值传递
 * 概念：实参值复制给被调用函数的形参
 * 重点：如果我们在函数内部，修改形参的值，不会影响函数外部实参的值---》单向传递
 * 对应的数据类型：基本数据类型（整型，浮点型，字符型），结构体，共用体，枚举类型
 *
 */
//数据的交换
int  test1(int ,int );
#include <stdio.h>
int main(){
    int a=10,b=9;

//    int temp=a;
//    a=b;
//    b=temp;
    test1(a,b);
    printf("a=%d,b=%d",a,b);
    return 0;
}
//void test(int x,int y){
//    int temp=x;
//    x=y;
//    y=temp;
//}
int  test1(int x,int y){
    int temp=x;
    x=y;
    y=temp;
    return x,y;
}