//Write a c program to find out the sum of an A.P. series.

#include <stdio.h>

int main() {
    int a, num, d;

    printf("Input the starting number of the A.P. series: ");
    scanf("%d", &a);
    printf("Input the number of items for the A.P. series: ");
    scanf("%d", &num);
    printf("Input the common difference of A.P. series: ");
    scanf("%d", &d);

    int sum = 0;
    printf("The Sum of the A.P. series are: \n");
    int i;
    for (i = 0; i < num ; ++i) {
        printf("%d", a + i * d);
        sum += a + i * d;
        if (i != num - 1) {
            printf(" + ");
        } else {
            printf(" = %d\n", sum);
        }
    }

    return 0;
}

