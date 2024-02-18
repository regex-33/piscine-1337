/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachtata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 10:01:01 by yachtata          #+#    #+#             */
/*   Updated: 2023/07/22 09:36:18 by yachtata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strlowcase(char *str)
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

char	*ft_strcapitalize(char *str)
{
	int	flag;
	int	i;

	ft_strlowcase(str);
	flag = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (flag)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
				flag = 0;
			}
			if (str[i] >= '0' && str[i] <= '9')
				flag = 0;
		}
		else if (!(str[i] >= 'a' && str[i] <= 'z')
			&& !(str[i] >= '0' && str[i] <= '9'))
			flag = 1;
		++i;
	}
	return (str);
}
