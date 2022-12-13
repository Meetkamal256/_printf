#include <unistd.h>
#include "main.h"
#include <stdio.h>

/**
 * main - test file
 * program excecution starts from here
 *
 * return 0 always
 */

int main(void)
{
    int count_std = 0;
    int count_hmd = 0;
    write(1, "STANDARD:\n", 10);
    count_std = printf("The first letter of my name starts with %c\n", 'K');
    printf("I printed %d characters\n", count_std);
    write(1, "________________________\n", 26);
    write(1, "HOME_MADE:\n", 11);
    count_hmd = printf("The first letter of my name starts with %c\n", 'M' );
    printf("I printed %d characters\n", count_hmd);
    return (0);
}
