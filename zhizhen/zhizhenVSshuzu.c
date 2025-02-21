// Created by bbbb on 2024/11/1.
//指针数组   &&    数组指针
#include<stdio.h>
int main(){
    //指针数组
    int *arr[10];
    //举例
    int a=1,b=2,c=3,d=4;
    int *arr1[]={&a,&b,&c,&d};
    for(int i=0;i<4;i++){
        printf("%d ",*arr1[i]);
    }
    printf("\n");
    //举例2
    int line1[]={1,2,3,4};
    int line2[]={5,6,7,8};
    int line3[]={9,10,11,12};
    //定义一个指针数组，保存三个一维数组的地址
    int *ptr_Arr[3];
    ptr_Arr[0]=line1;//将line[0]的地址赋给指针变量
    ptr_Arr[1]=line2;//将line[1]的地址赋给指针变量
    ptr_Arr[2]=line3;//将line[2]的地址赋给指针变量
    //遍历
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d ",*(ptr_Arr[i]+j));
            //或者
            //printf("%d ",ptr_Arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
