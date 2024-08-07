#include <stdio.h>


void thapHaNoi(int n, char tu, char den, char trungGian) {
    if (n == 1) {
        printf("Chuyen dia 1 tu %c sang %c\n", tu, den);
        return;
    }
    thapHaNoi(n - 1, tu, trungGian, den);
    printf("Chuyen dia %d tu %c sang %c\n", n, tu, den);
    thapHaNoi(n - 1, trungGian, den, tu);
}
int main() {
    int n; 
    printf("Nhap so luong dia: ");
    scanf_s("%d", &n);
    thapHaNoi(n, 'A', 'C', 'B'); 
    return 0;
}