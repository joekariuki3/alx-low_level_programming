#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include"main.h"
char **strtow(char *str)
{
	int num_words = 0, in_word = 0, i, j, word_index = 0, word_start = 0;

	if (str == NULL || strlen(str) == 0)
	{
		return (NULL);
	}
	/* Count the number of words in the string */
	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isspace(str[i]))
		{
			if (!in_word)
			{
				num_words++;
				in_word = 1;
			}
		}
		else
		{
			in_word = 0;
		}
	}
	/* Allocate memory for the array of words */
	char **words = malloc((num_words + 1) * sizeof(char*));
	if (words == NULL)
	{
		return (NULL);
	}
	/* Copy each word into the array */
	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isspace(str[i]))
		{
			if (word_start == i)
			{
				word_start = i;
			}
			if (i == strlen(str) - 1)
			{
				words[word_index] = malloc((i - word_start + 2) * sizeof(char));
				if (words[word_index] == NULL)
				{
					/* Free previously allocated memory and return NULL*/
					for (j = 0; j < word_index; j++)
					{
						free(words[j]);
					}
					free(words);
					return (NULL);
				}
				strncpy(words[word_index], &str[word_start], i - word_start + 1);
				words[word_index][i - word_start + 1] = '\0';
				word_index++;
			}
		}
		else
		{
			words[word_index] = malloc((i - word_start + 1) * sizeof(char));
			if (words[word_index] == NULL)
			{
				/* Free previously allocated memory and return NULL */
				for (j = 0; j < word_index; j++)
				{
					free(words[j]);
				}
				free(words);
				return (NULL);
			}
			strncpy(words[word_index], &str[word_start], i - word_start);
			words[word_index][i - word_start] = '\0';
			word_index++;
			word_start = i + 1;
		}
	}
	/* Add NULL terminator to the end of the array*/
	words[num_words] = NULL;
	return (words);
}
