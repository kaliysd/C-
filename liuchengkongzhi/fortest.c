/*
 * 1.c语言中三种循环结构
 *  for循环
 *  while循环
 *  do-while循环
 *  2.凡是循环结构都有四要素
 *      1.初始化条件部分--->只会执行一次
 *      2.循环条件部分--->一定是布尔类型的结果
 *      3.循环体部分-->反复执行的代码
 *      4.迭代条件部分-->相关的变量会做更新，迭代
 *  3.for循环的格式
 *      for(1.;2;4){
 *          3
 *      }
 *  1.我们可以在循环结构中使用break，一旦执行break，就跳出当前循环结构
 *  2.小结：循环结构结束的情况
 *  情况1，循环条件部分，返回假（false），导致循环结束
 *  情况2.在循环内部，满足了某个条件的情况下，执行了break，结束了程序
 *  3.在开发中拒接形成死循环，
 */
#include<stdio.h>
int main() {
//举例1.输出五行的helloworld
    int a;
    for(a=1;a<=5;a++) {
        printf("Hello World\n");
    }
//可以写为：注意写了之后定义的a在for程序之后就不能使用了
    for(int a=1;a<=5;a++) {
        printf("Hello World\n");
    }
    //举例2.
    int num =1;//程序中只能用两个;号
    for(printf("a");num<3;printf("c"),num++) {
        printf("b");
    };
    //举例3.通过1-100之间的偶数，获取所有偶数的和，获取偶数的个数--->体会累加的思想
    int sum=0;
    int count=0;
    for(int a1=1;a1<=100;a1++) {
        if(a1%2==0) {
            printf("%d\n",a1);
            sum+=a1;//sum=sum+a1;
            count++;
        }
    }
    printf("sum=%d\n",sum);
    printf("count=%d\n",count);

    //说明：输入两个正数m和n，求其最大公约数和最小公倍数，
    int m =12,n=20;
    //获取m和n的最小值
    int min=(m<n)?m:n;
    for(int i=min;i>=1;i--) {
        if(m%i==0&&n%i==0) {
            printf("%d\n",i);
            break;//程序运行完直接结束
        }
    }
    //获取最大公倍数
    int max=(m>n)?m:n;
    for(int i1=max;i1<=m*n;i1++) {
        if(i1%m==0&&i1%n==0) {
            printf("最大公倍数：%d\n",i1);
            break;
        }
    }

    return 0;
}