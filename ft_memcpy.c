/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhammou <ayhammou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:49:54 by ayhammou          #+#    #+#             */
/*   Updated: 2025/11/05 16:40:01 by ayhammou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *destination, const void *source, size_t size)
{
	unsigned char	*dst;
	unsigned char	*src;
	size_t			i;

	i = 0;
	dst = (unsigned char *)destination;
	src = (unsigned char *)source;
	if (!dst && !src)
		return (dst);
	while (size > 0)
	{
		dst[i] = src[i];
		i++;
		size--;
	}
	return (destination);
}
