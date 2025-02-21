//
// Created by bbbb on 2024/10/10.
//一维数组的反转测试
#include<stdio.h>
int main(){
    int arr1[10]={1,2,3,4,5,6,7,8,9,10};
    //获取数组长度
    size_t length=sizeof(arr1)/sizeof (int);
    //交换
    for(int a=0;a<length/2;a++){
         int temp =arr1[a];
        arr1[a]=arr1[length-1-a];

        arr1[length-1-a]=temp;
    }
//
//    //方式2
//    for(int left=0,right=length-1;left<right;left++,right--){
//        int temp =arr1[left];
//        arr1[left]=arr1[right];
//
//        arr1[right]=temp;
//    }
    for(int a=0;a<length;a++) {
        printf("%d", arr1[a]);
    }
    return 0;
}
