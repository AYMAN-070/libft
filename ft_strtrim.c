/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhammou <ayhammou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 12:29:59 by ayhammou          #+#    #+#             */
/*   Updated: 2025/11/12 14:51:21 by ayhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	inset(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*newstr(char *str, const char *s1, size_t start, size_t slen)
{
	size_t	i;

	i = 0;
	while (start < slen)
	{
		str[i] = s1[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*str;
	size_t	start;
	size_t	end;
	size_t	slen;

	start = 0;
	end = 0;
	slen = 0;
	if (s1 == 0 || set == 0)
		return (NULL);
	while (s1[slen])
		slen++;
	while (s1[start] && inset(s1[start], set))
		start++;
	while (slen > start && inset(s1[slen - 1], set))
		slen--;
	end = slen - start;
	str = malloc(sizeof(char) * (end + 1));
	if (str == 0)
		return (NULL);
	return (newstr(str, s1, start, slen));
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%s", ft_strtrim("aaa+rhelloaa", "a+r"));
	return(0);
}*/