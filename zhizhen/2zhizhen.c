// Created by bbbb on 2024/10/15.
//取值运算符（*），指针与整数的加减运算
#include<stdio.h>
int main(){
    //举例，通过指针变量来修改指向内存位置的值
    int i1=10;
    int *p1=&i1;
    *p1=20;
    printf("%d\n",i1);

    char i='A';
    char *p=&i;
    *p='B';
    printf("%c\n",i);

    //定义两个指针变量p2,p3，默认指向整数a,b，a,b是从键盘上输入，设计程序，使得指针p2指向最大值,指针p3指向最小值
//    int a,b,*p2,*p3;
//    scanf("%d%d",&a,&b);


//    p2=&a;
//    p3=&b;
//    if(a<b){
//        int *p4=p2;
//        p2=p3;
//        p3=p4;
//    }
//    printf("%d %d",*p2,*p3);

    int arr[4]={1,2,3,4,};
    int *pp1=&arr[2];
    printf("%p\n",pp1);
    printf("%d\n",*pp1);

    printf("%p\n",pp1+1);
    printf("%p\n",pp1-1);

    printf("%d\n",*(p+1));
    printf("%d\n",*(pp1-1));

    //遍历
    //方式1.
    for(int a1=0;a1<sizeof(arr)/sizeof(int);a1++){
        printf("%d ",arr[a1]);
    }
    printf("\n");
    //方式2.
    int *p5=&arr[0];
    for(int a1=0;a1<sizeof(arr)/sizeof(int);a1++){
        printf("%d ",*(p5+a1));
    }
    printf("\n");
    //方式3.
    for(*p5;p5<arr+4;p5++){
        printf("%d ",*p5);
    }
    return 0;
}
