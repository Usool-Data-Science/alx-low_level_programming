#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

void pre_print(void) __attribute__((constructor));

void pre_print(void)
{
	printf("You're beat! and yet, you must allow, \nI bore my house upon my back!\n");
}
