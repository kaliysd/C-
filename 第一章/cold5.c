/*输入输出函数使用
**输入函数：scanf() 、 getchar()、gets()：
scanf()，是格式输入函数，可接收`任意类型`的数据。
getchar()，是`字符`输入函数， 只能接收`单个字符`。
gets()，是`字符串`输入函数。

**输出函数：printf() 、 putchar()、puts()：**
printf()，是格式输出函数，可按指定的格式显示任意类型的数据。
putchar()，`字符`显示函数，只能显示`单个字符`。
puts()，是`字符串`输出函数。
 */
#include <stdio.h>
#include <string.h>
#define PI 3.141
int main() {
    /*2.scanf()使用，格式：scanf(“格式控制字符串”，参数地址列表)
     * 
     */
    //练习1.：计算园的面积，其半径有用户指定
    float radius;
    printf("Enter radius: ");
    scanf("%f",&radius);//重点：理解为阻塞式函数，等待用户输入（在控制面版上输入）
    float area = PI * radius * radius;
    printf("The area of the circle is %f\n",area);
    //练习2输入多个变量值，求乘积
    int a,b,c ;
    printf("Enter number of sides: ");
    scanf("%d%d%d",&a,&b,&c);
    int sides = a *b *c;
    printf("return %d\n",sides);
    int are;
    scanf("%d",&are);
    printf("return %d\n",are);

 //例题：
         float a12 , b12;
         scanf("%d%d",&a12,&b12);
         float q12 =b/a*100;
         printf("%.3f%%",q12);//百分号怎么输出，想要输出百分号的话要打；两个%（%%）

    /*3.getchar()与putchar()的使用
     *getchar():输出一个字符
     *putchar():输入一个字符
     */
     char c1 = 'A';
     putchar(c1);

     char c2 = getchar();
     putchar(c2);
 /*
  *4.gets()与puts()的使用
  *  puts():输出一个字符串
  *  gets():输入一个字符串
  */
     //超纲
     //输出字符串
     char str[]={"china"};
     puts(str);
     //输出字符串
     char str2[15];
     printf("you's name:");
     gets(str2);//从键盘输入字符串，并将字符串保存在str2数组中
     puts(str2);
    return 0 ;
}