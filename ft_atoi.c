/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhammou <ayhammou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 13:32:04 by ayhammou          #+#    #+#             */
/*   Updated: 2025/11/14 16:31:35 by ayhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	declar_var(int *i, long *res, int *signe)
{
	*i = 0;
	*res = 0;
	*signe = 1;
}

int	ft_atoi(const char *nptr)
{
	int		i;
	long	res;
	int		signe;

	declar_var(&i, &res, &signe);
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			signe = -1;
		i++;
		if (nptr[i] == '+' || nptr[i] == '-')
			return (0);
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		if ((res * 10 + nptr[i] - '0') / 10 != res)
			return (LONG_MAX * (signe > 0) + LONG_MIN * (signe < 0));
		res = (res * 10) + (nptr[i] - '0');
		i++;
	}
	return (res * signe);
}
/*
int	main(void)
{
	printf("%d", ft_atoi("  -147"));
	return (0);
}*/