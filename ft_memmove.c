/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhammou <ayhammou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 16:40:39 by ayhammou          #+#    #+#             */
/*   Updated: 2025/11/12 15:23:39 by ayhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*source;
	char		*dest1;
	size_t		i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	dest1 = (char *)dest;
	source = (const char *)src;
	if (dest1 > source && (size_t)(dest1 - source) < n)
	{
		while (n-- > 0)
			dest1[n] = source[n];
	}
	else
	{
		while (n > i)
		{
			dest1[i] = source[i];
			i++;
		}
	}
	return (dest);
}
