// Created by bbbb on 2024/11/27.
//exit函数
#include<stdio.h>
#include<stdlib.h>
void show (){
    printf("2222");
    exit(EXIT_SUCCESS );
    printf("3333");
}

void print(){
    printf("结束\n");
}
int main(){
    printf("1111");
  //  show();
    printf("4444");
    atexit(print);//在程序结束之前，需要必须的相关的操作，比如：资源的关闭，内存中临时数据的持久化存储。
    exit(EXIT_SUCCESS);
    return 0;
}