#include <stdio.h>

int main(int argc, char **argv)
{
    int n = 0;
    int a = 0;
    int b = 0;
    scanf_s("%d", &n);
    scanf_s("%d", &a);
    scanf_s("%d", &b);
    printf("%d", n * a * b);
    return 0;
}