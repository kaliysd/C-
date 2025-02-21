// Created by bbbb on 2024/10/12.
//测试字符数组与字符串
#include<stdio.h>
#include <string.h>

int main (){
    //一方面，字符数组可以看做普通的数组
    char arr[]={'a','b','c'};
    //一方面，字符串都被储存在char类型的数组里，字符数组必须要‘\0’字符结束，表示一个字符串的结束
    //方式1：标准写法
    char str1[6]={'h','e','l','l','o','\0'};
    //方式2，简化写法，自动在末尾添加‘\0’字符
    char str2[12]={"hello world"};//注意使用双引号非单引号
    //或者
    char str3[12]="hello world";
    //方式3。进一步简化
    char str4[]={"hello world"};
    char str5[]="hello world";
    //数组长度
    printf("%d\n",sizeof(str4)/sizeof(char));//12
    printf("%d\n",sizeof(str5)/sizeof(char));//12
    //字符串长度
    printf("%d\n",strlen(str4));//11
    printf("%d\n",strlen(str5));//11

    char nation[10]={"china"};
    printf("%d\n",sizeof(nation)/sizeof(char));//10
    printf("%d\n",strlen(nation));//5

    //区分'\0',0,'0'
    printf("%d\n",'\0'==0);//1  '0'是字符o，0是ascll码的值='\0'
    printf("%d\n",'0'==0);//0
    //字符串的输出
    char str6[]={"hello world"};
    puts(str6);
    return 0;
}
