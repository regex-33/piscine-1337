/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachtata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 21:18:13 by yachtata          #+#    #+#             */
/*   Updated: 2023/07/23 21:20:41 by yachtata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = (int *) malloc(size * sizeof(int));
	if (!range)
		return (-1);
	i = 0;
	while (min + i < max)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}
/*
int main(void)
{
    int *result;
    int min = 5;
    int max = 15;

    int size = ft_ultimate_range(&result, min, max);
    if (size == -1)
    {
        printf("Memory allocation error\n");
        return 1;
    }
    else if (size == 0)
    {
        printf("Invalid range: min is greater than or equal to max\n");
        return 1;
    }

    printf("Resulting array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", result[i]);
    }
    printf("\n");

    free(result); 
    return 0;
}*/
