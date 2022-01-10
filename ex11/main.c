/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 11:45:45 by itkimura          #+#    #+#             */
/*   Updated: 2021/10/28 11:48:06 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int*mod);

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 42;
	b = 5;
	div = 0;
	mod = 0;
	printf("a = %d, b = %d, div = %d, mod =%d\n", a, b, div, mod);
	ft_div_mod(a, b, &div, &mod);
	printf("a = %d, b = %d, div = %d, mod =%d\n", a, b, div, mod);
	return (0);
}
