/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 11:57:18 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/15 14:50:31 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	print_array(int **array);

int	main(void)
{
	int	i;
	int	j;
	int	*arr[4];

	i = 0;
	while (i < 4)
		arr[i++] = (int *) malloc(4 * sizeof(int));
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
			arr[i][j++] = 0;
		i++;
	}
	print_array(arr);
	i = 0;
	while (i < 4)
	{
		free(arr[i]);
		i++;
	}
	return (0);
}
