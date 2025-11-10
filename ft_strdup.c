/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhammou <ayhammou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 10:00:46 by ayhammou          #+#    #+#             */
/*   Updated: 2025/11/10 10:16:12 by ayhammou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*dup;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s1 == 0)
		return (NULL);
	while (s1[i])
		i++;
	dup = malloc(sizeof (char) * (i + 1));
	if (dup == 0)
		return (NULL);
	while (s1[j])
	{
		dup[j] = s1[j];
		j++;
	}
	dup[j] = '\0';
	return (dup);
}
/*
#include <stdio.h>
int main (void)
{
char *str = "\0";
char *new = ft_strdup(str);
printf("%s", new);
}*/