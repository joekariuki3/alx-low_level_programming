/*include standard libs*/
#include<stdio.h>

/**
 * main function that prints its name
 */
int main(int argc, char *argv[])
{
	if (argc >= 0)
	{
		printf("%s\n",argv[0]);
	}
	return(0);
}
