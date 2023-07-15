/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:34:41 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/15 16:11:20 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	find_error(int *l_up, int *l_down, int *c_left, int *c_right)
{
	int	i;
	
	i = 0;
	while (i < 4)
	{
		if ( l_up[i] == l_down[i] && l_up[i] != 2)
			return (1);
		if ( c_left[i] == c_right[i] && c_left[i] != 2)
			return (1);
		if (l_up[i] == 4 && l_down[i] != 1)
			return (1);
		if (l_down[i] == 4 && l_up[i] != 1)
			return (1);
		if (c_left[i] == 4 && c_right[i] != 1)
			return (1);
		if (c_right[i] == 4 && c_left[i] != 1)
			return (1);
		i++;
	}
}
