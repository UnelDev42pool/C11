/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advenced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 13:23:57 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/26 13:27:59 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_strswap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	size;
	int	i;

	size = 0;
	while (tab[size])
		size++;
	while (--size >= 0)
	{
		i = 0;
		while (++i <= size)
			if (cmp(tab[i - 1], tab[i]) > 0)
				ft_strswap(&tab[i - 1], &tab[i]);
	}
}

// int	ft_strcmp(char *s1, char *s2)
// {
// 	int	i;

// 	i = 0;
// 	while (s1[i] != '\0' || s2[i] != '\0')
// 	{
// 		if (s2[i] - s1[i] != 0)
// 		{
// 			return (s1[i] - s2[i]);
// 		}
// 		i++;
// 	}
// 	return (s1[i] - s2[i]);
// }
// void	main(int argc, char *argv[])
// {
// 	int	i;

// 	ft_advanced_sort_string_tab(argv, ft_strcmp);
// 	i = 1;
// 	while (i < argc)
// 	{
// 		printf("%s\n", argv[i]);
// 		i++;
// 	}
// }
