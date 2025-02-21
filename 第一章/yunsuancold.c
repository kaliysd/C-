/*5.1 类型转换
 *
 */

#include <math.h>
#include<stdio.h>
#define zero 0
//枚举常量定义
enum Sex{
    //括号中的MALE,FEMALE,SECRET是枚举常量
    MALE,
    FEMALE,
    SECRET
};
int main() {
//规则1，隐式类型转换（自动类型转换）
    //情况1，窄类型自动转换为宽类型
    short s1 =10;
    int s2 = s1;
    long s3 = s2;
    long long s4 = s3;//自动类型转换
    char c1='A';
    int i2 =c1+s2;
    printf("%d\n",i2);
    //  特例，如果char类型和short类型之间做运算，结果为int类型

    //情况2，宽类型转换为窄类型
    float f2 = 12.3;//将double类型12.3转换了float,会警告(但是不报错)
    double d2 =12.3;
    int i3 =d2;
    //为了避免上述警告，我们需要强制类型转换
    //规则2，强制类型转换：显示的将宽类型转换为窄类型，需要强转符
    double d3=12.3;
    int i4=(int)d3;//强转
    printf("%d\n",i4);
    //注意： 强制类型的话有数据丢失


 /*6.常量
  *1.字面常量
  *    3.13字面常量
  *2.#define(预处理命令前定义常量)
    3.c99中新的声明方式，使用const限定
    4.定义枚举常量
  */
    printf("zero =%d\n",zero);

    //const限定
    int i5=20;
    i5 =30;
    printf("%d\n",i5);
    const int i6=10;
    // i6=20;限定之后会报错
    //定义枚举常量
    printf("%d\n", MALE);
    printf("%d\n", FEMALE);
    printf("%d\n", SECRET);
    //注：枚举常量默认是从0开始，依次向下递增1的

    return 0;
}