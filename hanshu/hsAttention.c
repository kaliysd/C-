// Created by bbbb on 2024/11/19.
//函数注意事项以及练习
#include<stdio.h>
//情况1，函数不能嵌套定义
void func1(){
    //错误的
//    void func2(){
//    }
}
//函数的重载：C语言不能函数重载，函数名不能相同
//方式1：使用不同的函数名来区分不同的函数

//方式2：(只适用于其他语言)为函数添加后缀来表示不同的版本。(相同函数名,形参的不同)
void multiply(int m){
    int result = m * m;
    printf("结果为：%d\n",result);
}

void multiply1(int m,int n){
    int result = m * n;
    printf("结果为：%d\n",result);
}
//情况3.非main函数的函数之间可以相互调用
void test1(){
    printf("hello\n");
    //test2();
}
//函数的调用不能逆向调用
void test2(){
    printf("hello2\n");
    test1();
}


int main(){
    test2();
    return 0;
}
