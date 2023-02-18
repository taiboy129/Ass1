#include <stdio.h>
#include <stdlib.h>
#include "API.h"
#include <stdint.h>

enum State {WORKING = 1, FAILED = -1};
int g_Array[];

int main() {
    char chon;
    int arrSize;
    do {
        		printf("\n'1' Khoi tao mang so nguyen");
				printf("\n'2' In day");
				printf("\n'3' Them phan tu vao day tai vi tri k");
				printf("\n'4' Xoa phan tu tai vi tri k");
				printf("\n'5' Sap xep day so tang dan");
				printf("\n'6' Sap xep day so giam dan");
				printf("\n'7' Tim kiem");
				printf("\n'8' Thoat");
				printf("\nChon: ");
				scanf("%c", &chon);

	switch (chon) {
        case '1': {
                    printf("Nhap so luong phan tu: ");
                    scanf("%d", &arrSize);
                    if (khoiTaoMang(arrSize) != FAILED) {
                        nhapMang(g_Array, arrSize);
                    }
                    break;
            }
        case '2': {
                    hienThiMang(g_Array, arrSize);
                    break;
            }
        case '3': {
                    int position = 0;
                    int value = 0;
                    printf("Nhap vi tri can chen: ");
                    scanf("%d", &position);
                    printf("Nhap gia tri chan chen: ");
                    scanf("%d", &value);
                    themPhanTu(g_Array, &arrSize, value, position);
                    printf("array size: %d", arrSize);
                    break;
            }
        case '4': {
                    int position = 0;
                    printf("Nhap vi tri can xoa: ");
                    scanf("%d", &position);
                    xoaPhanTu(g_Array, &arrSize, position);
                    printf("array size: %d", arrSize);
                    break;
            }
        case '5': {
                    sapXepTangDan(g_Array, arrSize);
                    break;
            }
        case '6': {
                    sapXepGiamDan(g_Array, arrSize);
                    break;
            }
        case '7': {
                    int value = 0;
                    printf("Nhap gia tri can tim: ");
                    scanf("%d", &value);
                    int result = timKiemMang(g_Array, arrSize, value);
                    if (result == WORKING) {
                        printf("gia tri can tim ton tai trong mang");
                    } else {
                        printf("gia tri can tim khong ton tai trong mang");
                    }
                    break;
            }
        case '8': {
                    printf("\nThoat chuong trinh");
                    break;
            }
            default: {
                    printf("\nNhap ki tu de thuc hien chuong trinh");
                    break;
			}
        }
    } while (choose != '8');
    return 0;
}
