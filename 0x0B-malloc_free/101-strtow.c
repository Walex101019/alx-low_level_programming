#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * **strtow - Entry point
 *
 * @str: parameter passed
 *
 * Return: return words
 */
char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
	{
		return NULL;
	}
	int word_count = 0;
	int i = 0;
	int j;
	int length = strlen(str);
	while (i < length)
	{
		while (i < length && str[i] == ' ')
		{
			i++;
		}
		if (i < length && str[i] != ' ')
		{
			word_count++;
			while (i < length && str[i] != ' ')
			{
				i++;
			}
		}
	}
	char *words = (char *)malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
	{
		return NULL;
	}
	i = 0;
	int word_index = 0;
	while (i < length)
	{
		while (i < length && str[i] == ' ')
		{
			i++;
		}
		if (i < length && str[i] != ' ')
		{
			j = i;
			while (j < length && str[j] != ' ')
			{
				j++;
			}
			words[word_index] = (char *)malloc((j - i + 1) * sizeof(char));
			if (words[word_index] == NULL)
			{
				for (int k = 0; k < word_index; k++)
				{
				free(words[k]);
                		}
				free(words);
				return NULL;
			}	
			strncpy(words[word_index], str + i, j - i);
			words[word_index][j - i] = '\0';
			word_index++;	
			i = j;
		}
	}
	words[word_index] = NULL;
	return words;
}
