/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhammou <ayhammou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 12:24:16 by ayhammou          #+#    #+#             */
/*   Updated: 2025/11/15 14:19:47 by ayhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	verif_src(char *dst, size_t size)
{
	size_t	dstlen;

	if (!dst || size == 0)
		return (0);
	dstlen = 0;
	while (dst[dstlen] && dstlen < size)
		dstlen++;
	return (dstlen);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	i = 0;
	if (src == 0)
	{
		return (verif_src(dst, size));
	}
	srclen = ft_strlen(src);
	if (dst == 0 || size == 0)
		return (srclen);
	dstlen = verif_src(dst, size);
	if (size <= dstlen)
		return (size + srclen);
	while (src[i] && (dstlen + 1 + i) < size)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char dst[20] = "Ayman";
	const char *src = " hm";
	printf("%zu", ft_strlcat(dst, src, 2));
}*/
