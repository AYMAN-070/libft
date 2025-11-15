/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhammou <ayhammou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 10:18:51 by ayhammou          #+#    #+#             */
/*   Updated: 2025/11/14 16:34:18 by ayhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	*copy_str(char const *s, unsigned int start, size_t alloc)
{
	size_t	i;
	char	*str;

	i = 0;
	str = malloc(sizeof(char) * (alloc + 1));
	if (str == 0)
		return (NULL);
	while (s[start] && i < alloc)
	{
		str[i] = s[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	slen;
	size_t	alloc;

	slen = 0;
	alloc = len;
	str = NULL;
	if (s == 0)
		return (NULL);
	while (s[slen])
		slen++;
	if (start >= slen)
	{
		str = malloc(1);
		if (str == 0)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	if ((slen - start) < len)
		alloc = (slen - start);
	str = copy_str(s, start, alloc);
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char const *s = "ayman";
	printf("%s", ft_substr(s, 3, 2));
}*/