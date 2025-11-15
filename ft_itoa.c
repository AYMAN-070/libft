/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhammou <ayhammou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 15:54:25 by ayhammou          #+#    #+#             */
/*   Updated: 2025/11/14 16:32:09 by ayhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	var_dec(long *nbr, long *tmp, int *alloc, int n)
{
	*nbr = n;
	*tmp = n;
	*alloc = 0;
}

static int	verification(long tmp, int alloc)
{
	if (tmp == 0)
	{
		alloc = 1;
	}
	if (tmp < 0)
	{
		tmp = -tmp;
		alloc++;
	}
	while (tmp > 0)
	{
		alloc++;
		tmp = tmp / 10;
	}
	return (alloc);
}

char	*ft_itoa(int n)
{
	int		alloc;
	long	nbr;
	long	tmp;
	char	*str;

	var_dec(&nbr, &tmp, &alloc, n);
	alloc = verification(tmp, alloc);
	str = malloc(sizeof(char) * (alloc + 1));
	if (str == 0)
		return (NULL);
	str[alloc] = '\0';
	if (n == 0)
		str[0] = '0';
	if (nbr < 0)
		nbr = -nbr;
	while (nbr > 0)
	{
		str[alloc - 1] = ((nbr % 10) + '0');
		nbr = nbr / 10;
		alloc--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
/*
int	main(void)
{
	printf("%s", ft_itoa(-174));
	return (0);
}*/