#include <stdio.h>

int main(int argc, char **argv)
{
    long long a = 0;
    long long b = 0;
    scanf_s("%lld", &a);
    scanf_s("%lld", &b);
    printf("%lld %lld %lld", b / a, b % a, ((a - b % a)) % a);
    return 0;
}