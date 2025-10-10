#include <stdio.h>

int main(int argc, char **argv)
{
    long long k = 0;
    long long n = 0;
    scanf_s("%lld", &k);
    scanf_s("%lld", &n);
    printf("%lld %lld", ((n % k + k) / k) + ((n - 1) / k), k - n * ((n - 1) / k));
    return 0;
}