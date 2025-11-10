/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhammou <ayhammou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 16:40:39 by ayhammou          #+#    #+#             */
/*   Updated: 2025/11/07 15:14:32 by ayhammou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*source;
	char		*dest;
	size_t		i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	dest = (char *)dst;
	source = (const char *)src;
	if (dest > source && (size_t)(dest - source) < len)
	{
		while (len-- > 0)
			dest[len] = source[len];
	}
	else
	{
		while (len > i)
		{
			dest[i] = source[i];
			i++;
		}
	}
	return (dst);
}
