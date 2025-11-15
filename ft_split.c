/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhammou <ayhammou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:50:12 by ayhammou          #+#    #+#             */
/*   Updated: 2025/11/15 14:36:30 by ayhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	wordsnumb(const char *s, char c)
{
	int	i;
	int	x;
	int	counter;

	i = 0;
	x = 0;
	counter = 0;
	while (s[i])
	{
		if (s[i] != c && x == 0)
		{
			counter++;
			x = 1;
		}
		if (s[i] == c)
			x = 0;
		i++;
	}
	return (counter);
}

static char	*fillword(const char *s, int fword, int i)
{
	int		j;
	char	*word;

	j = 0;
	word = malloc(sizeof(char) * (i - fword + 1));
	if (word == 0)
		return (NULL);
	while ((fword + j) < i)
	{
		word[j] = s[fword + j];
		j++;
	}
	word[j] = '\0';
	return (word);
}

static void	*ft_free(char **array, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		free(array[i]);
		i++;
	}
	free (array);
	return (NULL);
}

static int	loop_split(char **array, const char *s, char c)
{
	size_t	i;
	int		j;
	int		fword;

	i = 0;
	j = 0;
	fword = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && fword == -1)
			fword = i;
		if ((s[i] == c || i == ft_strlen(s)) && fword != -1 && i - fword > 0)
		{
			array[j] = fillword(s, fword, i);
			if (!array[j])
				return (-1);
			j++;
			fword = -1;
		}
		i++;
	}
	array[j] = NULL;
	return (0);
}

char	**ft_split(const char *s, char c)
{
	char	**array;

	if (s == 0)
		return (NULL);
	array = malloc(sizeof(char *) * (wordsnumb(s, c) + 1));
	if (array == 0)
		return (NULL);
	if (loop_split(array, s, c) == -1)
		return (ft_free(array, wordsnumb(s, c)));
	return (array);
}
/*
#include <stdio.h>
int	main (void)
{
	int	i;
	char	**array;

	i = 0;
	array = ft_split ("split  ||this|for|me|||||!|", '|');
	while (array[i])
	{
		printf("%s\n", array[i]);
		i++;
	}
	return (0);
}*/