/*goto�ؼ��ֵĲ���
 *
 * */
#include<stdio.h>
int main(){
    //����3��¼��ѧ���ɼ���������ѧ����ƽ���֣�������-1ʱ�������
    //��ʽ1��ʹ��while��1��\for(;;)
    //��ʽ2��ʹ��goto
    int score;//��¼ÿ��ѧ���ķ���
    int sum=0;//��¼ѧ���ɼ��ܺ�
    int i=0;
    next:printf("�������%d��ѧ���ɼ���",i+1);
    scanf("%d",&score);
    if(score !=-1){
        sum+=score;
        i++;
        goto next;
    }
    if(i!=0)
    printf("%d��ѧ����ƽ���ɼ���%d\n",i,sum/i);
    //forѭ��
int q=1;
int score1;
int sum1;
    for(;1;){
        printf("������%dѧ���ɼ���",q);
        scanf("%d",&score1);
        if(score1!=-1){
            sum1+=score1;
            q++;
        }else{
            break;
        }
    }
    printf("%d��ѧ����ƽ���ɼ��ǣ�%d",q,sum1/q);

    return 0;
}