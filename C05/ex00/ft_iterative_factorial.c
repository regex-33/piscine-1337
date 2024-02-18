/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachtata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 10:08:52 by yachtata          #+#    #+#             */
/*   Updated: 2023/07/24 10:49:51 by yachtata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	temp;
	int	result;

	result = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	temp = nb;
	while (temp > 0)
	{
		result *= temp;
		temp--;
	}
	return (result);
}
