#include <stdio.h>
#include <stdint.h>


int g_DefaultArraySize = 200;
enum State {WORKING = 1, FAILED = -1};
//Ham khoi tao mang
int khoiTaoMang(int arraySize) {
    if (arraySize > g_DefaultArraySize) {
        return FAILED;
    }
    return arraySize;
}
//Ham nhap mang
int nhapMang(int array[],int arraySize) {
	int i;
    printf("\nNhap %d phan tu vao mang: ", arraySize);
    for (i = 0; i < arraySize; i++) {
        scanf("%d", &array[i]);
    }
    return WORKING;
}
//Ham hien thi mang
int hienThiMang(int array[],int arraySize) {
	int i;
    printf("\nHien thi mang: ");
    for (i = 0; i < arraySize; i++) {
        printf("%d ", array[i]);
    }
    return WORKING;
}
//Ham them phan tu
int themPhanTu(int array[],int *arraySize,int number,int position) {
	int i;
    for (i = *arraySize; i > position; i--) {
        array[i] = array[i - 1];
    }
    array[position] = number;
    *arraySize = *arraySize + 1;
    return WORKING;
}
//Ham xoa phan tu
int xoaPhanTu(int array[],int *arraySize,int position) {
	int i;
    for (i = position; i < (*arraySize - 1); i++) {
        array[i] = array[i + 1];
    }
    *arraySize = *arraySize - 1;
    return WORKING;
}
//Ham thay doi 2 gia tri trong mang voi nhau
int swap(int *value1,int *value2) {
    int temp = *value1;
    *value1 = *value2;
    *value2 = temp;
    return WORKING;
}
//Ham sap xep cac gia tri cua mang giam dan
int sapXepGiamDan(int array[],int arraySize) {
	int i,j;
    for (i = 0; i < arraySize - 1; i++) {
        for (j = i + 1; j < arraySize; j++) {
            if (array[i] < array[j]) {
                swap(&array[i], &array[j]);
            }
        }
    }
}
//Ham sap xep cac gia tri cua mang tang dan
int sapXepTangDan(int array[],int arraySize) {
	int i,j;
    for (i = 0; i < arraySize - 1; i++) {
        for (j = i + 1; j < arraySize; j++) {
            if (array[i] > array[j]) {
                swap(&array[i], &array[j]);
            }
        }
    }
}
//Ham tim kiem mang
int timKiemMang(int array[],int arraySize,int value) {
	int i;
    for (i = 0; i < arraySize; i++) {
        if (array[i] == value) {
            return WORKING;
        }
    }
    return FAILED;
}
