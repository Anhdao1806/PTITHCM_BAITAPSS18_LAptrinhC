#include <stdio.h>

struct sinhVien {
    int id;
    char name[25];
    int age;
    char phoneNumber[11];
};
int main() {
    struct sinhVien sinhvien[50];
    int numStudents = 5;
    for (int i = 0; i < numStudents; i++) {
        sinhvien[i].id = i + 1;
        printf("\nNhap thong tin sinh vien thu %d:\n", students[i].id);
        printf("Ho va ten: ");
        getchar();
        fgets(sinhvien[i].name, sizeof(sinhvien[i].name), stdin);
        printf("Tuoi: ");
        scanf("%d", &sinhvien[i].age);
        printf("So dien thoai: ");
        scanf("%s", sinhvien[i].phoneNumber);
    }
    printf("\nThong tin cua cac sinh vien:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("\nSinh vien thu %d:\n", sinhvien[i].id);
        printf("ID: %d\n", sinhvien[i].id);
        printf("Ho va ten: %s", sinhvien[i].name);
        printf("Tuoi: %d\n", sinhvien[i].age);
        printf("So dien thoai: %s", sinhvien[i].phoneNumber);
    }
    return 0;
}


