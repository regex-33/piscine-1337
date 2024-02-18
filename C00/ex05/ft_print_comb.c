/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachtata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:23:38 by yachtata          #+#    #+#             */
/*   Updated: 2023/07/13 18:51:07 by yachtata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_result(a, b, c, boool)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (boool)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	y;
	int	boool;

	i = '0';
	while (i <= '9')
	{
		j = i + 1;
		while (j <= '9')
		{
			y = j + 1;
			while (y <= '9')
			{
				boool = !(i == '7');
				print_result(i, j, y, boool);
				++y;
			}
			++j;
		}
		++i;
	}
}
