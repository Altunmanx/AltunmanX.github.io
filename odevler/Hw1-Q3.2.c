#include <stdio.h>

void computeHomeValue(void);

int main() {
    computeHomeValue();
    return 0;
}

void computeHomeValue(void) {
    int popularity, size, homeValue;

    printf("Enter popularity: ");
    scanf("%d", &popularity);

    printf("Enter size: ");
    scanf("%d", &size);

    homeValue = (popularity * popularity * popularity + size * size) * 10000;

    printf("Home value is: %d\n", homeValue);
}

