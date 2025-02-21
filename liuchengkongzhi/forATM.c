/*声明变量balance并初始化为0，用以表示银行账户的余额，下面通过ATM机程序实现存款，取款等功能。

=========ATM========
   1、存款
   2、取款
   3、显示余额
   4、退出
请选择(1-4)：*/
#include<stdio.h>
int main() {
    double balance=0.0;//余额
    double addMoney, minusMoney;
    int selection;
    do {
        printf("=========ATM========\n");
        printf("        1.存款\n");
        printf("        2、取款\n");
        printf("        3、显示余额\n");
        printf("        4、退出\n");
        scanf("%d",&selection);
        switch (selection) {
            case 1:
                printf("请输入你的存款金额：");
            scanf("%lf",&addMoney);
            if(addMoney>0) {
                balance += addMoney;
            }
            break;
            case 2:
                printf("请输入你的取款金额：");
            scanf("%lf",&minusMoney);
            if(minusMoney>0&&minusMoney<=balance) {
                balance -= minusMoney;

            }
            break;
            case 3:
                printf("显示当前余额：%d\n",balance);
            break;
            case 4:
                printf("欢迎下次光顾");
            break;
            default:
                printf("请重新选择！\n");
            break;
        }
        }while(1);
        return 0;
}
