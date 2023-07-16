/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hight.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 16:48:06 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/16 16:50:04 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

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

int	print_one_hight(int i, int **final)
{
	if ((final[0][i] == 0 || final[0][i] == 4))
	{
		final[0][i] = 4;
	}
	else
		return (1);
	return (0);
}

int	print_three_hight(int i, int **final)
{
	if ((final[2][i] == 0 || final[2][i] == 4))
	{
		final[2][i] = 4;
	}
	else
		return (1);
	return (0);
}
