/*��������balance����ʼ��Ϊ0�����Ա�ʾ�����˻���������ͨ��ATM������ʵ�ִ�ȡ��ȹ��ܡ�

=========ATM========
   1�����
   2��ȡ��
   3����ʾ���
   4���˳�
��ѡ��(1-4)��*/
#include<stdio.h>
int main() {
    double balance=0.0;//���
    double addMoney, minusMoney;
    int selection;
    do {
        printf("=========ATM========\n");
        printf("        1.���\n");
        printf("        2��ȡ��\n");
        printf("        3����ʾ���\n");
        printf("        4���˳�\n");
        scanf("%d",&selection);
        switch (selection) {
            case 1:
                printf("��������Ĵ���");
            scanf("%lf",&addMoney);
            if(addMoney>0) {
                balance += addMoney;
            }
            break;
            case 2:
                printf("���������ȡ���");
            scanf("%lf",&minusMoney);
            if(minusMoney>0&&minusMoney<=balance) {
                balance -= minusMoney;

            }
            break;
            case 3:
                printf("��ʾ��ǰ��%d\n",balance);
            break;
            case 4:
                printf("��ӭ�´ι��");
            break;
            default:
                printf("������ѡ��\n");
            break;
        }
        }while(1);
        return 0;
}
