/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhammou <ayhammou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:41:50 by ayhammou          #+#    #+#             */
/*   Updated: 2025/11/07 16:14:03 by ayhammou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

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
