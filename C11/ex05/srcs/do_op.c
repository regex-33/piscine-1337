/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachtata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:47:45 by yachtata          #+#    #+#             */
/*   Updated: 2023/08/03 18:00:02 by yachtata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	fun(int (*func_tab[])(int, int))
{
	func_tab[0] = add;
	func_tab[1] = sub;
	func_tab[2] = div;
	func_tab[3] = mul;
	func_tab[4] = mod;
}

int	func_index(char *op)
{
	if (!ft_cmp(op, "+"))
		return (0);
	else if (!ft_cmp(op, "-"))
		return (1);
	else if (!ft_cmp(op, "/"))
		return (2);
	else if (!ft_cmp(op, "*"))
		return (3);
	else if (!ft_cmp(op, "%"))
		return (4);
	return (-1);
}

int	main(int argc, char *argv[])
{
	int	(*func_tab[5])(int, int);

	fun(func_tab);
	if (argc != 4)
		return (0);
	if (!ft_cmp(argv[2], "+") || !ft_cmp(argv[2], "-") || !ft_cmp(argv[2], "/")
		|| !ft_cmp(argv[2], "*") || !ft_cmp(argv[2], "%"))
	{
		if (argv[2][0] == '/' && ft_atoi(argv[3]) == 0)
		{
			write(1, "Stop : division by zero\n", 24);
			return (0);
		}
		else if (argv[2][0] == '%' && ft_atoi(argv[3]) == 0)
		{
			write(1, "Stop : modulo by zero\n", 22);
			return (0);
		}
		ft_putnbr(func_tab[func_index(argv[2])](ft_atoi(argv[1]),
				ft_atoi(argv[3])));
		write(1, "\n", 1);
	}
	else
		write(1, "0\n", 2);
	return (0);
}
