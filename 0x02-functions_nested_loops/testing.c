#include <ctype.h>
#include <stdio.h>

int main(void)
{
	char cha = 'a';
	
	if (islower(cha))
	{
		printf("Yes this is lower\n");
	}
	else
	{
		printf("NO it is not \n");
	}
}
