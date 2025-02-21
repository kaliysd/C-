/*测试赋值运算符的使用
 * = 当“=”两侧数据类型不一致时，可以使用自动类型转换或使用强制类型转换原则来处理。
 * 扩展：+= -= *= /= %=
 */
#include <stdio.h>
int main () {
//=
    int i1 = 10;
    double d1 = i1 ;//自动类型提升
    short s1 = (short)i1 ;//强制类型转换
    //连续赋值
    int a ,b ;
    a=b=10;//连续赋值

    //定义变量的简化方法
    int i2 =10;
    int i3=20;
    //可以改写为：
    int i4 =10 ,i5=20;

    //扩展：+= -= *= /= %=
    int i6=10;
    i6 +=5;//理解为i6+5=15
    printf("%d\n",i6);
    int i7=20;
    i7 /=2;
    printf("%d\n",i7);//剩余的类似
    int m112=10;
    m112%=2;
    printf("%d\n",m112);

//练习1。现有变量m，n，请编写代码，交互m和n的值
    int i8=10;
    int n=9;
    printf("m=%d,n=%d\n",i8,n);
    //交换两个变量的值
    int sum =i8;
    i8=n;
    n=sum;
    printf("m=%d,n=%d\n",i8,n);
    //练习2
    double d2;
    float f1;
    long l1;
    int m;
    m=l1=f1=d2=20/3;//  20.0/3输出结果为6.7
    printf("%d %ld %.2f %.2f",m,l1,f1,d2);
/*
 *比较运算符
 * >  <  >=  <=  ==  !=
 * 1.比较类型结果是布尔类型的，默认1代表真，0代表假
 * 2.注意区分= 和==
 */
    int m1 =10;
    int m2 =20;
    printf("m1>m2:%d\n",m1>m2);
    printf("m1<m2:%d\n",m1<m2);
    int m3=10;
    if(m3 == 10){
        printf("ok");
    }else {
        printf("on");
    }
    //注意在c语言中连续的比较操作，容易出错
    int m4=10;
    if(1<m4<5) {
        printf("ok");
    }else {
        printf("on");
    }//错误实例
    //正确的
    if(m4>1&&m4<5) {
        printf("ok");
    }else {
        printf("on");
    }

    //逻辑运算符 &&（与）||（或）！（非）
    int q=10;
    int q1 =20;
    if(q>5&&q1++>1) {//先满足前面条件
        printf("haoshuai\n");
    }else {
        printf("你好笨\n");
    }
    printf("q1=%d\n",q1);

    /**
     * 位运算符：<< >> & / ^ ~
     1.位运算符针对的是整型数值的运算
     运算规则：在一定范围内，数据每向左移动一位，相当原数据*2，（正数，负数都适用）
            在一定范围内，数据每向右移动一位，相当原数据/2，（正数，负数都适用）
     */
    int m5=10;
    printf("%d\n",m5<<1);
    printf("%d\n",m5<<2);
    printf("%d\n",m5<<3);

    int m6=-10;
    printf("%d\n",m6<<1);

    int m7=10;
    printf("%d\n",m7>>1);

    /*
     * 条件运算符，格式：（条件表达）？表达式1：表达式2
     * 说明：1.根据条件表达式的真假，决定执行（或返回）表达式1还是表达式2，
     *        如果条件表达式为turn(或真，或非0)，返回表达式1，否则返回表达式2
     *        2.凡是可以使用条件运算符的题目，都可以改写为if-else结构
     *        反之，不成立
     *        3.如果开发中，既可以使用条件运算符，又可以使用if-else结构，建议使用条件运算符，因为条件运算符效率高
     */
    //获取两个数的较大值
    int m8=10;
    int m9=20;
    int max =(m8>m9)?m8:m9;
    printf("输出最大值：%d\n",max);

    //获取三个数的最大值
    int m10=10;
    int m11=20;
    int m12=30;
    int max2=(m10>m11)?m10:m11;
    int max3=(max2>m12)?max2:m12;
    printf("三个数最大值是：%d\n",max3);

    //合并： int max3=((m10>m10)?m10:m11>m12)?(m10>m10)?m10:m11:m12;
    //可读性不大，建议不要

    /*
          * sizeof运算符：sizeof(参数)
          *              参数可以是数据类型的关键字，也可以使用变量名或者某个具体的值
          *              返回某种收据类型或某个值占用的字节数量
          *              2.sizeof 运算符的返回值类型，有具体的操作系统决定。
          *              c 语言中提供了一个解决方案，创造一个类型别名“size_t”，用来统一表示sizeof的返回值类型
          *
          *              3.printf()有专门的占位符‘%zd’或'%zu'，用来处理size_t的类型值
          */
    int cap1 = sizeof(int);//返回int类型占用的字节大小
    printf("%d\n",cap1);//4
    int cap2 = sizeof(double);
    printf("%d\n",cap2);
    float f4 = 12.3f;
    int cap3=sizeof(f4);//返回变量f4占用的字节数
    printf("%d\n",cap3);
    int cap4=sizeof(123);
    printf("%d\n",cap4);//4     返回常量占用的字节数

    //测试sizeof返回值类型
    size_t cap5=sizeof(int);
    printf("%d\n",cap5);
    printf("%zd\n",sizeof(int));


    return 0 ;
}