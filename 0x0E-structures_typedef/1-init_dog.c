#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
README.md if (d == NULL)
README.md README.md d = malloc(sizeof(struct dog));
README.md d->name = name;
README.md d->age = age;
README.md d->owner = owner
}
