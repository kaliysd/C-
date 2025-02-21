// Created by bbbb on 2024/10/19.
//二级指针，多重指针的测试，二级指针的练习（重点）
#include<stdio.h>
#include <malloc.h>

int main(){
    //复习
    int a=10;
    int *p=&a;
    int *p1=p;
    printf("%p\n",p);//00000076f37ffe4c
    printf("%p\n",p1);//00000076f37ffe4c

    //
    int b=10;
    int *p2=&b;
    //但是此时p3定义的二级指针的方式是错误的，
    int *p3=&p2;//警告了
    //printf("%p\n",**p3);//报错了
    //真确的方式
    int **p4=&p2;
    printf("%d\n",**p4);

    //使用malloc()函数创建二维数组
    /*
     复习：使用malloc()函数创建一维数组  (就是在堆空间开辟数组空间)
     int length =5;
     int *arr=(int *)malloc(length*sizeof(int));
     */

    //1.从键盘上获取row和column
    int row,column;
    printf("第一维长度：");
    scanf("%d",&row);
    printf("第二维长度：");
    scanf("%d",&column);

    //初始化外层数组
    int **arr=(int **)malloc(row*sizeof(int *));//(int *)是指向int类型的指针
    for(int i=0;i<row;i++){
        arr[i]= (int *)malloc(column*sizeof(int));
        //二维数组空间开辟完毕
        for(int j=0;j<column;j++){
            arr[i][j]=i*j;
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    //获取可以使用此二维数组

    //使用完要回收此数组
    free(arr);

    return 0;
}
