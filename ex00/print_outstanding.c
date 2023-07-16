/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_outstanding.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 10:30:28 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/16 14:26:40 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// /!\/!\|
void	print_array(int **array);
// /!\/!\|

int	print_four_hight(int i, int **final)
{
	if ((final[0][i] == 0 || final[0][i] == 1)
		&& (final[1][i] == 0 || final[1][i] == 2)
		&& (final[2][i] == 0 || final[2][i] == 3)
		&& (final[3][i] == 0 || final[3][i] == 4))
	{
		final[0][i] = 1;
		final[1][i] = 2;
		final[2][i] = 3;
		final[3][i] = 4;
	}
	else
		return (1);
	return (0);
}

int print_one_hight(int i, int **final)
{
	if ((final[0][i] == 0 || final[0][i] == 4))
	{
		final[0][i] = 4;
	}
	else
		return (1);
	return (0);
}

int print_three_hight(int i, int **final)
{
	if ((final[2][i] == 0 || final[2][i] == 4))
	{
		final[2][i] = 4;
	}
	else
		return (1);
	return (0);
}

///////////////////////////////////////////////////////////

int	print_four_low(int i, int **final)
{
	if ((final[3][i] == 0 || final[3][i] == 1)
		&& (final[2][i] == 0 || final[2][i] == 2)
		&& (final[1][i] == 0 || final[1][i] == 3)
		&& (final[0][i] == 0 || final[0][i] == 4))
	{
		final[3][i] = 1;
		final[2][i] = 2;
		final[1][i] = 3;
		final[0][i] = 4;
	}
	else
		return (1);
	return (0);
}

int print_one_low(int i, int **final)
{
	if ((final[3][i] == 0 || final[3][i] == 4))
	{
		final[3][i] = 4;
	}
	else
		return (1);
	return (0);
}

int print_three_low(int i, int **final)
{
	if ((final[1][i] == 0 || final[1][i] == 4))
	{
		final[1][i] = 4;
	}
	else
		return (1);
	return (0);
}

///////////////////////////////////////////////////////////

int	print_four_right(int i, int **final)
{
	if ((final[i][0] == 0 || final[i][0] == 1)
		&& (final[i][1] == 0 || final[i][1] == 2)
		&& (final[i][2] == 0 || final[i][2] == 3)
		&& (final[i][3] == 0 || final[i][3] == 4))
	{
		final[i][0] = 1;
		final[i][1] = 2;
		final[i][2] = 3;
		final[i][3] = 4;
	}
	else
		return (1);
	return (0);
}

int print_one_right(int i, int **final)
{
	if ((final[i][4] == 0 || final[i][4] == 4))
	{
		final[i][4] = 4;
	}
	else
		return (1);
	return (0);
}

int print_three_right(int i, int **final)
{
	if ((final[i][2] == 0 || final[i][2] == 4))
	{
		final[i][2] = 4;
	}
	else
		return (1);
	return (0);
}

///////////////////////////////////////////////////////////

int	print_four_left(int i, int **final)
{
	if ((final[i][0] == 0 || final[i][0] == 1)
		&& (final[i][1] == 0 || final[i][1] == 2)
		&& (final[i][2] == 0 || final[i][2] == 3)
		&& (final[i][3] == 0 || final[i][3] == 4))
	{
		final[i][0] = 1;
		final[i][1] = 2;
		final[i][2] = 3;
		final[i][3] = 4;
	}
	else
		return (1);
	return (0);
}

int print_one_left(int i, int **final)
{
	if ((final[i][4] == 0 || final[i][4] == 4))
	{
		final[i][4] = 4;
	}
	else
		return (1);
	return (0);
}

int print_three_left(int i, int **final)
{
	if ((final[i][2] == 0 || final[i][2] == 4))
	{
		final[i][2] = 4;
	}
	else
		return (1);
	return (0);
}
///////////////////////////////////////////////////////////


int	print_outstanding(int **final, int **give)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (give[0][i] == 4)
			if(print_four_hight(i, final))
				return (1);
		if (give[0][i] == 3)
			if(print_three_hight(i, final))
				return (1);
		if (give[0][i] == 1)
			if(print_one_hight(i, final))
				return (1);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (give[1][i] == 4)
			if(print_four_right(i, final))
				return (1);
		if (give[1][i] == 3)
			if(print_three_right(i, final))
				return (1);
		if (give[1][i] == 1)
			if(print_one_right(i, final))
				return (1);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (give[2][i] == 4)
			if(print_four_left(i, final))
				return (1);
		if (give[2][i] == 3)
			if(print_three_left(i, final))
				return (1);
		if (give[2][i] == 1)
			if(print_one_left(i, final))
				return (1);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (give[3][i] == 4)
			if(print_four_low(i, final))
				return (1);
		if (give[3][i] == 3)
			if(print_three_low(i, final))
				return (1);
		if (give[3][i] == 1)
			if(print_one_low(i, final))
				return (1);
		i++;
	}
	return (0);
}
