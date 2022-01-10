/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:51:10 by itkimura          #+#    #+#             */
/*   Updated: 2021/10/29 13:11:59 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	printf("1's squrt is %d\n", ft_sqrt(1));
	printf("-2's squrt is %d\n", ft_sqrt(-2));
	printf("3's squrt is %d\n", ft_sqrt(3));
	printf("4's squrt is %d\n", ft_sqrt(4));
	printf("5's squrt is %d\n", ft_sqrt(5));
	printf("25's squrt is %d\n", ft_sqrt(25));
	return (0);
}
