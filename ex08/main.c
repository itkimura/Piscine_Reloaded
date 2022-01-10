/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 11:01:38 by itkimura          #+#    #+#             */
/*   Updated: 2021/10/28 11:23:04 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_is_negative(int n);

int	main(void)
{
	printf("n = 0\n");
	ft_is_negative(0);
	printf("\nn = 42\n");
	ft_is_negative(42);
	printf("\nn = -1\n");
	ft_is_negative(-1);
	printf("\nn = 100\n");
	ft_is_negative(100);
	printf("\nn = -42\n");
	ft_is_negative(-42);
	printf("\nn = 5\n");
	ft_is_negative(5);
	printf("\nn = 22222\n");
	ft_is_negative(22222);
	printf("\n");
	return (0);
}
