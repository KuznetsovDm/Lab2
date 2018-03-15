#include <string.h>
#include "revert_string.h"

void Swap(char *left, char *right);

void RevertString(char *str)
{
	int len = strlen(str);
	for (int i = 0; i < len / 2; i++)
        Swap(&str[i], &str[len - i - 1]);
}

void Swap(char *left, char *right)
{
	char temp = *left;
	*left = *right;
	*right = temp;
}
