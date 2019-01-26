/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 09:21:33 by rwright           #+#    #+#             */
/*   Updated: 2019/01/11 22:16:40 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_helper_function(void)
{
	int a;

	a = 12;
}

void	ft_sort_integer_table(int *a, int size)
{
	int i;
	int j;
	int min;
	int swap;

	ft_helper_function();
	i = 0;
	while (i < size - 1)
	{
		min = i;
		j = i + 1;
		while (j < size)
		{
			if (a[j] < a[min])
				min = j;
			j++;
		}
		if (min != i)
		{
			swap = a[min];
			a[min] = a[i];
			a[i] = swap;
		}
		i++;
	}
}
