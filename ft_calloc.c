/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhammou <ayhammou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 09:29:53 by ayhammou          #+#    #+#             */
/*   Updated: 2025/11/13 16:09:19 by ayhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char		*tmp;
	size_t				total;
	size_t				i;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (malloc(1));
	if (size != 0 && nmemb == 0  && size > SIZE_MAX / nmemb)
		return (NULL);
	total = nmemb * size;
	tmp = malloc(total);
	if (tmp == 0)
		return (NULL);
	while (i < total)
	{
		tmp[i] = 0;
		i++;
	}
	return (tmp);
}
