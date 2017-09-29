//
// Created by lab211 on 2017/9/21.
//

//各种排序算法
typedef int ElementType ;

//插入排序
void InsertSort(ElementType A[],int N){
    ElementType  temp;
    for (int i = 1; i < N; ++i) { //默认第一个元素为已排序
        temp = A[i]; //存储第一个未排序元素
        int j;
        for (j = i; j > 0 && A[j - 1] > temp; --j) {  //从第一个已排序的元素开始比较，
            A[j] = A[j - 1];  //若已排序的元素大于temp，则将元素向右移，直到已排序的元素不大于temp或者将所有元素比较完
        }
        A[j] = temp;
    }
}