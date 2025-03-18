/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: pavidal <pavidal@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/23 22:48:26 by pavidal       #+#    #+#                 */
/*   Updated: 2024/11/17 19:23:59 by pavidal       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static size_t	count_words(const char *s, char c);
static size_t	wordlen(const char *s, char c, size_t start);
static char		*allocate_word(const char *s, char c, size_t *start);
static void		free_words(char **str, size_t word);

char	**ft_split(char const *s, char c)
{
	size_t	word;
	size_t	start;
	size_t	word_count;
	char	**str;

	word = 0;
	start = 0;
	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	str = malloc(sizeof(char *) * (word_count + 1));
	if (!str)
		return (NULL);
	while (word < word_count)
	{
		str[word] = allocate_word(s, c, &start);
		if (!str[word])
			return (free_words(str, word), NULL);
		word++;
	}
	str[word] = NULL;
	return (str);
}

static char	*allocate_word(const char *s, char c, size_t *start)
{
	size_t	len;
	char	*word;

	while (s[*start] == c && s[*start] != '\0')
		(*start)++;
	len = wordlen(s, c, *start);
	word = ft_substr(s, *start, len);
	*start += len;
	return (word);
}

static size_t	count_words(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
		{
			count++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	return (count);
}

static size_t	wordlen(const char *s, char c, size_t start)
{
	size_t	len;

	len = 0;
	while (s[start + len] != '\0' && s[start + len] != c)
		len++;
	return (len);
}

static void	free_words(char **str, size_t word)
{
	while (word > 0)
		free(str[--word]);
	free(str);
}
