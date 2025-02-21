/*
*main()是程序的入口，格式是固定的
 *int表示函数的返回值的类型
 *return 0程序终止，程序执行成功
 *
 *1.print()的标准格式
 *print(格式控制字符串，输出列表  和Java里的system.out.println()  )
 *
 */
#include <stdio.h>

int main(void) {
    printf("Hello, World!\n");
    printf("num is 5 ");
    /*
     *2.占位符：%是占位符输出形式如下
     *说明：格式控制字符串中占位符的字数，输出列表变量和常量的个数相同，而且一一对应
     *%c：字符类型
     *%d：十进制的int类型（或%i）
     *%ld：十进制的long类型
     *%f：浮点类型（floot）
     *%lf：浮点类型double
     *%s:字符串
     *%u:十进制的无符号整数
     *%p:指针
     *%o是八进制输出整数的格式
     * %x,输出十六进制
     */
    printf("num is %d\n",5);
    int a = 5;
    printf("a = %d\n",a);
    //在双引号内用单引号
    printf("tom's score=%d\n,level= %c,60,A");
    //3.限定格式说明
    //1.限定宽度
    printf("num is %5d\n",123);//默认是左对齐的
    //2.修改为左对齐,在d前面添加负号
    printf("num is %-d\n",123);
    //3.显示正负号,显示加号在d的前面加+
    printf("num is %+d\n",10);
    printf("num is %d\n",-10);
    //4，限定小数位数
    printf("float is %f\n",12.3);
    printf("float is %.2f\n",12.3);//在f前面加.2是保留两位小数
    printf("float is %.3f\n",12.34567);//四舍五入制
    printf("float is %6.2f\n",12.34567);//1和4的结合，6是占了6位



    printf("\"Genius is 1%% inspiration and 99%% perspiration.\"");
    return 0;
}
