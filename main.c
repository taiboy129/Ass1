#include <stdio.h>
#include <stdlib.h>
#include "API.h"
#include <stdint.h>

enum State {WORKING = 1, FAILED = -1};
int g_Array[];

int main() {
    char chon;
    int ktMang;
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
                    scanf("%d", &ktMang);
                    if (khoiTaoMang(ktMang) != FAILED) {
                        nhapMang(g_Array, ktMang);
                    }
                    break;
            }
        case '2': {
                    hienThiMang(g_Array, ktMang);
                    break;
            }
        case '3': {
                    int vitri = 0;
                    int giatri = 0;
                    printf("Nhap vi tri can chen: ");
                    scanf("%d", &vitri);
                    printf("Nhap gia tri chan chen: ");
                    scanf("%d", &giatri);
                    themPhanTu(g_Array, &ktMang, giatri, vitri);
                    printf("Kich thuoc mang: %d", ktMang);
                    break;
            }
        case '4': {
                    int vitri = 0;
                    printf("Nhap vi tri can xoa: ");
                    scanf("%d", &vitri);
                    xoaPhanTu(g_Array, &ktMang, vitri);
                    printf("Kich thuoc mang: %d", ktMang);
                    break;
            }
        case '5': {
                    sapXepTangDan(g_Array, ktMang);
                    break;
            }
        case '6': {
                    sapXepGiamDan(g_Array, ktMang);
                    break;
            }
        case '7': {
                    int giatri = 0;
                    printf("Nhap gia tri can tim: ");
                    scanf("%d", &giatri);
                    int result = timKiemMang(g_Array, ktMang, giatri);
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
