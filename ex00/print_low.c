/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_low.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 16:48:31 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/16 16:50:07 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

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

int	print_one_low(int i, int **final)
{
	if ((final[3][i] == 0 || final[3][i] == 4))
	{
		final[3][i] = 4;
	}
	else
		return (1);
	return (0);
}

int	print_three_low(int i, int **final)
{
	if ((final[1][i] == 0 || final[1][i] == 4))
	{
		final[1][i] = 4;
	}
	else
		return (1);
	return (0);
}
