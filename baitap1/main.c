#include <stdio.h>
#include <string.h>
struct SinhVien {
    char name[25];
    int age;
    char phoneNumber[11];
};
int main() {
    struct SinhVien sinhvien;
    strcpy(sinhvien.name, "Ho Le Anh Dao");
    sinhvien.age = 18;
    strcpy(sinhvien.phoneNumber, "0123456789");
    printf("Thong tin sinh vien:\n");
    printf("Ho va ten: %s\n", sinhvien.name);
    printf("Tuoi: %d\n", sinhvien.age);
    printf("So dien thoai: %s\n", sinhvien.phoneNumber);
    return 0;
}

