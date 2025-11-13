/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhammou <ayhammou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:29:54 by ayhammou          #+#    #+#             */
/*   Updated: 2025/11/11 11:49:56 by ayhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*fill(char *join, char *str1, char *str2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str1[i])
	{
		join[i] = str1[i];
		i++;
	}
	while (str2[j])
	{
		join[i] = str2[j];
		j++;
		i++;
	}
	join[i] = '\0';
	return (join);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str1;
	char	*str2;
	char	*join;
	int		len1;
	int		len2;

	if (s1 == 0 || s2 == 0)
		return (NULL);
	str1 = (char *)s1;
	str2 = (char *)s2;
	len1 = 0;
	len2 = 0;
	while (str1[len1])
		len1++;
	while (str2[len2])
		len2++;
	join = malloc(sizeof(char) * (len1 + len2 + 1));
	if (join == 0)
		return (NULL);
	return (fill(join, str1, str2));
}
/*
#include <stdio.h>
int main(void)
{
    printf("%s", ft_strjoin("ayman"," hm" ));
    return (0);
}*/