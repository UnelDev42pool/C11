/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 14:04:38 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/19 14:04:41 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int ft_count_if(char **tab, int length, int(*f)(char*))
{
	int number;
	int i;

	i = 0;
	number = 0;
	while (i < length)
	{
		if(f(tab[i]) != 0)
		number++;
	}
	return (number);
}