/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachtata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 16:32:27 by yachtata          #+#    #+#             */
/*   Updated: 2023/07/22 09:49:20 by yachtata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_srtlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		++i;
	}
}

void	convert_to_hex(int n)
{
	char	*hex;
	char	c;

	hex = "0123456789abcdef";
	write (1, "\\", 1);
	c = hex[n / 16];
	write(1, &c, 1);
	c = hex[n % 16];
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	psv_str;
	int				i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			psv_str = str[i];
			convert_to_hex(psv_str);
		}
		else
			write(1, &str[i], 1);
		++i;
	}
}
