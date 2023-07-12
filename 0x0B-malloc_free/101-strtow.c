#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * strtow - Splits a string into words
 * @str: The input string
 *
 * Return: Pointer to an array of strings (words) or NULL
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, word_count, length;
	int count_words(char *str);
	int word_length(char *str);
	char *copy_word(char *str, int length);

	if (str == NULL || *str == '\0')
		return (NULL);
	word_count = count_words(str);
	words = (char **)malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			length = word_length(&str[i]);
			words[j] = copy_word(&str[i], length);
			if (words[j] == NULL)
			{
				for (k = 0; k < j; k++)
					free(words[k]);
				free(words);
				return (NULL);
			}
			i += length;
			j++;
		}
		else
		{
			i++;
		}
	}
	words[j] = NULL;
	return (words);
}
int count_words(char *str)
{
	int count = 0;
	int i = 0;
	
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
		i++;
	}
	return count;
}
int word_length(char *str)
{
	int length = 0;
	
	while (str[length] != ' ' && str[length] != '\0')
		length++;
	return length;
}
char *copy_word(char *str, int length)
{
	char *word = (char *)malloc((length + 1) * sizeof(char));
	int i;
	
	if (word == NULL)
		return NULL;
	for (i = 0; i < length; i++)
		word[i] = str[i];
	word[length] = '\0';
	return word;
}

