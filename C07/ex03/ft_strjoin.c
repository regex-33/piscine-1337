/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachtata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 14:59:22 by yachtata          #+#    #+#             */
/*   Updated: 2023/07/24 16:29:54 by yachtata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		++i;
	return (i);
}

void	concatenatestrings(char **strs, char *sep, char *res, int size)
{
	int	i;
	int	j;
	int	y;

	i = 0;
	j = 0;
	while (i < size)
	{
		y = 0;
		while (strs[i][y] != '\0')
			res[j++] = strs[i][y++];
		y = 0;
		if (i < size - 1)
		{
			while (sep[y] != '\0')
				res[j++] = sep[y++];
		}
		i++;
	}
	res[j] = '\0';
}

int	total_length(int size, char **strs, char *sep)
{
	int	total_len;
	int	i;

	i = 0;
	total_len = 0;
	while (i < size)
		total_len += ft_strlen(strs[i++]);
	total_len += ft_strlen(sep) * (size - 1);
	return (total_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		total_len;

	if (size == 0)
	{
		res = (char *)malloc(sizeof(char));
		res[0] = '\0';
		return (res);
	}
	total_len = total_length(size, strs, sep);
	res = (char *)malloc((total_len + 1) * sizeof(char));
	if (!res)
		return (0);
	concatenatestrings(strs, sep, res, size);
	return (res);
}
/*
int main() {
    char *strs[] = { "", "Hello", "", "world" };
    char *sep = "~";

    printf("Testing ft_strjoin:\n");

    int size1 = 4;
    char *result1 = ft_strjoin(size1, strs, sep);
    printf("Result 1: %s\n", result1);
    free(result1);

    return 0;
}*/
