#include"dog.h"
/**
 * init_dog - function to asign values to struct dog
 * @d: pointer to the variable of struc dog
 * @name: memeber of struc dog. name of the dog
 * @age: member of struct dog. age of the dog
 * @owner: member of struct dog. name of the dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
