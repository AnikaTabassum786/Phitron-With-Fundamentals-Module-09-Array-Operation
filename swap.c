#include <stdio.h>

int main()
{

    int A = 10;
    int B = 20;
    printf("%d %d\n", A, B);

    int temp;
    temp = A;
    A = B;
    B = temp;

    printf("%d %d", A, B);

    return 0;
}