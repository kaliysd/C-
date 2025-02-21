/*一维数组的练习：数值类型数组的特征运算
 *
 * */
#include<stdio.h>
#include <string.h>

int main (){
    int arr[10]={10,23,45,77,43,33,56,77,88,99};
    size_t arrLength=sizeof(arr)/sizeof (int);
    int max=arr[0];
    for(int a=1;a<arrLength;a++){
        if(max<arr[a]){
            max=arr[a];
        }
    }
    printf("数组arr的max是:%d\n",max);
    int min =arr[0];
    for(int b =1;b<=arrLength;b++){
        if(min>arr[b]){
            min=arr[b];
        }
    }
    printf("数组的最小值：%d\n",min);
    int sum =0;
    for(int i=0;i<arrLength;i++){
        sum+=arr[i];
    }
    printf("数组的总和：%d\n",sum);

    /*一维数组的复制
     * */
    //错误方式：不能实现数组的复制
    int arr1[3]={10,20,30};
    int *arr2=arr1;//将arr1保存的数组的首地址赋值给arr2指针变量
    arr2[0]=100;
    for(int i=0;i<3;i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    //正确的方式：
    int arr3[3]={10,20,30};
    int arr4[3];
    for(int a=0;a<3;a++){
        arr4[a]=arr3[a];
    }
    //遍历
    for(int q=0;q<3;q++) {
        printf("%d ", arr[q]);
    }
    printf("\n");
    //方式2.
    int arr5[5]={10,20,40};
    int arr6[5];
    //3个参数依次为：目标数组，原数组，以及要复制的字节数。
    memcpy(arr6,arr5,5*sizeof(int));
    //遍历
    for(int w=0;w<5;w++){
        printf("%d ",arr6[w]);
    }
    return 0;
}