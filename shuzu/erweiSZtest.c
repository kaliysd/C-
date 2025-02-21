// Created by bbbb on 2024/10/13.
//二维数组的练习
#include<stdio.h>
#define HANG 2
#define LIE 2
int main(){
    //练习1.获取所有元素的值
    //定义二维数组
    int arr[3][4]={{3,5,8},{12,9},{7,0,6,4}};

    //遍历二维数组，在求sum
    int sum=0;
    for(int a=0;a<3;a++){
        for(int b=0;b<4;b++){
            sum+=arr[a][b];
        }
    }
    printf("%d\n",sum);

    //数组中取最大值
    int arr1[3][4]={{3,4,6,7},{-2,4,7,9},{1,4,8,90}};
    int max=arr1[0][0];
    for(int a=0;a<3;a++){
        for(int b=0;b<4;b++){
            if(max<arr1[a][b]){
                max=arr1[a][b];
            }
        }
    }
    printf("%d\n",max);

    //数组的互换
    int arr2[HANG][LIE]={1,2,3,4};
    int arr3[LIE][HANG];

    for(int a=0;a<HANG;a++){
        for(int b=0;b<LIE;b++){
            arr3[b][a]=arr2[a][b];
        }
    }
    //遍历
    printf("遍历数组arr2\n");
    for(int a=0;a<HANG;a++){
        for(int b=0;b<LIE;b++){
            printf("%d",arr2[a][b]);
        }
        printf("\n");
    }

    printf("遍历数组arr3\n");
    for(int a=0;a<LIE;a++){
        for(int b=0;b<HANG;b++){
            printf("%d",arr3[a][b]);
        }
        printf("\n");
    }
    return 0;
}
