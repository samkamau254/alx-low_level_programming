#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Prints information about a dog.
 *
 * @d: Pointer to a struct dog to print.
 *
 * Description:
 * This function prints essential details about a dog,
 * such as its name, age, and owner.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	/* Replace NULL values with "(nil)" for name and owner */
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
}

