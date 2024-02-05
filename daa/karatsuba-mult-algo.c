#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long long int power(int base, int exp) {
    long long int result = 1;
    while (exp != 0) {
        result *= base;
        --exp;
    }
    return result;
}

int numDigits(long long int num) {
    int digits = 0;
    while (num) {
        num /= 10;
        digits++;
    }
    return digits;
}

long long int karatsuba(long long int x, long long int y) {
    int n = fmax(numDigits(x), numDigits(y));
    int half = round(n / 2.0);

    if (n < 2) {
        return x * y;
    }

    long long int a = x / power(10, half);
    long long int b = x % power(10, half);
    long long int c = y / power(10, half);
    long long int d = y % power(10, half);

    long long int ac = karatsuba(a, c);
    long long int bd = karatsuba(b, d);
    long long int abcd = karatsuba(a + b, c + d);

    return ac * power(10, 2 * half) + (abcd - ac - bd) * power(10, half) + bd;
}

int main() {
    long long int x, y;
    printf("Enter two numbers: ");
    scanf("%lld %lld", &x, &y);
    printf("Product: %lld * %lld = %lld\n", x, y, karatsuba(x, y));
    return 0;
}