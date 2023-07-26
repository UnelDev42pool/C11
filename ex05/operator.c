/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 10:29:44 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/26 17:12:38 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	add(int arg1, int arg2, int *state)
{
	(void) state;
	return (arg1 + arg2);
}

int	minus(int arg1, int arg2, int *state)
{
	(void) state;
	return (arg1 - arg2);
}

int	multiply(int arg1, int arg2, int *state)
{
	(void) state;
	return (arg1 * arg2);
}

int	divide(int arg1, int arg2, int *state)
{
	if (arg2 == 0)
	{
		write(1, "Stop : division by zero", 23);
		*state = 0;
	}
	else
	{
		*state = 1;
		return (arg1 / arg2);
	}
}

int	modulo(int arg1, int arg2, int *state)
{
	if (arg2 == 0)
	{
		write(1, "Stop : modulo by zero", 21);
		*state = 0;
	}
	else
	{
		*state = 1;
		return (arg1 % arg2);
	}
}
