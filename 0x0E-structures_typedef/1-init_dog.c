#include "dog.h"
#include <stddef.h>
/**
 * init_dog- initializes a variable of type struct dog
 * @d: type to be initialized
 * @name: name of
 * @age: age of
 * @owner: owner of
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;/*similar to (*d).name =name*/
	d->age = age;
	d->owner = owner;
}
