/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhammou <ayhammou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 17:27:01 by ayhammou          #+#    #+#             */
/*   Updated: 2025/11/12 14:52:36 by ayhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char		*str;
	unsigned char			car;
	size_t					i;

	str = (unsigned const char *)s;
	car = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == car)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
