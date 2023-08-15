#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: the struct dog to be printed
 */
void  print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name:(nill)\n");
	if (d->age < 0)
		printf("Age:(nill)\n");
	else
		printf("Age:%f\n", d->age);
	if (d->owner == NULL)
		printf("Owner : (nill)\n");
	else
		printf("Owner : %s\n", d->owner);
}
