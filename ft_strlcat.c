/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhammou <ayhammou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 12:24:16 by ayhammou          #+#    #+#             */
/*   Updated: 2025/11/12 15:44:24 by ayhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	srclen = 0;
	dstlen = 0;
	i = 0;
	while (src[srclen])
		srclen++;
	while (dst[dstlen] && dstlen < size)
		dstlen++;
	if (size <= dstlen)
		return (srclen + size);
	while (src[i] && (dstlen + 1 + i) < size)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst [dstlen + i] = '\0';
	return (dstlen + srclen);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char dst[20] = "Ayman";
	const char *src = " hm";
	size_t s = 14 ;
	printf("%zu", ft_strlcat(dst, src, s));
}*/
