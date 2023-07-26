/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 13:08:12 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/26 13:27:30 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_strswap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_str_tab(char **tab, int size)
{
	char	*pivot;
	int		i;
	int		j;

	if (size < 2)
		return ;
	pivot = tab[--size];
	i = 0;
	j = -1;
	while (++j < size)
		if (ft_strcmp(tab[j], pivot) < 0)
			ft_strswap(&tab[i++], &tab[j]);
	if (ft_strcmp(tab[i], tab[size]) > 0)
		ft_strswap(&tab[i], &tab[size]);
	ft_sort_str_tab(tab, i);
	ft_sort_str_tab(tab + i + 1, size - i);
}

void	ft_sort_string_tab(char **tab)
{
	int	n;

	n = 0;
	while (tab[n])
		n++;
	ft_sort_str_tab(tab, n);
}
// #include <stdio.h>
// int	main(int argc, char *argv[])
// {
// 	int	i;

// 	ft_sort_string_tab(argv);
// 	i = 1;
// 	while (i < argc)
// 	{
// 		printf("%s\n", argv[i]);
// 		i++;
// 	}
// }
