// Created by bbbb on 2024/10/23.
//һά������ָ�����ϰ
#include<stdio.h>
#define N 5
int main(){
    //��ϰ1.�������飬�����鸳ֵ������
    printf("������%d����:",N);
    int arr[N];
    //��ʽ1��
    for(int a=0;a<N;a++){
        scanf("%d",&arr[a]);
    }
    //��ʽ2.
    for(int a=0;a<N;a++){
        scanf("%d",arr+a);
    }
    //��ʽ3.
    int *p=&arr[0];
    for(int a=0;a<N;a++){
        scanf("%d",p+a);
    }
    //����
    //��ʽ1.
    for(int b=0;b<N;b++){
        printf("%d ",arr[b]);
    }
    //��ʽ2��
    for(int b=0;b<N;b++){
        printf("%d ",*(arr+b));
    }
    //��ʽ3.
    for(int b=0;b<N;b++){
        printf("%d ",*(p+b));
    }
    //��ʽ4.
    for(int b=0;b<N;b++){
        printf("%d ",*(p++));
    }
    //��ʽ5.
    for(int *p=arr;p<arr+N;p++){
        printf("%d ",*p);
    }

    //��ϰ2.����������ֵ���������飬ȡ���ֵ
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
    //��ʽ2.
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
