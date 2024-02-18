/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.C                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachtata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 18:49:46 by yachtata          #+#    #+#             */
/*   Updated: 2023/07/31 21:00:02 by yachtata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

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

int	num_to_base(long number, char *base, char *converted, int len_base)
{
	int	index;

	index = 0;
	while (number >= len_base)
	{
		converted[index++] = base[number % len_base];
		number /= len_base;
	}
	converted[index] = base[number];
	return (index);
}

char	*convert_to_base(int nbr, char *base, int len_base, int is_negative)
{
	char	converted[33];
	int		index;
	long	number;
	char	*result;
	int		i;

	number = nbr;
	if (is_negative)
		number = -number;
	index = num_to_base(number, base, converted, len_base);
	result = (char *)malloc((index + is_negative + 1) * sizeof(char));
	if (!result)
		return (0);
	i = 0;
	if (is_negative)
		result[i++] = '-';
	while (index >= 0)
		result[i++] = converted[index--];
	result[i] = '\0';
	return (result);
}

char	*ft_putnbr_base(int nbr, char *base, int is_negative)
{
	int		bool_check;
	int		len_base;
	char	*result;

	bool_check = check_base(base);
	if (!bool_check)
		return (0);
	len_base = ft_strlen(base);
	result = convert_to_base(nbr, base, len_base, is_negative);
	return (result);
}
