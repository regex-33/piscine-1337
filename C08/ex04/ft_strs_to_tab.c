/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachtata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 09:42:22 by yachtata          #+#    #+#             */
/*   Updated: 2023/07/30 18:11:26 by yachtata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		++i;
	}
	return (i);
}

char	*ft_strcpy(char	*dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*ptr;

	len = ft_strlen(src);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (0);
	ft_strcpy(ptr, src);
	return (ptr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*str;

	str = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (!str)
		return (0);
	i = 0;
	while (i < ac)
	{
		str[i].size = ft_strlen(av[i]);
		str[i].str = av[i];
		str[i].copy = ft_strdup(av[i]);
		i++;
	}
	str[i].str = 0;
	return (str);
}
