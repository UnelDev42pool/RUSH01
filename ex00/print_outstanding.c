/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_outstanding.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 10:30:28 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/16 16:53:06 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	print_four_low(int i, int **final);
int	print_one_low(int i, int **final);
int	print_three_low(int i, int **final);
int	print_four_hight(int i, int **final);
int	print_one_hight(int i, int **final);
int	print_three_hight(int i, int **final);
int	print_four_left(int i, int **final);
int	print_one_left(int i, int **final);
int	print_three_left(int i, int **final);
int	print_four_right(int i, int **final);
int	print_one_right(int i, int **final);
int	print_three_right(int i, int **final);

int	print_outstanding_hight(int **final, int **give)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (give[0][i] == 4)
			if (print_four_hight(i, final))
				return (1);
		if (give[0][i] == 3)
			if (print_three_hight(i, final))
				return (1);
		if (give[0][i] == 1)
			if (print_one_hight(i, final))
				return (1);
		i++;
	}
	return (0);
}

int	print_outstanding_right(int **final, int **give)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (give[1][i] == 4)
			if (print_four_right(i, final))
				return (1);
		if (give[1][i] == 3)
			if (print_three_right(i, final))
				return (1);
		if (give[1][i] == 1)
			if (print_one_right(i, final))
				return (1);
		i++;
	}
	return (0);
}

int	print_outstanding_left(int **final, int **give)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (give[2][i] == 4)
			if (print_four_left(i, final))
				return (1);
		if (give[2][i] == 3)
			if (print_three_left(i, final))
				return (1);
		if (give[2][i] == 1)
			if (print_one_left(i, final))
				return (1);
		i++;
	}
	return (0);
}

int	print_outstanding_low(int **final, int **give)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (give[3][i] == 4)
			if (print_four_low(i, final))
				return (1);
		if (give[3][i] == 3)
			if (print_three_low(i, final))
				return (1);
		if (give[3][i] == 1)
			if (print_one_low(i, final))
				return (1);
		i++;
	}
	return (0);
}

int	print_outstanding(int **final, int **give)
{
	if (print_outstanding_hight(final, give)
		|| print_outstanding_left(final, give)
		|| print_outstanding_low(final, give)
		|| print_outstanding_right(final, give))
		return (1);
	return (0);
}
