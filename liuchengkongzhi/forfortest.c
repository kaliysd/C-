/*
 * 嵌套式循环结构
 *   技巧：外层控制行数，内层控制列数
 */
#include<stdio.h>
int main() {
    //输出：5行*******
    for(int a=1;a<=5;a++) {//外层嵌套
        for(int i=1;i<=6;i++){//内层嵌套
            printf("*");
        }
        printf("\n");
    }
/*              a1      q(个数)
 *  *           1       1
 *  **          2       2
 *  ***         3       3
 *  ****        4       4
 *  *****       5       5
 */
    for(int a1=1;a1<=5;a1++) {
        for(int q=1;q<=a1;q++ ) {
            printf("*");
        }
        printf("\n");
    }
    for(int q=1;q<=5;q++){
        for(int w=5;w>=q;w--){
            printf("*");
        }
        printf("\n");
    }
    //输出99乘法表
    for(int a2= 1;a2<=9;a2++) {
        for(int q1=1;q1<=a2;q1++) {
            printf("%d*%d=%d",a2,q1,a2*q1);
        }
        printf("\n");
    }
   for(int a =1;a<=3;a++){
        for(int q=1; q<=5;q++){
            printf("+---+|...|+--");
        }
        printf("\n");
    }
   printf("%c",'a'+1);

    return 0 ;


}