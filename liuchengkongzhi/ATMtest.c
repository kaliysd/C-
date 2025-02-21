/*声明变量balance并初始化为0，用以表示银行账户的余额，下面通过ATM机程序实现存款，取款等功能。

=========ATM========
   1、存款
   2、取款
   3、显示余额
   4、退出
请选择(1-4)：*/
#include <stdio.h>
int main() {
    //初始化条件
    double balance = 0.0;//表示银行账户的余额
    int selection; //记录客户的选择

    double addMoney, minusMoney; //分别记录存钱、取钱的额度

    int isFlag = 1;//用于控制循环的结束

    for(;;) {
        printf("=========ATM========\n");
        printf("\t1、存款\n");
        printf("\t2、取款\n");
        printf("\t3、显示余额\n");
        printf("\t4、退出\n");
        printf("请选择(1-4)：");

        scanf("%d", &selection);

        switch (selection) {
            case 1:
                printf("要存款的额度为：");
            scanf("%lf", &addMoney);
            if (addMoney > 0) {
                balance += addMoney;
            }
            break;
            case 2:
                printf("要取款的额度为：");
            scanf("%lf", &minusMoney);
            if (minusMoney > 0 && balance >= minusMoney) {
                balance -= minusMoney;
            } else {
                printf("您输入的数据非法或余额不足\n");
            }
            break;
            case 3:
                printf("当前的余额为：%lf\n", balance);
            break;
            case 4:
                printf("欢迎下次进入此系统。^_^\n");
            isFlag = 0;
            break;
            default:
                printf("请重新选择！\n");
            break;
        }

    }

    return 0;
}
