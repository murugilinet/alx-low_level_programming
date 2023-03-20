#include "dog.h"
#include <stdlib.h>
/**
 * str_len- returns length of string
 * @s: string
 * Return: length of a string
 */
int str_len(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * str_cpy- keeps a copy of string pointed to by src
 * including terminating null byte
 * to the buffer pointed by dest
 * @dest: pointer to the buffer where we point the string
 * @src: pointer to string being copied
 * Return: pointer to where string has been copied dest
 */
char *str_cpy(char *dest, char *src)
{
	int len, inc;

	len = str_len(src);

	for (inc = 0; inc < len ; inc++)
	{
		dest[inc] = src[inc];
	}
	return (dest);
}
/**
 * new_dog- creates new dog
 * @name: name of dog
 * @age: age of
 * @owner: owner of
 * Return: Null if failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = str_len(name);
	len2 = str_len(owner);

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	str_cpy(dog->name, name);
	str_cpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
