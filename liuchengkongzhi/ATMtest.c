/*��������balance����ʼ��Ϊ0�����Ա�ʾ�����˻���������ͨ��ATM������ʵ�ִ�ȡ��ȹ��ܡ�

=========ATM========
   1�����
   2��ȡ��
   3����ʾ���
   4���˳�
��ѡ��(1-4)��*/
#include <stdio.h>
int main() {
    //��ʼ������
    double balance = 0.0;//��ʾ�����˻������
    int selection; //��¼�ͻ���ѡ��

    double addMoney, minusMoney; //�ֱ��¼��Ǯ��ȡǮ�Ķ��

    int isFlag = 1;//���ڿ���ѭ���Ľ���

    for(;;) {
        printf("=========ATM========\n");
        printf("\t1�����\n");
        printf("\t2��ȡ��\n");
        printf("\t3����ʾ���\n");
        printf("\t4���˳�\n");
        printf("��ѡ��(1-4)��");

        scanf("%d", &selection);

        switch (selection) {
            case 1:
                printf("Ҫ���Ķ��Ϊ��");
            scanf("%lf", &addMoney);
            if (addMoney > 0) {
                balance += addMoney;
            }
            break;
            case 2:
                printf("Ҫȡ��Ķ��Ϊ��");
            scanf("%lf", &minusMoney);
            if (minusMoney > 0 && balance >= minusMoney) {
                balance -= minusMoney;
            } else {
                printf("����������ݷǷ�������\n");
            }
            break;
            case 3:
                printf("��ǰ�����Ϊ��%lf\n", balance);
            break;
            case 4:
                printf("��ӭ�´ν����ϵͳ��^_^\n");
            isFlag = 0;
            break;
            default:
                printf("������ѡ��\n");
            break;
        }

    }

    return 0;
}
