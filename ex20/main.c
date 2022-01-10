/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:03:26 by itkimura          #+#    #+#             */
/*   Updated: 2021/10/28 18:33:29 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "Hive Helsinki";
	s2 = "Hello World";
	printf("strdup = %s, ft_strdup = %s\n", strdup(s1), ft_strdup(s1));
	printf("strdup = %s, ft_strdup = %s\n", strdup(s2), ft_strdup(s2));
	return (0);
}
