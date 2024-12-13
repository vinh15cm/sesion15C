#include <stdio.h>
#include <ctype.h>
#include <string.h>

void demKyTu(const char *chuoi, int *soChuCai, int *soChuSo, int *soKyTuDacBiet) {
    *soChuCai = 0;
    *soChuSo = 0;
    *soKyTuDacBiet = 0;

    for (int i = 0; chuoi[i] != '\0'; i++) {
        if (isalpha(chuoi[i])) {
            (*soChuCai)++;
        } else if (isdigit(chuoi[i])) {
            (*soChuSo)++;
        } else {
            (*soKyTuDacBiet)++;
        }
    }
}

int main() {
    char chuoi[256];
    int soChuCai, soChuSo, soKyTuDacBiet;

    printf("Nhap chuoi: \n");
    fgets(chuoi, sizeof(chuoi), stdin);
    chuoi[strcspn(chuoi, "\n")] = '\0'; // Loai bo ky tu xuong dong neu co

    demKyTu(chuoi, &soChuCai, &soChuSo, &soKyTuDacBiet);

    printf("So ky tu la chu cai: %d\n", soChuCai);
    printf("So ky tu la chu so: %d\n", soChuSo);
    printf("So ky tu dac biet: %d\n", soKyTuDacBiet);

    return 0;
}

