#include <stdio.h>
#include <ctype.h>
#include <string.h>

void vietHoaChuCaiDau(char str[]) {
    int i;
    int doDai = strlen(str);

    // Vi?t hoa k? t? ð?u tiên n?u nó là ch? cái
    if (doDai > 0 && isalpha(str[0])) {
        str[0] = toupper(str[0]);
    }

    // Duy?t qua chu?i, vi?t hoa ch? cái ð?u c?a các t?
    for (i = 1; i < doDai; i++) {
        if (str[i - 1] == ' ' && isalpha(str[i])) {
            str[i] = toupper(str[i]);
        }
    }
}

int main() {
    char str[100];

    // Nh?p chu?i t? ngý?i dùng
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    // Xóa k? t? xu?ng d?ng do fgets thêm vào
    str[strcspn(str, "\n")] = '\0';

    // G?i hàm vi?t hoa ch? cái ð?u
    vietHoaChuCaiDau(str);

    // In chu?i sau khi x? l?
    printf("Chuoi sau khi viet hoa: %s\n", str);

    return 0;
}

