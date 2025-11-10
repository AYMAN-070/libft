/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhammou <ayhammou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 12:24:16 by ayhammou          #+#    #+#             */
/*   Updated: 2025/11/07 14:45:44 by ayhammou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	srclen = 0;
	dstlen = 0;
	i = 0;
	while (src[srclen])
		srclen++;
	while (dst[dstlen] && dstlen < dstsize)
		dstlen++;
	if (dstsize <= dstlen)
		return (srclen + dstsize);
	while (src[i] && (dstlen + 1 + i) < dstsize)
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
