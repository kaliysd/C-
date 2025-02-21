/*流程控制
 * 1.顺序结构
 * 2.分支结构
 * 3.循环结构
 * if-else格式
 */
#include<stdio.h>
int main() {
    //练习1.成年人心率的正常值为每分钟60-100次，体检时，如果心率不在范围内，则要进行进一步检查
    int hearbeats=89;
    if(hearbeats<60||hearbeats>100) {
        printf("你需要进一步检查。");
    }else {
        printf("体检结束\n");
    }
    //练习2.定义一个整数，判断偶数还是奇数
    int mum =13;
    if(mum % 2 == 0) {
        printf("num是一个偶数");
    }else {
        printf("nums是一个奇数\n");
    }

    /*
     * 练习3.小米参加Java考试，他和父亲达成承诺
     * 如果：成绩达到100分，奖励一辆跑车
     * 成绩为（80，90）奖励一辆自行车
     * 成绩（60，80）奖励一日游
     * 其他的胖揍一次
     */
    int a =79;
    if(a==100) {//注意==是等于不要写成=
        printf("奖励一辆跑车");
    }else if(a>80&&a<=90) {
        printf("奖励一辆自行车");
    }if(a>60&&a<=80) {
        printf("奖励一日游");
    }else {
        printf("胖揍一次");
    }

    //练习4.编写一个程序，判断某个年份是否为闰年，年份满足如下条件
    //year是400的整倍数，year%400==0
    //能被4整除，但是不能被100整除：year%4==0&&year% 100！=0
    printf("请输入年份：");
    int yaer;
    scanf("%d",&yaer);
    if(yaer%4==0||(yaer%4==0&&yaer%100!=0)) {
        printf("输入的年份是闰年");
    }else {
        printf("输出年份不是闰年");
    }
    //以上代码有逻辑错误：修改如下
  //  if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)

    /*练习5熟悉if-else的嵌套使用
    出票系统：根据淡旺季的月份和年龄，打印票价，要求：月份和年龄从键盘获取输入
    旺季，成人（18，60），60块
        儿童（<18）：半件
        老人（>60）：1/3
    淡季：成人：40
        其他：20
    */
    int month , age ;
    printf("请输入年龄：");
    scanf("%d",&age);
    printf("请输入月份：");
    scanf("%d",&month);
    double price=60.0;
    if(month>=4&&month<=10) {
        if(age<18) {
            price/=3;
        }else if(age>=60){
            price/=3;
        }
    }else {
        if(age>=18&&age<60) {
            price =40;
        }else {
            price=20;
        }
    }
    printf("票价是：%.2lf\n",price);
    return 0 ;
}