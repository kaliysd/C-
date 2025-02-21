/*goto关键字的测试
 *
 * */
#include<stdio.h>
int main(){
    //举例3：录入学生成绩，并计算学生的平均分，当输入-1时程序结束
    //方式1：使用while（1）\for(;;)
    //方式2：使用goto
    int score;//记录每个学生的分数
    int sum=0;//记录学生成绩总和
    int i=0;
    next:printf("请输入第%d个学生成绩：",i+1);
    scanf("%d",&score);
    if(score !=-1){
        sum+=score;
        i++;
        goto next;
    }
    if(i!=0)
    printf("%d个学生的平均成绩是%d\n",i,sum/i);
    //for循环
int q=1;
int score1;
int sum1;
    for(;1;){
        printf("请输入%d学生成绩：",q);
        scanf("%d",&score1);
        if(score1!=-1){
            sum1+=score1;
            q++;
        }else{
            break;
        }
    }
    printf("%d个学生的平均成绩是：%d",q,sum1/q);

    return 0;
}