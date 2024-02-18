/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachtata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:46:47 by yachtata          #+#    #+#             */
/*   Updated: 2023/08/03 17:52:59 by yachtata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>

int		is_numeric(char c);
int		ft_atoi(char *str);
int		ft_cmp(char *s1, char *s2);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		add(int a, int b);
int		sub(int a, int b);
int		div(int a, int b);
int		mul(int a, int b);
int		mod(int a, int b);
#endif
