//
// Created by lab211 on 2017/9/16.
//
#include <mem.h>
#include <stdio.h>
#include "testSwitch.h"

#define MAXNUM 100
//桶排序
//桶排序，需要知道待排序的数的范围，必须为整数，假设范围为1到M，分配一个数组bucket，大小为M，bucket的元素全部置为0；然后扫描待排序
// 的数组sortNum,将bucket[sortNum]加1。此时bucket数组中元素不为0对应的下标就是要排序的数
void bucketSort(int a[],int m){
    //桶数组,对于桶数组的大小，最好是采用动态分配的方式，如果不想分配最大数个元素，可以对下标减去不多去最小值的数
    //但如果在不知道数组中元素的范围的情况下，求出值的范也有时间上的消耗
    int  bucket[MAXNUM];
    memset(bucket,0, sizeof(bucket)); //置为0
    for (int i = 0; i < m; ++i) {
        bucket[a[i]]+=1;  //若待排序的数中最小值小于0，则需要加上一个数使待排序的数为非负
    }
    for (int j = 0; j < MAXNUM; ++j) {
        if(bucket[j]){
            for (int k = 0; k < bucket[j]; ++k) {
                printf("%d  ",j);
            }
        }
    }
}
#ifdef BUCKET_SORT
int main(int argc ,char *argv[]){
    int a[10]={12,78,8,3,23,66,12,23,32,56};
    bucketSort(a,10);
}
#endif