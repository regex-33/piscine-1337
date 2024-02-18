/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.C                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachtata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 18:49:26 by yachtata          #+#    #+#             */
/*   Updated: 2023/07/31 20:59:55 by yachtata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		check_base(char *base);
char	*ft_putnbr_base(int nbr, char *base, int is_negative);
int		ft_strlen(char *str);

char	*ft_skip_to_n(char *str, int *minus_count)
{
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			(*minus_count)++;
		str++;
	}
	return (str);
}

int	get_char_index(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base, int base_len)
{
	int	result;
	int	minus_count;
	int	char_value;

	result = 0;
	minus_count = 0;
	str = ft_skip_to_n(str, &minus_count);
	while (*str != '\0')
	{
		char_value = get_char_index(base, *str);
		if (char_value != -1)
			result = (result * base_len) + char_value;
		else
			break ;
		str++;
	}
	if (minus_count % 2 == 1)
		return (result * -1);
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		decimal_number;
	char	*result;
	int		bool_check;

	bool_check = check_base(base_from);
	if (!bool_check)
		return (0);
	decimal_number = ft_atoi_base(nbr, base_from, ft_strlen(base_from));
	if (decimal_number < 0)
		result = ft_putnbr_base(decimal_number, base_to, 1);
	else
		result = ft_putnbr_base(decimal_number, base_to, 0);
	return (result);
}
/*
int	main(int argc, char **argv)
{
	char	*result;

	if (argc == 4)
	{
		result = ft_convert_base(argv[1], argv[2], argv[3]);
		printf("%s", result);
	}
}*/
