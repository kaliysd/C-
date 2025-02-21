// Created by bbbb on 2024/10/21.
//指针与一维数组的运用专题
#include<stdio.h>
int main(){
    int arr[10]={2,4,6,8,10,12,14,16,18,20};
    int *p=&arr[0];
    printf("%p\n",p);//理解：将arr[0]中的值2的地址赋给p；

    int *p1=&arr;//理解：将arr[0]的地址赋给p1;
    printf("%p\n",p1);
    /*复习：
     * scanf("%d"，整数变量的地址)
     * */
    char arr1[10];
    scanf("%s",arr1);//此时arr前不需要添加&  (因为数组名本身就是一个指向数组首元素的指针)
    puts(arr1);

    /*重点：
     * 前提：
     * int a[10]={1,2,3,4,5,6,7,8,9,10};
     * int *p=&a[0];
     *
     * a[0]:表示a[0]的数据值
     * a[0]的地址:&a[0],p,a
     * a[0]的取值：*p,a[0],*a
     *
     * a[i]:表示a[i]的数据值
     * a[0]的地址:&a[i],p+i,a+i(a也是地址)
     * a[0]的取值：*(p+i),a[i],*(a+i)
     * */
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int *p3=&a[0];
    printf("%p\n",p3);
    printf("%p\n",a);
    printf("%p\n",&a[0]);

    printf("%d\n",*p3);
    printf("%d\n",*a);
    printf("%d\n",a[0]);

    printf("%d\n",*(p3+2));
    printf("%d\n",*(a+2));
    printf("%d\n",a[2]);
    return 0;
}
