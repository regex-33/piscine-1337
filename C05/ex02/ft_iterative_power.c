/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachtata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 11:46:04 by yachtata          #+#    #+#             */
/*   Updated: 2023/07/22 11:49:29 by yachtata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	temp;

	temp = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		temp = temp * nb;
		power--;
	}
	return (temp);
}
