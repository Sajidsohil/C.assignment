#include <stdio.h>

int main() {
    int a, b, c,big;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter third number: ");
    scanf("%d", &c);

    big = (a >b) ? (a > c? a : c) : (b> c ? b : c);
    printf("The largest number is: %d\n", big);
    return 0;
}
