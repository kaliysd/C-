/*定义一维数组
 *
  * */
#include<stdio.h>
#include <malloc.h>

#define NUM 10
int main(){
    //1.定义
    int arr[10];
    int arr1 [NUM];

    //2.数组元素的调用：使用角标
    //角标的合法范围是：从0开始，到数组的长度-1结束
    arr[0]=10;
    arr[1]=10;
    //3.数组角标越界
   // int arr2[5];
    //arr2[5]=5;
   // printf("%d",arr2);
   //关于长度
   //4.1数组占用的字节数
   int arr3[20];
   printf("数组占用的字节数是：%zd\n",sizeof(arr3));
   double a[20];
    printf("数组占用的字节数是：%zd\n",sizeof(a));
    //4.2数组的长度
    printf("数组的长度：%zd\n",sizeof(arr3)/sizeof(int));

    //5.一维数组的遍历
    int arr5[10];
    size_t length =sizeof(arr5)/sizeof(int);
    //给每个元素赋值
    for(int q=0;q<length;q++){
        arr5[q]=q;
    }
    //遍历数组元素
    printf("遍历数组元素：\n");
    for(int q=0;q<length;q++){
        printf("%d",arr5[q]);
    }
    printf("\n");
    /*
     * 其他定义的方式
     * */
    int arr6[5]={10,20,30,40,50};
    //遍历
    for(int q1=0;q1<sizeof(arr6)/sizeof(int);q1++){
        printf("%d\n",arr6[q1]);
    }
    //变形1：
    int arr7[]={10,20,30,40,50};
    //变形2.
    int arr8[5]={10,20,30};//相当于：int arr6[5]={10,20,30,0,0};
    //变形3.
    int arr9 [10]={0};//相当于10个元素都是0

    //错误的方式
    //int arr10[5]={1,2,3,4,5,6};
    //定义方式3。
    int arr10[10]={[1]=10,[7]=10,[6]=10};//指定赋值
    //遍历
    for(int q2=0;q2<sizeof(arr10)/sizeof(int);q2++){
        printf("%d ",arr10[q2]);
    }
    printf("\n");
    //变形1。
    int arr11[]={[1]=10,2,3,[5]=20,[9]=23};

    /*一维数组的内存分析
     *
     * */
    //错误1，
//    int arr1[5];
//    arr1={1,2,3,4,5};
//
//    //错误2.
//    int arr2[5]={1,2,3,4,5};
//    arr2={1,2,3,4,5};

    int arr12[5];
    arr12[2]=1;

    //错误原因：数组一旦声明，其地址就不可更改
    //错误4。
    int arr13[5];
   // int arr13[5]=arr2;

   //在c99标准中，支持变长数组
   //方式1.
   int length1=10;
   int arra1[length];
   int arra2[length+5];

   //(重点:)方式2，使用malloc()hanshu，动态的分配内存，创建一个指定长度的数组
   int *arr14=  (int*) malloc(length1 * sizeof(int));//在堆空间开辟的数组空间
    arr14[1]=10;
    printf("%d",arr14[1]);

    //注意点:使用完动态创造的数组后，一定要回收此数组的内存空间。否则，就存在内存泄露。
    free(arr14);
    return 0;
}