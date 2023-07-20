/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 14:04:35 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/20 11:15:02 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	j;
	i = 0;
	while (i < length - 1)
	{
		j = 0;
		while (j < length -1)
		{
			if (f(tab[i], tab[j]) >= 0)
				i++;
			else
				return (0);
		}
	}
	return (1);
}