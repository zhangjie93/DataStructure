//
// Created by lab211 on 2017/9/16.
//
#include "stdio.h"
#include "../testSwitch.h"
#define BASE 10
//基数排序

void print(int *a, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
}
void radixSort(int a[],int num){
    int m=a[0];
    int b[100];
    for (int i = 0; i < num; ++i) {
        if(a[i]>m){
            m=a[i];  //找出最大值
        }
    }
    int exp=1;
    while (m/exp>0){//直到最大值分解完
        int i=0;
        int bucket[BASE]={0};
        for ( i = 0; i < num; ++i) {
            bucket[(a[i]/exp)%BASE]++; //a[i]/exp%BASE将数的每一位分解
        }
        for (i = 1; i < BASE; ++i) {
            bucket[i]+=bucket[i-1];
        }
        for (i = num - 1; i >= 0; i--) {
            b[--bucket[(a[i] / exp) % BASE]] = a[i];
        }

        for (i = 0; i < num; i++) {
            a[i] = b[i];
        }
        exp *= BASE;

        printf("\nPASS   : ");
        print(a, num);
    }
}

#ifdef RADIX_SORT
int main(){
    int arr[]={53, 3, 542, 748, 14, 214, 154, 63, 616};
int num=sizeof(arr)/sizeof(int);
    printf("\norigin array:  ");
    print(arr,num);

    radixSort(arr,num);

    printf("\nSORTED:  ");
    print(arr,num);
    return 0;
}
#endif
