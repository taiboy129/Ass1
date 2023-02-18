#include <stdio.h>
#include <stdint.h>


int g_DefaultArraySize = 200;
enum State {HOATDONG = 1, KHONGHOATDONG = -1};
//Ham khoi tao mang
int khoiTaoMang(int ktMang) {
    if (ktMang > g_DefaultArraySize) {
        return KHONGHOATDONG;
    }
    return ktMang;
}
//Ham nhap mang
int nhapMang(int array[],int ktMang) {
	int i;
    printf("\nNhap %d phan tu vao mang: ", ktMang);
    for (i = 0; i < ktMang; i++) {
        scanf("%d", &array[i]);
    }
    return HOATDONG;
}
//Ham hien thi mang
int hienThiMang(int array[],int ktMang) {
	int i;
    printf("\nHien thi mang: ");
    for (i = 0; i < ktMang; i++) {
        printf("%d ", array[i]);
    }
    return HOATDONG;
}
//Ham them phan tu
int themPhanTu(int array[],int  ktMang,int so,int vitri) {
	int i;
    for (i =  ktMang; i > vitri; i--) {
        array[i] = array[i - 1];
    }
    array[vitri] = so;
     ktMang =  ktMang + 1;
    return HOATDONG;
}
//Ham xoa phan tu
int xoaPhanTu(int array[],int  ktMang,int vitri) {
	int i;
    for (i = vitri; i < ( ktMang - 1); i++) {
        array[i] = array[i + 1];
    }
     ktMang =  ktMang - 1;
    return HOATDONG;
}
//Ham thay doi 2 gia tri trong mang voi nhau
int swap(int *giatri1,int *giatri2) {
    int temp = *giatri1;
    *giatri1 = *giatri2;
    *giatri2 = temp;
    return HOATDONG;
}
//Ham sap xep cac gia tri cua mang giam dan
int sapXepGiamDan(int array[],int ktMang) {
	int i,j;
    for (i = 0; i < ktMang - 1; i++) {
        for (j = i + 1; j < ktMang; j++) {
            if (array[i] < array[j]) {
                swap(&array[i], &array[j]);
            }
        }
    }
}
//Ham sap xep cac gia tri cua mang tang dan
int sapXepTangDan(int array[],int ktMang) {
	int i,j;
    for (i = 0; i < ktMang - 1; i++) {
        for (j = i + 1; j < ktMang; j++) {
            if (array[i] > array[j]) {
                swap(&array[i], &array[j]);
            }
        }
    }
}
//Ham tim kiem mang
int timKiemMang(int array[],int ktMang,int giatri) {
	int i;
    for (i = 0; i < ktMang; i++) {
        if (array[i] == giatri) {
            return HOATDONG;
        }
    }
    return KHONGHOATDONG;
}
