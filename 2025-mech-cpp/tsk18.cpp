#include <stdio.h>

int main(int argc, char **argv)
{
    long long a = 0;
    scanf_s("%lld", &a);
    printf("%lld", (a + 9) / 10);
    return 0;
}