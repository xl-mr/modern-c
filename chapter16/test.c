#include <stdio.h>
#include <string.h>

#define NAME_LEN 20
//#define INT_KIND 1
//#define DOUBLE_KIND 1

//枚举
enum {CLUBS, DIAMONDS, HEARTS, SPADES} s1, s2;

struct part {
    int num;
    char name[NAME_LEN + 1];
    int on_hand;
};

typedef struct part *ptr_part;

enum kind {INT_KIND, DOUBLE_KIND};

struct number {
    enum kind kind;
    union {
        int i;
        double d;
    } u;
} number;

void print_number(struct number n)
{
    if (n.kind == INT_KIND) {
        printf("%d\n", n.u.i);
    } else {
        printf("%g\n", n.u.d);
    }
}

struct part test(void)
{
    struct part part;

    part.num = 1;
    part.on_hand = 2;
    strcpy(part.name, "hello world!");

    return part;
}

void test2(ptr_part part)
{
    printf("test1 func part = %p\n", part);
    //printf("test1 func *part = %p\n", *part);

    (part)->num = 10;
    (part)->on_hand = 20;
    strcpy((part)->name, "hello world! 1111");
}

int main(void)
{
    struct part part = test();
    struct part *test1 = &part;

    printf("%02d\n", 10);

    ptr_part test11 = test1;

    printf("&test1 = %p\n", &test1);
    printf("test1 = %p\n", test1);

    test2(test1);

    printf("test11 = %p\n", test11);
    printf("test11 num = %d\n", test11->num);

    printf("part.num = %d\n", part.num);
    printf("part.name = %s\n", part.name);
    printf("part.on_hand = %d\n", part.on_hand);

    number.kind = INT_KIND;
    number.u.i = 10;

    print_number(number);

    number.kind = DOUBLE_KIND;
    number.u.d = 55.555;

    print_number(number);

    s1 = DIAMONDS;
    printf("s enum = %d\n", s1);

    return 0;
}

