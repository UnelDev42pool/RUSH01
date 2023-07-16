/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_viewable.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 09:20:22 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/16 10:04:21 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/**
 * this function takes an array of integers and creates a 2D array
 * with 4 rows and 4 columns, populating it with the values from the input array.
 * 
 * @param viewable An array of integers representing the viewable elements.
 * 
 * @return a 2D array of integers.
 */
int	**create_viewable(int *viewable)
{
	int	**final;
	int	i;
	int	j;
	int	viewable_i;

	i = 0;
	viewable_i = 0;
	final = (int **) malloc(16 * sizeof(int));
	while (i < 4)
	{
		j = 0;
		final[i] = (int *) malloc(4 * sizeof(int));
		while (j < 4)
		{
			final[i][j] = viewable[viewable_i];
			viewable_i++;
			j++;
		}
		i++;
	}
	return (final);
}
