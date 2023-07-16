/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 11:57:18 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/16 16:24:20 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	print_array(int **array);
int		find_error(int *l_up, int *l_down, int *c_left, int *c_right);
int		str_to_int(char *str, int *final);
int		print_outstanding(int **final, int **give);
int		**create_viewable(int *viewable);

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

int	verify_args(int argv, char *argc[], int *numbr)
{
	if (argv != 2)
		return (1);
	if (!str_to_int(argc[1], numbr))
		return (1);
	return (0);
}

/**
 * The main function creates and prints an array, and then frees the memory
 * allocated for each element of the array.
 * 
 * @return The main function is returning an integer value of 0.
 */
int	main(int argv, char *argc[])
{
	int	**viewable;
	int	**final;
	int	*numbr;
	int	i;

	i = 0;
	numbr = malloc(16 * sizeof(int));
	if (verify_args(argv, argc, numbr))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	viewable = create_viewable(numbr);
	if (find_error(viewable[0], viewable[1], viewable[2], viewable[3]))
	{
		write(1, "Err\n", 6);
		return (1);
	}
	final = create_array();
	if (print_outstanding(final, viewable))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	print_array(final);
}
