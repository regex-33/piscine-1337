/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachtata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:50:24 by yachtata          #+#    #+#             */
/*   Updated: 2023/08/03 20:10:18 by yachtata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	a;
	int	b;
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		a = (unsigned char)s1[i];
		b = (unsigned char)s2[i];
		if (a != b)
			return (a - b);
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	int		k;
	char	*temp;

	i = 0;
	j = 0;
	while (tab[i] != 0)
		i++;
	while (j < i - 1)
	{
		k = j + 1;
		while (k < i)
		{
			if (ft_strcmp(tab[j], tab[k]) > 0)
			{
				temp = tab[j];
				tab[j] = tab[k];
				tab[k] = temp;
			}
			k++;
		}
		j++;
	}
}
