#include <stdlib.h>
#include "dog.h"
/**
 * _strlen – this returns the length of a string
 * @s: the string to evaluate
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int b;
	b = 0;

	while (s[b] != '\0')
	{
		b++;
	}
	return (b);
}
/**
 * *_strcpy – it copies the string pointed to by src
 * this is including the terminating null byte (\0)
 * the buffer pointed to by dest
 * @dest: the pointer to the buffer in which we copy the string
 * @src: the string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int n, a;
	n = 0;

	while (src[n] != '\0')
	{
		n++;
	}
	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}
/**
 * new_dog – this creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: the pointer to the new dog (Successful), else NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int n1, n2;
	n1 = _strlen(name);
	n2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (n1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (n2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);	
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
