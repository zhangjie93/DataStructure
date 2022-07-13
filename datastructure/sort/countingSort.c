//
// Created by lab211 on 2017/9/17.
//
//计数排序
//待排序数组中元素的范围为0到，则建立一个长度为线性表count，用于记录不大于每个值的元素的个数
//首先扫描待排序序列A，以A中的每个元素的值作为索引，把出现的个数放入count中，此时count[i]表示A中值为i的元素的个数
//对于count从头开始累加，使count[i]=count[i-1]+count[i]，这样，count[i]表示A中值不大于i的元素的个数
//计数排序的思路在于，对于每一个待排序的元素，如果知道了在待排序数组中有多少个比它小的数，那么就可以直接知道在排序后的数组中该元素应该在
//的位置，如知道在一个数组中有3个数是比a小，那么在排序后的数组里，必然在出现在第4位

#include <malloc.h>
#include <string.h>

#include "../testSwitch.h"
#include "stdio.h"


void printArr(int a[],int num){
    for (int i = 0; i < num; ++i) {
        printf("%d ",a[i]);
    }
    printf("\n");
}

//a排序数组，num数组元素数量
void countSort(int a[],int num){
    int max=a[0];
    for (int i = 0; i < num; ++i) {
        if(a[i]>max) {
            max = a[i];
        }
    }
    printArr(a,num);
    int *count=malloc(sizeof(int)*(max+1));//最大为MAX,所以需要有MAX+1
    memset(count,0,sizeof(int)*(max+1));
    for (int j = 0; j < num; ++j) { //扫描待排序数组，待排序数对应count数组的索引值，如待排序数是33，则count[33]+1，表示待排序数组中有一个33
        *(count+a[j])=*(count+a[j])+1;
    }
    for (int k = 1; k <=max; ++k) {   //count数组中存储的是索引值在待排序数组中的数量，依次累加则表示该索引值在待排序数组的次序
        count[k]+=count[k-1];
    }
    int *output=malloc(sizeof(int)*num);
    for (int l = num-1; l >=0 ; --l) {  //从后往前，按顺序存储待排序数
        output[--count[a[l]]]=a[l];
    }//此时output就是按顺序存储的待排序数
    for (int m = 0; m < num; ++m) {
        a[m]=output[m];
    }
    printArr(output,num);
}

#ifdef COUNT_SORT
int main(){
    int a[]={12,3,33,9,92,3};
    countSort(a, sizeof(a)/ sizeof(int));
}
#endif
