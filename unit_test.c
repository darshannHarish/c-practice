#include <assert.h>
#include <stdio.h>

#define main test_main
#include "test.c"
#undef main

int main(void)
{
    assert(add(2, 3) == 5);
    assert(add(-1, 1) == 0);
    assert(add(0, 0) == 0);
    assert(add(10, -5) == 5);
    assert(add(123, 456) == 579);

    printf("All unit tests passed.\n");
    return 0;
}
