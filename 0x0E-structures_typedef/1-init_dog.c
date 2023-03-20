#include"dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to variable of type struct dog
 * @name:name of
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
