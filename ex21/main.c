/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 10:51:28 by itkimura          #+#    #+#             */
/*   Updated: 2021/10/29 12:06:13 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	min;
	int	max;
	int	i;
	int	*dest;

	i = 0;
	min = 1;
	max = 10;
	dest = ft_range(min, max);
	while (i < max - min)
	{
		printf("%d = %d\n", i, dest[i]);
		i++;
	}
	return (0);
}
