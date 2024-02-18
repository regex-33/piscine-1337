/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenmakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 20:29:20 by rbenmakh          #+#    #+#             */
/*   Updated: 2023/07/16 20:39:59 by rbenmakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int len, char begin_char, char mid_char, char end_char)
{
	int	lt_count;

	lt_count = 1;
	while (lt_count <= len)
	{
		if (lt_count == 1)
			ft_putchar(begin_char);
		else if (lt_count == len)
			ft_putchar(end_char);
		else
			ft_putchar(mid_char);
		lt_count++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	line_numbers;

	line_numbers = 1;
	if (x >= 1 && y >= 1)
	{
		while (line_numbers <= y)
		{
			if (line_numbers == 1)
				ft_print(x, 'A', 'B', 'C');
			else if (line_numbers == y)
				ft_print(x, 'A', 'B', 'C');
			else
				ft_print(x, 'B', ' ', 'B');
			line_numbers++;
		}
	}
}
