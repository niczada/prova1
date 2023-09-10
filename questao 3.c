//questão 3
#include <stdio.h>

int main() {
    
    char y;

    printf("caracter: ");
    scanf("%c", &y);
    int Decimal = (int)y;

    printf(" decimal  %d.\n", y, Decimal);
    printf(" hexadecimal  0x%X.\n", y, Decimal);

    return 0;
}