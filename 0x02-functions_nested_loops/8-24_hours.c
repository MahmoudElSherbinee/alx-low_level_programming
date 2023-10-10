#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - function is the master function to check the lowercase char
 *
 * @c: check the input
 *
 * Return: Always 0 (success)
*/

void jack_bauer(void){
	int hour, minute;

	for (hour = 0; hour < 24; hour++) {
	for (minute = 0; minute < 60; minute++)
{
	printf("%02d:%02d\n", hour, minute);
}
}
}
