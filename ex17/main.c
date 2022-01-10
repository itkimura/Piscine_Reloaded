/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 14:34:23 by itkimura          #+#    #+#             */
/*   Updated: 2021/10/28 16:56:40 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "Hello";
	s2 = "Hello";
	ft_putstr("strcmp = ");
	ft_putnbr(strcmp(s1, s2));
	ft_putstr("\nft_strcmp = ");
	ft_putnbr(ft_strcmp(s1, s2));
	s1 = "Hive";
	s2 = "Hive Helsinki";
	ft_putstr("\nstrcmp = ");
	ft_putnbr(strcmp(s1, s2));
	ft_putstr("\nft_strcmp = ");
	ft_putnbr(ft_strcmp(s1, s2));
	s1 = "422";
	s2 = "42";
	ft_putstr("\nstrcmp = ");
	ft_putnbr(strcmp(s1, s2));
	ft_putstr("\nft_strcmp = ");
	ft_putnbr(ft_strcmp(s1, s2));
	return (0);
}
