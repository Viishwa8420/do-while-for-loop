//A Program to print the Fibonacci series up to N numbers using for loop.
#include<stdio.h>

 main() {
    int i, n, n1 = 0, n2 = 1, n3;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series:\n");

    for(i = 0; i < n; i++) {
        printf("%d, ", n1);
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }
}


