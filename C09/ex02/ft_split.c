/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachtata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 18:24:20 by yachtata          #+#    #+#             */
/*   Updated: 2023/07/29 20:47:09 by yachtata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_sprator(char c, char *charset)
{
	int	i;

	i = 0;
	if (c == 0)
		return (1);
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	number_strings(char *str, char *charset)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && check_sprator(str[i], charset))
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && !check_sprator(str[i], charset))
			i++;
	}
	return (count);
}

int	ft_sep_len(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && !check_sprator(str[i], charset))
		i++;
	return (i);
}

char	*ft_word(char *str, char *charset)
{
	int		i;
	char	*save;
	int		len;

	len = ft_sep_len(str, charset);
	save = (char *) malloc (sizeof(char) * (len + 1));
	i = 0;
	while (i < len)
	{
		save[i] = str[i];
		i++;
	}
	save[i] = '\0';
	return (save);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**temp;

	i = 0;
	temp = (char **)malloc((number_strings(str, charset) + 1) * sizeof(char *));
	if (!temp)
		return (0);
	while (*str != '\0')
	{
		while (*str != '\0' && check_sprator(*str, charset))
			str++;
		if (*str != '\0')
		{
			temp[i] = ft_word(str, charset);
			i++;
		}
		while (*str != '\0' && !check_sprator(*str, charset))
			str++;
	}
	temp[i] = 0;
	return (temp);
}
/*
int	main(int argc, char **argv)
{
	int		index;
	char	**split;
	(void)	argc;
	split = ft_split(argv[1], argv[2]);
	index = 0;
	while (split[index])
	{
		printf("%s\n", split[index]);
		index++;
	}
}*/
