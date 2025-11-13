/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhammou <ayhammou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 10:00:46 by ayhammou          #+#    #+#             */
/*   Updated: 2025/11/13 16:14:29 by ayhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i])
		i++;
	dup = malloc(sizeof (char) * (i + 1));
	if (dup == 0)
		return (NULL);
	while (s[j])
	{
		dup[j] = s[j];
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