/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachtata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 10:50:09 by yachtata          #+#    #+#             */
/*   Updated: 2023/07/24 10:34:35 by yachtata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	ps_ng;
	int	result;

	ps_ng = 1;
	result = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			ps_ng *= -1;
		str++;
	}
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			result = result * 10 + (*str - 48);
		else
			return (result * ps_ng);
		str++;
	}
	return (result * ps_ng);
}
