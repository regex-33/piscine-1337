/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachtata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:19:20 by yachtata          #+#    #+#             */
/*   Updated: 2023/07/24 10:35:32 by yachtata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] >= 127)
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		boool;
	char	converted[32];
	int		index;
	int		len_base;
	long	num;

	boool = check_base(base);
	if (!boool)
		return ;
	len_base = ft_strlen(base);
	num = nbr;
	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
	}
	index = 0;
	while (num >= len_base)
	{
		converted[index++] = base[num % len_base];
		num /= len_base;
	}
	converted[index] = base[num];
	while (index >= 0)
		write(1, &converted[index--], 1);
}
