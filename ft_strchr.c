/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhammou <ayhammou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:41:50 by ayhammou          #+#    #+#             */
/*   Updated: 2025/11/12 15:15:06 by ayhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			car;

	i = 0;
	car = (char) c;
	while (s[i])
	{
		if (s[i] == car)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == car)
		return ((char *) &s[i]);
	return (NULL);
}
