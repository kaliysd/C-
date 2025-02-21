/*              使用范围        在循环结构中使用的作用                     相同点
 * break :      switch-case
 *              循环结构        结束（或跳出）当前循环结构               不能在其后声明执行语句
 * continue:    循环结构        结束（或跳出 ）当前循环，开始下一次循环     不能在其后声明执行语句
 */

#include<stdio.h>
int main(){
    // for(int i=1;i<=10;i++) {
    //     if(i%4==0) {
    //         //break;//123
    //         continue;//1235678910(除了4)
    //     }
    //     printf("%d",i);
    // }
    // for(int a=1;a<=4;a++) {
    //     for(int b=1;b<=10;b++) {
    //         if(b%4==0) {
    //             continue;
    //         }printf("%d",b);
    //     }
    // }
    //
    // //练习：要求输出100~200之间的不能被3整除的整数
    // for(int a1 =100;a1<=200;a1++) {
    //     if(a1%3==0) {
    //         continue;
    //     }
    //     printf("%d\n",a1);
    // }
//练习2.要求100~200间的全部素数（只能被1和它本身整除的自然数）
    int count;
    for(int a2 =100;a2<=200;a2++) {
        for(int j=2;j<a2;j++) {
            if(a2%j==0) {
                count++;
                break;
            }
        }
        if(count==0) {
            printf("%d\n",a2);
        }
        count=0;//重置
    }
    return 0;
}