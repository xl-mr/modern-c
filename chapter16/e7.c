#include <stdio.h>

struct fraction {
    int numerator, denominator;
};

struct fraction gcd(struct fraction fraction);
struct fraction plus(struct fraction f1, struct fraction f2);
struct fraction minus(struct fraction f1, struct fraction f2);
struct fraction multi(struct fraction f1, struct fraction f2);
struct fraction except(struct fraction f1, struct fraction f2);

int main(void)
{
    struct fraction f1 = {1, 2}, f2 = {1, 3}, f;

    f = plus(f1, f2);
    printf("f1 plus f2 numerator = %d, denominator = %d\n", f.numerator, f.denominator);

    f = minus(f1, f2);
    printf("f1 minus f2 numerator = %d, denominator = %d\n", f.numerator, f.denominator);

    f = multi(f1, f2);
    printf("f1 multi f2 numerator = %d, denominator = %d\n", f.numerator, f.denominator);

    f = except(f1, f2);
    printf("f1 except f2 numerator = %d, denominator = %d\n", f.numerator, f.denominator);

    return 0;
}

struct fraction gcd(struct fraction f)
{
    int remainder, numerator, denominator;

    numerator = f.numerator;
    denominator = f.denominator;
    while (1) {
        remainder = denominator % numerator;
        if (remainder == 0) {
            break;
        }
        denominator = numerator;
        numerator = remainder;
    }

    f.numerator = f.numerator / numerator;
    f.denominator = f.denominator / numerator;

    return f;
}

struct fraction plus(struct fraction f1, struct fraction f2)
{
    struct fraction f;
    int numerator, denominator;

    numerator = f1.denominator * f2.numerator + f2.denominator * f1.numerator;
    denominator = f1.denominator * f2.denominator;
    f.numerator = numerator;
    f.denominator = denominator;
    
    return gcd(f);
}

struct fraction minus(struct fraction f1, struct fraction f2)
{
    
    struct fraction f;
    int numerator, denominator;

    numerator = f2.denominator * f1.numerator - f1.denominator * f2.numerator;
    denominator = f1.denominator * f2.denominator;
    f.numerator = numerator;
    f.denominator = denominator;
    
    return gcd(f);
}

struct fraction multi(struct fraction f1, struct fraction f2)
{

    struct fraction f;
    int numerator, denominator;

    numerator = f1.numerator * f2.numerator;
    denominator = f1.denominator * f2.denominator;
    f.numerator = numerator;
    f.denominator = denominator;
    
    return gcd(f);
}

struct fraction except(struct fraction f1, struct fraction f2)
{

    struct fraction f;
    int numerator, denominator;

    numerator = f1.numerator * f2.denominator;
    denominator = f1.denominator * f2.numerator;
    f.numerator = numerator;
    f.denominator = denominator;
    
    return gcd(f);
}
