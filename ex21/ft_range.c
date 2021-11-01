/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:34:47 by itkimura          #+#    #+#             */
/*   Updated: 2021/10/29 13:07:27 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*dest;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	dest = (int *)malloc(sizeof(int) * (max - min));
	if (!dest)
		return (0);
	while (min < max)
		dest[i++] = min++;
	return (dest);
}
