// Created by bbbb on 2024/10/31.
//使用指针来访问二维数组
#include<stdio.h>
int main(){
    int arr[3][4]={{10,20,30,40},{50,60,70,80},{90,100,110,120}};
    //第一种方法：
//    int temp=arr[0][0];
//    for(int a=0;a<3;a++){
//        for(int b=0;b<4;b++){
//            if(temp<arr[a][b]){
//                temp=arr[a][b];
//            }
//        }
//    }
    //第二种方式：用指针
//    int max=arr[0][0];
//    int *p=arr[0];
//    for(int a=0;a<3;a++){
//        for(int b=0;b<4;b++){
//            if(max<*(p+a*3+b)){
//                max=*(p+a*3+b);
//            }
//        }
//    }
    //方式3：
    int *q,max;
    for(q=arr[0],max=*q;q<arr[0]+3*4;q++){
        if(max<*q){
            max=*q;
        }
    }
    printf("%d\n",max);

    return 0;
}
