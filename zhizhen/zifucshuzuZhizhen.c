// Created by bbbb on 2024/11/12.
//测试字符串数组的使用
#include<stdio.h>
int main(){
    //方式2.
    char arr[7][7]={"apple","cheng"};
    //方式2：使用字符指针数组来表示字符串数组
    char *arr2[]={"apple","cheng"};
    //遍历
    for(int i=0;i<7;i++){
        printf("%s\n",arr2[i]);
    }
    return 0;
}
