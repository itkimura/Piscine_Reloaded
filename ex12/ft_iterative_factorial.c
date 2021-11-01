/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 11:48:46 by itkimura          #+#    #+#             */
/*   Updated: 2021/10/28 13:00:35 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb <= 12 && nb > 1)
	{
		result = 1;
		while (nb > 0)
			result *= nb--;
		return (result);
	}
	else if (nb == 0 || nb == 1)
		return (1);
	else
		return (0);
}
