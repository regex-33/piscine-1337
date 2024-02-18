/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachtata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 17:37:43 by yachtata          #+#    #+#             */
/*   Updated: 2023/07/23 18:06:09 by yachtata         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_dest;
	unsigned int	len_src;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (size == 0 || len_dest >= size)
		return (len_src + size);
	i = 0;
	while (src[i] != '\0' && i + len_dest < size - 1)
	{
		dest[len_dest + i] = src[i];
		++i;
	}
	dest[len_dest + i] = '\0';
	return (len_src + len_dest);
}
