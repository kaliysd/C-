// Created by bbbb on 2024/12/4.
//函数内变量的传递机制：
#include<stdio.h>
int main(){
    //针对于基本数据类型
    int a=10;
    int b=a;
    printf("%d\n",a);
    b=20;
    printf("%d\n",a);
    //情况2；数组类型：将数组的首地址传递给新的变量 for(int i=0;i<5;i++){
    //        printf("%d ",arr1[i]);
    //    }
    int arr1[5]={1,2,3,4,5};
    int *arr2;
    arr2=arr1;//将arr1[0]的地址赋给arr2
    for(int i=0;i<5;i++){
        printf("%d ",arr1[i]);
    }
    printf("\n");
    arr2[1]=10;//将arr1[1]和arr2[1]的值都改变了

    for(int i=0;i<5;i++){
        printf("%d ",arr2[i]);
    }
    //情况3，指针变量来说：将指针变量保存的地址传递给新的变量
    int i=10;
    int *p=&i;
    printf("%d\n",*p);//10
    int *q=p;
    *q=20;
    printf("%d\n",*p);//20
    return 0;
}