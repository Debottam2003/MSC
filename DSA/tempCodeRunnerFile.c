#include <stdio.h>
#include <math.h>

long int power(int base, int exp) {
    long int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

long int karatsuba(long int a, long int b) {
    if (a < 10 || b < 10) {
        return a * b;
    }

    long int len_a = 0, len_b = 0, num;

    num = a;
    while (num != 0) {
        num /= 10;
        len_a++;
    }

    num = b;
    while (num != 0) {
        num /= 10;
        len_b++;
    }

    long int n = (len_a > len_b) ? len_a : len_b;
    long int half = (n / 2);

    long int power_10_half = power(10, half);

    long int p = a / power_10_half;
    long int q = a % power_10_half;
    long int r = b / power_10_half;
    long int s = b % power_10_half;

    long int ac = karatsuba(p, r);
    long int bd = karatsuba(q, s);
    long int ad_plus_bc = karatsuba(p + q, r + s) - ac - bd;

    return ac * power_10_half * power_10_half + ad_plus_bc * power_10_half + bd;
}

int main() {
    printf("This is the Karatsuba algorithm...\n");
    long int a, b;
    printf("Enter the first number: ");
    scanf("%ld", &a);
    printf("Enter the second number: ");
    scanf("%ld", &b);

    long int result = karatsuba(a, b);
    printf("The multiplication result using Karatsuba algorithm is: %ld\n", result);
    return 0;
}
