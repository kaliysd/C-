// Created by bbbb on 2024/11/21.
//函数的调用和练习
//哥德巴赫猜想：任意大于2的偶数都可以写成两个素数之和。利用判断的函数prime()验证哥德巴赫猜想
//判断sum是不是一个素数。素数是能被1和sum本身整除的数
#include<stdio.h>
#include <math.h>

int test1(int sum){
    for(int i=2;i<=sqrt(sum);i++){//可以用开方函数来判断
   // for(int i=2;i<=sum-1;i++){
        if(sum%i==0){
            return 0;
        }
    }
    return 1;
}
//判断偶数
void  test2(int n){
    if(n%2==0){
        for(int a=2;a<n/2;a++) {
            if (test1(a) && test1(n - a)) {
                printf("%d=%d+%d", n, a, n - a);
                break;
            }
        }
    }
}


int main(){
    test2(78);
    return 0;
}