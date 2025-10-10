#include <stdio.h>

int main(int argc, char **argv)
{
    long long a = 0;
    long long b = 0;
    scanf_s("%lld", &a);
    scanf_s("%lld", &b);
    printf("%lld", ((a * b) % 109 + 109) % 109 + 1);
    return 0;
}