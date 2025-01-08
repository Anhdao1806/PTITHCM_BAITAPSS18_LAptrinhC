#include <stdio.h>

struct sinhVien {
    char name[20];
    int age;
    char phoneNumber[10];
};
int main() {
    int soLuong = 5;
    struct sinhVien sinhvien[soLuong];
    for (int i = 0; i < soLuong; i++) {
        printf("Nhap ho ten sinh vien thu  %d: ", i + 1);
        scanf("%s", sinhvien[i].name);
        printf("Nhap tuoi sinh vien thu  %d: ", i + 1);
        scanf("%d", &sinhvien[i].age);
        printf("Nhap sdt sinh vien thu %d: ", i + 1);
        scanf("%s", sinhvien[i].phoneNumber);
    }
    for (int i = 0; i < soLuong; i++) {
        printf("\nThong tin sinh vien thu %d:\n", i + 1);
        printf("Ten: %s\n", sinhvien[i].name);
        printf("Tuoi: %d\n", sinhvien[i].age);
        printf("soDienThoai: %s\n", sinhvien[i].phoneNumber);
    }
    return 0;
}
