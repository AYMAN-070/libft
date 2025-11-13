/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhammou <ayhammou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:49:54 by ayhammou          #+#    #+#             */
/*   Updated: 2025/11/12 15:20:53 by ayhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	unsigned char	*dst;
	unsigned char	*src1;
	size_t			i;

	i = 0;
	dst = (unsigned char *)dest;
	src1 = (unsigned char *)src;
	if (!dst && !src1)
		return (dst);
	while (size > 0)
	{
		dst[i] = src1[i];
		i++;
		size--;
	}
	return (dest);
}
