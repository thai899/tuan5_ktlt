#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#include<string.h>
void nhapChuoi(char* str, int size) {
    printf("Nhap chuoi: ");
    fgets(str, size, stdin);
    str[strcspn(str, "\n")] = '\0';
}


void xuatChuoi(const char* str) {
    printf("%s\n", str);
}


int kiemTraDoiXung(const char* str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char str[100];
    nhapChuoi(str, sizeof(str));
    if (kiemTraDoiXung(str)) {
        printf("Chuoi doi xung.\n");
    }
    else {
        printf("Chuoi khong doi xung.\n");
    }
    return 0;
}