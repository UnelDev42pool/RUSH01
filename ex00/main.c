/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 11:57:18 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/15 18:55:22 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	print_array(int **array);
int		find_error(int *l_up, int *l_down, int *c_left, int *c_right);
int		str_to_int(char *str, int *final);

/**
 * The function creates a 2D array of size 4x4 and initializes all elements to 0.
 * 
 * @return The function create_array is returning a pointer to a 2D array of
 * integers.
 */
int	**create_array(void)
{
	int	i;
	int	j;
	int	**arr;

	arr = (int **) malloc(4 * (4 * sizeof(int)));
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
	return (arr);
}

/**
 * The main function creates and prints an array, and then frees the memory
 * allocated for each element of the array.
 * 
 * @return The main function is returning an integer value of 0.
 */
int	main(int argv, char *argc[])
{
	argv = 0;
	int *numbr;
	int i;

	i = 0;
	numbr = malloc(16 * sizeof(int));
	if(!str_to_int(argc[1], numbr))
	{
		printf("bwbfdksjbhfksidukbj");
		return (1);
	}
	while (i < 16)
	{
		printf("%d", numbr[i]);
		i++;
	}

	// int	**arr;

	// i = 0;
	// arr = create_array();
	// print_array(arr);
	// while (i < 4)
	// {
	// 	free(arr[i]);
	// 	i++;
	// }
	// return (0);
}
