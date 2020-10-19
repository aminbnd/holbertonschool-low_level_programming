#ifndef DOG_H
#define DOG_H
/**
 * struct dog - information about a dog
 *@name: pointer to a string
 *@age: float
 *@owner: pointer to a string
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



#endif
