#include <stdlib.h>
#include <stdio.h>
/**
 * main - program that prints all arguments it receives without using argc
 * @argv: NULL terminated array of arguments (strings).
 * Return: 0 if no errors
*/
int main(char *argv[])
{
	int i;

	for (i = 0; argv[i] != NULL; i++)
		printf("%s\n", argv[i]);
	return (0);
}