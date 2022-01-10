/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 11:09:45 by itkimura          #+#    #+#             */
/*   Updated: 2021/10/28 11:20:13 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	nbr;

	nbr = 100;
	printf("nbr = %d\n", nbr);
	ft_ft(&nbr);
	printf("nbr = %d\n", nbr);
	return (0);
}
