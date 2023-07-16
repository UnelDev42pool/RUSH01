/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_array.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 11:57:14 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/16 16:24:37 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_array(int *array[])
{
	int	i;
	int	j;
	int	cp;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			cp = array[i][j] +48;
			write(1, &cp, 1);
			if (j != 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
