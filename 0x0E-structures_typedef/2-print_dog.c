#include<stdlib.h>
#include<stdio.h>
#include"dog.h"

/**
 * print_dog - prints dog struc
 * @d: pointer to the dog struc
 * Return: noting
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL && d->owner != NULL)
		{
			printf("Name: (nil)\n");
			printf("Age: %f\n", d->age);
			printf("Owner: %s\n", d->owner);
		}
		else if (d->name != NULL && d->owner == NULL)
		{
			printf("Name: %s\n", d->name);
			printf("Age: %f\n", d->age);
			printf("Owner: (nill)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
			printf("Age: %f\n", d->age);
			printf("Owner: %s\n", d->owner);
		}
	}
}
