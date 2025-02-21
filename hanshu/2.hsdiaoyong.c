// Created by bbbb on 2024/11/18.
//函数的调用以及练习
/*
 * 定义函数max()，求两个double型变量的最大值，求三个double型变量的最大值
 * */
double max(double a,double b){
    double c=(a>b)?a:b;
    return c;
}
double max1(double a,double b,double c){
    //方式1，
//    double max=(a>b)?a:b;
//    return (max>c)?max:c;
    //方式2.
    double d=max(a,b);
    return max(d,c);
    //方式3.
    return max(max(a,b),c);
}
#include<stdio.h>
int main(){
   double c= max(3,2);
   printf("%lf\n",c);
    return 0;
}
