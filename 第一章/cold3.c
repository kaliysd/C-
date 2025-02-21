/*基本数据类型
*使用signed修饰，表示该类型的变量是带符号的，有正号还有负号，可以表示负值
 *使用unsigned修饰，表示该类型符号是不带符号的，没有正负号，只能表示零和正整数
 *1byte=8bit
 */
#include <stdio.h>
/*
 * 整型的使用
 * 1.short\ int \long \longlong
 * 以64位编译器为例：
 *      short：2字节
 *      int:4字节
 *      long：8字节
 *      longlong:8字节
 *  整型可以被signed和unsigned修饰
    2.关于后缀:声明long类型变量时，可以后缀以"l"或"L"结尾。
            longlong类型用"ll"或"LL"结尾。
            无符号的unsigned int 用"u"或"U"结尾。

    3.浮点类型:
      1.float:4字节//float表示数据的范围比long要大。
      double:8字节
      long double:8字节
      2.浮点类型不能用signed和unsigned修饰符
      3.常用的浮点类型用double类型
      4，关于后缀
      float类型使用“F”“f”后缀
      long double类型使用“l”“L”后缀
    4.字符类型:（）char
        使用char表示一个字符，使用“”括起来
        一个char表示一个字符
        char类型中每个字符对应的一个ASCII码，因为ASCII码是一个数值，所以char类型可以参加加减乘除的运算。






 */
int main(void) {
    int i1 =2;
    signed int i2=3;
    unsigned int i3=1;
    long l1 = 12378899372884;//后续的自动类型提升
    long l2 =  12338l;
    printf("i3=%d\n", l2);


    //double 类型的常量使用
    double a1 =3.23;
    double b1 =a1+3.4;
    printf("b1=%.2lf\n", b1);
    //后缀使用
    float a2 =3.677566f;
    printf("a2=%.2f\n", a2);
    //练习题华氏度转化位摄氏度
    double fdegree= 64.0;
    double hDegree= 5*(fdegree-32)/9;
    printf("hDegree=%f\n", hDegree);
    printf("华氏度是%lf，摄氏度是%lf\n",fdegree,hDegree);

    //字符类型测试
    //1.表示方式1
    char c1 ='A';//直接用符号使用
    printf("%c\n",c1);
    printf("%d\n",c1);
    //2.表示方法2
    char c2 =65;//使用具体字符对应ASCII码
    printf("%c\n",c2);
    char c3='1';
    char c4=1;
    printf("%d\n%d\n",c4,c3);

    //表示方式3，使用转义字符
    char c5='\n';//换行符
    char c6='\t';//制表符
    char c7='\'';//表示字符位  ’（单引号）
    printf("%c\n",c5)   ;
    return 0;
}