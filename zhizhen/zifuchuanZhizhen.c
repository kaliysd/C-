// Created by bbbb on 2024/11/2.
//字符串指针
#include<stdio.h>
int main(){
    //知识点1.如何表示字符串
    char arr[]={"hello"};
    printf("%s\n",arr);
    printf("%p\n",arr);
    //方式2.使用字符指针变量
    char *p=arr;
    printf("%p\n",p);
    printf("%s\n",p);

    char *p1="hello";
    printf("%p\n",p1);
    printf("%s\n",p1);

    //知识点2：两种方式的对比
    //数组名是一个常量，在定义好数组以后，不可以给数组重新赋值为一个新的数组
    //但是可以通过角标的方式获取或修改指定索引位置上元素值
    char str[14];
    str[0]='i';//正确
   // str="hello";//错误
    //指针变量是一个变量，可以多次赋值
    char *p3="cheng";
    p3="ji";//正确

    return 0;
}
