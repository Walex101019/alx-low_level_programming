#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * **strtow - Entry point
 * @str: parameter passed
 * Return: returns word
 */
char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
	{
		return NULL;
	}
	int word_count = 0;
	int i, j, word_index;
	int length = strlen(str);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			word_count++;
		}
	}
	char *words = (char *)malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
	{
		return NULL;
	}
	word_index = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			int start_index = i;
			for (j = i; str[j] != ' ' && str[j] != '\0'; j++)
			{
			}
			words[word_index] = (char *)malloc((j - i + 1) * sizeof(char));
			if (words[word_index] == NULL)
			{
				for (j = 0; j < word_index; j++)
				{
					free(words[j]);
				}
				free(words);
				return NULL;
			}
			strncpy(words[word_index], str + start_index, j - i);
			words[word_index][j - i] = '\0';
			word_index++;
			i = j - 1;
		}
	}
	words[word_index] = NULL;
	return words;
}
