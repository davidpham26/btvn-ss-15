#include <stdio.h>

int main() {
    char chuoi[] = "Hello World";
    char ky_tu;
    int dem = 0;

    printf("Nhap vao mot ky tu bat ky: ");
    scanf("%c", &ky_tu);

    for (int i = 0; chuoi[i] != '\0'; i++) {
        if (chuoi[i] == ky_tu) {
            dem++;
        }
    }

    printf("Ky tu '%c' xuat hien %d lan trong chuoi.\n", ky_tu, dem);

    return 0;
}

