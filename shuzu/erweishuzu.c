// Created by bbbb on 2024/10/12.
//二维数组的理解和内存分析
#include<stdio.h>
int main(){
    //定义方式1.
    int arr[3][4];
    /*
     * 逻辑上理解1.对于二维数组的理解，可以看作是一维数组嵌套而成的，即一维数组arr1有作为其他一个一维数组arr2的元素而存在
     *
     * 逻辑上的理解2，二维数组理解为矩阵，如上述定义的数组arr是3行4列的矩阵
     *
     * 内存分析上理解：在'内存'中，各元素是连续存放的，不是二维的，是线性的，是按照行存放的
     * */
    //关于长度的测试
    printf("%d\n",sizeof(arr));//48
    printf("%d\n",sizeof(arr)/sizeof(int));//12
    //获取各个数组的地址
    for(int a=0;a<3;a++){
        for(int b=0;b<4;b++){
            printf("arr[%d][%d]=%p\n",a,b,&arr[a][b]);
        }
    }
    //定义方式2.
    int arr1[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    printf("%p\n",arr1[0]);
    printf("%p\n",arr1[0]+1);
    printf("%p\n",arr1+1);

    printf("%p\n",arr1[1]);
    printf("%p\n",arr[1]+1);
    //定义方式3，部分元素赋值

    int arr2[2][2]={[0][0]=1,[1][1]=3};
    for(int a=0;a<2;a++){
        for(int b=0;b<2;b++){
            printf("%d",arr2[a][b]);
        }
        printf("\n");
    }
    //方式4，使用单层大括号赋值
    int arr3[2][2]={1,2,2,3};
    //方式5，方式4简化
    int arr4[][3]={1,2,3,4,5,6,7,8};
//注意：要写列，可以不写行
    return 0;
}
