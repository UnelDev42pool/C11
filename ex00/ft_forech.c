/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_forech.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 17:25:37 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/18 17:36:01 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void ft_foreach(int *tab, int length, void(*f)(int))
{
	int i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

// #include <stdio.h>
// void test(int t)
// {
// 	printf("%d\n", t);
// }
// int main()
// {
// 	 int arr[6]={11,12,13,14,15,16};
// 	ft_foreach(arr, 6, test);
// }
