#include <stdio.h>

// Fonksiyon prototipi
void computeHomeValue(void);

int main() {
    // Fonksiyonu çaðýr
    computeHomeValue();
    return 0;
}

// Fonksiyon tanýmý
void computeHomeValue(void) {
    int popularity, size, homeValue;

    // Kullanýcýdan deðerleri al
    printf("Enter popularity: ");
    scanf("%d", &popularity);

    printf("Enter size: ");
    scanf("%d", &size);

    // Hesaplama
    homeValue = (popularity * popularity * popularity + size * size) * 10000;

    // Sonucu yazdýr
    printf("Home value is: %d\n", homeValue);
}

