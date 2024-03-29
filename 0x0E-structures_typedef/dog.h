#ifndef poppy
#define poppy
/**
 * struct dog - object containing dog information
 * @name: string of dog name
 * @age: int of dog age
 * @owner: string name of owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
