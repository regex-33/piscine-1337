/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachtata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 10:51:10 by yachtata          #+#    #+#             */
/*   Updated: 2023/07/23 17:08:12 by yachtata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	size;
	int	i;

	if (min >= max)
		return (NULL);
	size = max - min;
	ptr = (int *) malloc(size * sizeof(int));
	if (!ptr)
		return (NULL);
	i = 0;
	while (min + i < max)
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}
/*
int main(void)
{
    int min = 5;
    int max = 0;

    int *result = ft_range(min, max);
    if (!result)
        return 1;

    int i = 0;
    while (i < max - min)
    {
        printf("%d\n", result[i]);
        i++;
    }

    free(result);

    return 0;
}*/
