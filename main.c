#include <stdio.h>

int main() {
    int n;

    printf("Number : ");
    scanf("%d", &n);
    
    printf("Multiplication table of %n:\n", n);

    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d \n", n, i, (n * i));


    }
    return 0;
}
