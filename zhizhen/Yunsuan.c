// Created by bbbb on 2024/10/16.
//指针的自增和自减
#include<stdio.h>
int main(){
    int m=10;
    int *p=&m;
    printf("%d\n",++(*p));
    int arr[4]={1,2,3,4};
    int *p1=&arr[2];
    printf("%d\n",*(++p1));//4
    printf("%d\n",*p1);//4

    printf("%d\n",*(--p1));
  //  int *p = a;  //p开始时指向数组a的首元素    等同于 int *p = &a[0];
//    *(p++); //先取*p值，然后使p自增1
//    *(++p); //先使p自增1，再取*p
    return 0;
}
