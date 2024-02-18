/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachtata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 21:00:15 by yachtata          #+#    #+#             */
/*   Updated: 2023/07/29 21:04:54 by yachtata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		++i;
	}
	return (i);
}

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

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	minus_count;
	int	char_value;
	int	base_len;

	result = 0;
	minus_count = 0;
	base_len = ft_strlen(base);
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
