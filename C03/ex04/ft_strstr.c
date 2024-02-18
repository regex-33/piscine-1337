/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachtata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 14:42:35 by yachtata          #+#    #+#             */
/*   Updated: 2023/07/23 09:49:37 by yachtata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *dest)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	return (i);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i == n)
		i--;
	return (s1[i] - s2[i]);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = ft_strlen(to_find);
	if (len == 0)
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			j = ft_strncmp(str + i, to_find, len);
			if (j == 0)
				return (str + i);
		}
		i++;
	}
	return (0);
}
