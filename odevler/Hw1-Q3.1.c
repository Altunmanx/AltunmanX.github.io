#include <stdio.h>

// Fonksiyon prototipi
void computeHomeValue(void);

int main() {
    // Fonksiyonu �a��r
    computeHomeValue();
    return 0;
}

// Fonksiyon tan�m�
void computeHomeValue(void) {
    int popularity, size, homeValue;

    // Kullan�c�dan de�erleri al
    printf("Enter popularity: ");
    scanf("%d", &popularity);

    printf("Enter size: ");
    scanf("%d", &size);

    // Hesaplama
    homeValue = (popularity * popularity * popularity + size * size) * 10000;

    // Sonucu yazd�r
    printf("Home value is: %d\n", homeValue);
}

