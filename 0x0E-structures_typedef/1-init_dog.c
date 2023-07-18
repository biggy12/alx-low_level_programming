#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - use in the min function
 * @d: first input
 * @name: socund input
 * @age: thired input
 * @owner: fourth input
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;

}
