#ifndef DOG_H
#define DOG_H

/**
 * struct dog - definition of a dog
 *
 * @name: the name
 * @age: the age
 * @owner: the owner
 *
 * Description - a dog with his attributes
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif /* DOG_H */
