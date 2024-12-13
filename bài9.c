#include <stdio.h>
#include <string.h>

void xoaKyTu(char *chuoi, char kyTuCanXoa) {
    int i, j = 0;
    char ketQua[100];

    for (i = 0; chuoi[i] != '\0'; i++) {
        if (chuoi[i] != kyTuCanXoa) {
            ketQua[j++] = chuoi[i];
        }
    }

    ketQua[j] = '\0';
    strcpy(chuoi, ketQua);
}

int main() {
    char chuoi[100];
    char kyTuCanXoa;

    printf("Nhap chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    chuoi[strcspn(chuoi, "\n")] = '\0'; // Xoa ky tu xuong dong

    printf("Nhap ky tu can xoa: ");
    scanf("%c", &kyTuCanXoa);

    xoaKyTu(chuoi, kyTuCanXoa);

    printf("Chuoi sau khi xoa ky tu '%c': %s\n", kyTuCanXoa, chuoi);

    return 0;
}

