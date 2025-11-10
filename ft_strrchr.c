/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhammou <ayhammou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:54:55 by ayhammou          #+#    #+#             */
/*   Updated: 2025/11/07 16:17:30 by ayhammou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*str;
	char			car;

	i = 0;
	str = NULL;
	car = (char) c;
	while (s[i])
	{
		if (s[i] == car)
			str = (char *)&s[i];
		i++;
	}
	if (car == '\0')
		return ((char *) &s[i]);
	return (str);
}
