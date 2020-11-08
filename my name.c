#define _CRT_SECRE_NO_WARNINGS
#define _CRT_NONSTDC_NO_WARNINGS


#include <stdio.h>
int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    printf("ASCII value of %c = %d", c, c);

    return 0;
}