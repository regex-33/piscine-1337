/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachtata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:45:20 by yachtata          #+#    #+#             */
/*   Updated: 2023/08/03 20:35:06 by yachtata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ascending(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_descending(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	ascending;

	i = 0;
	if (length <= 1)
		return (1);
	while (i < length - 1 && tab[i] == tab[i + 1])
		i++;
	if (i == length - 1)
		return (1);
	if (tab[i] > tab[i + 1])
		ascending = 0;
	else
		ascending = 1;
	if (ascending)
		return (ft_ascending(tab, length, f));
	else
		return (ft_descending(tab, length, f));
}
/*
#include <stdio.h>
int compare(int a, int b)
{
    return a - b;
}

int main() 
{
    int arr1[] = {1};
    int arr2[] = {5};
    
    int length1 = sizeof(arr1) / sizeof(arr1[0]);
    int length2 = sizeof(arr2) / sizeof(arr2[0]);

    int result1 = ft_is_sort(arr1, length1, compare);
    int result2 = ft_is_sort(arr2, length2, compare);

    if (result1)
        printf("Array 1 is sorted.\n");
    else
        printf("Array 1 is not sorted.\n");

    if (result2)
        printf("Array 2 is sorted.\n");
    else
        printf("Array 2 is not sorted.\n");

    return 0;
}
*/
