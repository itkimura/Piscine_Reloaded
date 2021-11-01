/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 14:16:02 by itkimura          #+#    #+#             */
/*   Updated: 2021/10/28 14:16:08 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb <= 12 && nb > 1)
		return (nb * ft_recursive_factorial(nb - 1));
	else if (nb == 0 || nb == 1)
		return (1);
	else
		return (0);
}
