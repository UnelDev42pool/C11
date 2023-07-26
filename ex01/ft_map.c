/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 17:37:15 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/26 12:55:36 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*out;

	out = malloc(sizeof (int) * length);
	if (!out)
	{
		return (NULL);
	}
	i = 0;
	while (i < length)
	{
		out[i] = f(tab[i]);
		i++;
	}
	return (out);
}

// #include <stdio.h>
// int test(int t)
// {
// 	return (t);
// }
// int main()
// {
// 	int i;

// 	i = 0;
// 	int arr[9]={1, 2, 3, 4, 5, 6, 7, 8, 9};
// 	int *truc = ft_map(arr, 9, test);
// 	while (i < 9)
// 	{
// 		printf("%d", truc[i]);
// 		i++;
// 	}
// 	free(truc);
// }