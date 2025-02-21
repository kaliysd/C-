/*
 * while循环
 * 凡是循环结构都有四个要素
 *  1.初始化条件部分-->只会执行一次
 *  2，循环条件部分-->一定是布尔类型的结果
 *  3.循环体部分-->即为反复执行的代码
 *  4.迭代条件部分-->相关的变量会更新，迭代
 *
 * 2.while
 *  结构：while（2.）{
 *   3.
 *   4.
 *  }
 *  说明：
 *  for和while循环可以相互转换
 *  for循环while循环的区别：主要涉及到初始化条件部分对应的变量的作用域可能不同。
 *  注意：一点不要忘了在while的循环的一对{}里迭代条件部分，否则，可能构成死循环
 */
#include<stdio.h>
int main() {
    //写出5个helloworld
    int i =1;
    while(i<=5) {
        printf("helloworld\n");
        i++;
    }
//举例3.通过1-100之间的偶数，获取所有偶数的和，获取偶数的个数--->体会累加的思想
    int i1 =1;
    int sum =0;//记录偶数的总合
    int count =0;//记录偶数的个数
    while(i1<=100) {
        if(i1%2==0) {
            printf("%i\n",i1);
            sum+=i1;
            count++;
        }
        i1++;
    }
    printf("sum=%i\n",sum);
    printf("count=%i\n",count);
    //练习1.：世界最高峰是珠穆朗玛峰，它的高度是8848.86米，假如我有一张足够大的纸，它的厚度是0.1毫米。请问我折多少次，可以折成珠穆朗玛峰的高度？
    double zfHeight=8848860;
    double peperHeight=0.1;
    int count1=0;
    while(peperHeight<zfHeight) {
        peperHeight *= 2;//折纸的操作
        count1++;
    }
    printf("折纸次数=%d\n",count1);

    /*
     * do-while循环
     * 结构：
     * 1.
     * do {3.
     *      4.
     * }while(2.);
     * 3.说明：
     * do-while循环至少会执行一次循环体
     * for ,while ,do-while三者之间可以互相转换
     */
    //举例1；输出5行的HelloWorld
    int i2=1;
    do {
        printf("helloworld\n");
        i2++;
    }while(i2<=5);

    //举例3.通过1-100之间的偶数，获取所有偶数的和，获取偶数的个数--->体会累加的思想
    int i3=1;
    int count2=0;
    int sum2=0;
    do {
        if(i3%2==0) {
            printf("%d\n",i3);
            sum2+=i3;
            count2++;
        }i3++;
    }while(i3<=100);
    printf("sum=%i\n",sum2);
    printf("count=%i\n",count2);
    //举例3.do-while至少执行一次循环体

    return 0 ;
}