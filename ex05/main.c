/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 11:21:22 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/26 17:18:48 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s2[i] - s1[i] != 0)
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

int			add(int arg1, int arg2, int *state);
int			minus(int arg1, int arg2, int *state);
int			multiply(int arg1, int arg2, int *state);
int			divide(int arg1, int arg2, int *state);
int			modulo(int arg1, int arg2, int *state);
int			ft_atoi(char *str);
void		ft_putnbr(int nb);
typedef int	(*t_f)(int, int, int*);

void calcul(int number,int number2, char *argv[], int state)
{
	const t_f	func[5] = {&add, &minus, &multiply, &divide, &modulo};
	
	if (ft_strcmp(argv[2], "+") == 0)
		ft_putnbr(func[0](number, number2, &state));
	else if (ft_strcmp(argv[2], "-") == 0)
		ft_putnbr(func[1](number, number2, &state));
	else if (ft_strcmp(argv[2], "*") == 0)
		ft_putnbr(func[2](number, number2, &state));
	else if (ft_strcmp(argv[2], "/") == 0)
	{
		func[3](number, number2, &state);
		if (state)
			ft_putnbr(func[3](number, number2, &state));
	}
	else if (ft_strcmp(argv[2], "%") == 0)
	{
		func[4](number, number2, &state);
		if (state)
			ft_putnbr(func[4](number, number2, &state));
	}
	else
		ft_putnbr(0);
}

int	main(int argc, char *argv[])
{
	int			number2;
	int			number;
	int			state;

	if (argc != 4)
		return (1);
	number = ft_atoi(argv[1]);
	number2 = ft_atoi(argv[3]);
	calcul(number, number2, argv, state);
	write(1, "\n", 1);
}
