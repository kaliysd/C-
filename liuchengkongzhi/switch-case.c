/*switch-case的测试使用
 *swith中的表达式可以是整型也可以是字符型，不可以使用浮点型
 *case 后的常量与表达式进行等值的判断，但是不能进行比较
 *关注case 中break的使用，从经验上讲，使用swith-cae情况下，多数使用break
 *default:可选的，位置是灵活的
 */
#include<stdio.h>
int main() {
    int num =2;
    switch (num) {
        case 1:
            printf("one");
        break;
        case 2:
            printf("two");
        break;
        case 3:
            printf("three");
        break;
        default:
            printf("error");
        break;
    }
    //编译不通过，不能进行比较
    // int n=2;
    // switch (n)
    //     case n<5:

    //练习：对于学生成绩大于60分的，输出合格，低于60分的输出不合格

    //思路1，不太靠谱，写的太繁琐了
    //     int score=78;
    // switch (score) {
    //     case 1:
    //         printf("不及格");依次类推
    // }
//思路2.
    int score=77;
        switch (score/10) {
            case 1:
                printf("不及格");
            break;
            case 2:
                printf("不及格");
            break;
            case 3:
                printf("不及格");
            break;
            case 4:
                printf("不及格");
            break;
            case 5:
                printf("不及格");
            break;
            case 6:
                printf("及格");
            break;
            case 7:
                printf("及格");
            break;
            case 8:
                printf("及格");
            break;
            case 9:
                printf("及格");
            break;
            case 10:
                printf("及格");
            break;

        }
//改进：
    int score1=77;
    switch (score1/10) {
        case 1:
            case 2:
        case 3:
        case 4:
        case 5:
        printf("不及格\n");
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            printf("及格\n");
        break;

    }
//改进2，
    int a =78;
    switch (a/60) {
        case 0:
            printf("不及格\n");
        case 1:
            printf("及格\n");
        break;
    }

        return 0;
}
