/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_right.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 16:49:55 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/16 16:50:01 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

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

int	print_one_right(int i, int **final)
{
	if ((final[i][4] == 0 || final[i][4] == 4))
	{
		final[i][4] = 4;
	}
	else
		return (1);
	return (0);
}

int	print_three_right(int i, int **final)
{
	if ((final[i][2] == 0 || final[i][2] == 4))
	{
		final[i][2] = 4;
	}
	else
		return (1);
	return (0);
}
