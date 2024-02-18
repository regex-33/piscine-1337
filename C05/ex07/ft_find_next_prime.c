/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachtata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 16:32:10 by yachtata          #+#    #+#             */
/*   Updated: 2023/07/26 10:15:15 by yachtata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 2 || nb == 3)
		return (1);
	if (nb < 0 || nb == 1)
		return (0);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 5;
	while (i <= nb / i)
	{
		if (nb % i == 0 || nb % (i + 2) == 0)
			return (0);
		i += 6;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (nb % 2 == 0)
		nb++;
	while (!(ft_is_prime(nb) == 1))
		nb += 2;
	return (nb);
}
