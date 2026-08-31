#include <stdlib.h>

void rand_string(char *s, size_t size)
{
	char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (size_t i = 0; i < size; i++)
	{
		s[i] = characters[rand() % 52];
	}

	s[size] = '\0';
}
