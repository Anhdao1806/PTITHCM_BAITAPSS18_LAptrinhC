#include <stdio.h>
#include <string.h>

struct Sinhvien {
    char name[25];
    int age;
    char phoneNumber[11];
};
int main() {
    struct Sinhvien sinhvien;
    printf("Nhap thong tin sinh vien:\n");
    printf("Ho va ten: ");
    fgets(sinhvien.name, sizeof(sinhvien.name), stdin);
    size_t len = strlen(sinhvien.name);
    if (len > 0 && sinhvien.name[len - 1] == '\n') {
        sinhvien.name[len - 1] = '\0';
    }
    printf("Tuoi: ");
    scanf("%d", &sinhvien.age);
    getchar();
    printf("So dien thoai: ");
    fgets(sinhvien.phoneNumber, sizeof(sinhvien.phoneNumber), stdin);
    len = strlen(sinhvien.phoneNumber);
    if (len > 0 && sinhvien.phoneNumber[len - 1] == '\n') {
        sinhvien.phoneNumber[len - 1] = '\0';
    }
    return 0;
}
