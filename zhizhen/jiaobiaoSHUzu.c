// Created by bbbb on 2024/10/23.
//指针带下标和数组名的使用
#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int *p;
    p=arr;//将arr[0]位置地址赋给p
    printf("%d\n",*(p+2));//3

    //p[i]:使用带角标的指针
    printf("%d\n",p[2]);//3
    //知识点2：
    printf("%p\n",arr);//000000911e9ffbe0
    printf("%p\n",&arr);//000000911e9ffbe0

    printf("%p\n",arr+1);//arr+1表示arr[1]元素地址

    printf("%p\n",&arr+1);
    return 0;
}
