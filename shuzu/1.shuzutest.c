/*һά�������ϰ����ֵ�����������������
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
    printf("����arr��max��:%d\n",max);
    int min =arr[0];
    for(int b =1;b<=arrLength;b++){
        if(min>arr[b]){
            min=arr[b];
        }
    }
    printf("�������Сֵ��%d\n",min);
    int sum =0;
    for(int i=0;i<arrLength;i++){
        sum+=arr[i];
    }
    printf("������ܺͣ�%d\n",sum);

    /*һά����ĸ���
     * */
    //����ʽ������ʵ������ĸ���
    int arr1[3]={10,20,30};
    int *arr2=arr1;//��arr1�����������׵�ַ��ֵ��arr2ָ�����
    arr2[0]=100;
    for(int i=0;i<3;i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    //��ȷ�ķ�ʽ��
    int arr3[3]={10,20,30};
    int arr4[3];
    for(int a=0;a<3;a++){
        arr4[a]=arr3[a];
    }
    //����
    for(int q=0;q<3;q++) {
        printf("%d ", arr[q]);
    }
    printf("\n");
    //��ʽ2.
    int arr5[5]={10,20,40};
    int arr6[5];
    //3����������Ϊ��Ŀ�����飬ԭ���飬�Լ�Ҫ���Ƶ��ֽ�����
    memcpy(arr6,arr5,5*sizeof(int));
    //����
    for(int w=0;w<5;w++){
        printf("%d ",arr6[w]);
    }
    return 0;
}