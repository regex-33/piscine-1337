/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachtata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:48:24 by yachtata          #+#    #+#             */
/*   Updated: 2023/08/03 17:52:38 by yachtata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	sign = 0;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign++;
		i++;
	}
	num = 0;
	while (is_numeric(str[i]))
	{
		num = num * 10 + str[i] - 48;
		i++;
	}
	if (sign % 2 == 1)
		return (-num);
	return (num);
}

int	ft_cmp(char *s1, char *s2)
{
	int	a;
	int	b;
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		a = (unsigned char)s1[i];
		b = (unsigned char)s2[i];
		if (a != b)
			return (a - b);
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	a;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
	}
	if (nb / 10 == 0)
	{
		ft_putchar(nb + 48);
	}
	else
	{
		a = nb / 10;
		ft_putnbr(a);
		ft_putchar(nb % 10 + 48);
		nb /= 10;
	}
}
