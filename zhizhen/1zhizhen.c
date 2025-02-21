// Created by bbbb on 2024/10/14.
//指针变量测试
#include<stdio.h>
int main(){
    //定义指针变量
    int *p1;
    int* p2;
    int * p3;

    //注意：指针变量中只能存放地址，不要将一个整数（或任何其他非地址类型的数据）赋给一个指针变量
    int a=10;
    //p1 = a; 将a对应的数据10赋给指针变量p1是错误的，因为p1记录的变量或常量在内存中的地址，而非数据值。

    //同一行声明两个指针变量
    char *p1char,*p2char;//此时的变量都是指针变量
    //错误的
    //   char *p3char,p4char;//此时p3char是指针变量，p4char是char类型变量


    //取值运算符
    int i=10;
    int *pp1;
    pp1=&i;
    printf("%p\n",&i);
    printf("%p\n",pp1);

    //举例
    float p=10;
    float *pp2=&p;
    //不要进行以下操作
//    int *pp3=&p;
//    printf("%p\n",pp3);
//    printf("%p\n",pp2);

//不要在给指针变量赋值之前使用此变量!--->野指针
    int *pp3;
    //printf("%p\n",pp3);
    pp3=NULL;
    printf("%p\n",pp3);

    //举例：
    int m=10,*pp4;
    pp4 =&m;
    printf("%d\n",m);
    scanf("%d",pp4);//等价与scanf("%d",&m);
    printf("%d\n",m);

//int m=10;
//scanf("%d",&m);//通过指针变量来替换数值
//printf("%d\n",m);
    return 0;
}