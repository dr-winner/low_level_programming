#include "main.h"
#include <stdio.h>

/**
 * rot13 - function encoder rot13
 * @s: pointer to string
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int x;
	int y;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (s[a] == data1[y])
			{
				s[a] = datarot[j];
				break;
			}
		}
	}
	return (s);
}