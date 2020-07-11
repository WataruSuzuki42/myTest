#include <stdio.h>


static void test1();
static void test2();
static void test3();
static void test4();
static void test5();

static int test_num = 0;

void (*const All_test[])() = {
    &test1,
    &test2,
    &test3,
    &test4,
    &test5,
};

int main(void) {
    All_test[test_num]();
    return 0;
}

static void test1(){
    printf("1\n");
    test_num++;
}

static void test2(){
    printf("1\n");
    test_num++;
}

static void test3(){
    printf("1\n");
    test_num++;
}

static void test4(){
    printf("1\n");
    test_num++;
}

static void test5(){
    printf("1\n");
    test_num++;
}
