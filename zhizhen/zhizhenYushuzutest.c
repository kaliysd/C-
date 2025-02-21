// Created by bbbb on 2024/10/23.
//一维数组与指针的练习
#include<stdio.h>
#define N 5
int main(){
    //练习1.定义数组，给数组赋值，遍历
    printf("请输入%d个数:",N);
    int arr[N];
    //方式1，
    for(int a=0;a<N;a++){
        scanf("%d",&arr[a]);
    }
    //方式2.
    for(int a=0;a<N;a++){
        scanf("%d",arr+a);
    }
    //方式3.
    int *p=&arr[0];
    for(int a=0;a<N;a++){
        scanf("%d",p+a);
    }
    //遍历
    //方式1.
    for(int b=0;b<N;b++){
        printf("%d ",arr[b]);
    }
    //方式2，
    for(int b=0;b<N;b++){
        printf("%d ",*(arr+b));
    }
    //方式3.
    for(int b=0;b<N;b++){
        printf("%d ",*(p+b));
    }
    //方式4.
    for(int b=0;b<N;b++){
        printf("%d ",*(p++));
    }
    //方式5.
    for(int *p=arr;p<arr+N;p++){
        printf("%d ",*p);
    }

    //练习2.找数组的最大值，输入数组，取最大值
    int arr1[N];
    for(int a=0;a<N;a++){
        scanf("%d",&arr1[a]);
    }
    int max=arr1[0];
    for(int b=0;b<N;b++){
        if(max<arr1[b]){
            max=arr1[b];
        }
    }
    //方式2.
    for(int b=0;b<N;b++){
        if(max<*(arr1+b)){
            max=*(arr1+b);
        }
    }
    int *pp1=&arr1[0];
    for(int b=0;b<N;b++){
        if(max<*(pp1+b)){
            max=*(pp1+b);
        }
    }
    printf("sum=%d",max);
    return 0;
}
