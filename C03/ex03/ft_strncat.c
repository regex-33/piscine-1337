/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachtata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 20:31:20 by yachtata          #+#    #+#             */
/*   Updated: 2023/07/23 09:26:09 by yachtata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *dest)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				len;
	unsigned int	i;

	len = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[len + i] = src[i];
		++i;
	}
	dest[len + i] = '\0';
	return (dest);
}
