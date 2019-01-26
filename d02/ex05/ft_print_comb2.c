/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 17:04:42 by rwright           #+#    #+#             */
/*   Updated: 2019/01/10 11:10:39 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb2(void)
{
	int nums[2];

	while (nums[0] < 99)
	{
		nums[1] = nums[0] + 1;
		while (nums[1] <= 99)
		{
			ft_putchar(nums[0] / 10 + '0');
			ft_putchar(nums[0] % 10 + '0');
			ft_putchar(' ');
			ft_putchar(nums[1] / 10 + '0');
			ft_putchar(nums[1] % 10 + '0');
			if (nums[0] != 98 || nums[1] != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			nums[1]++;
		}
		nums[0]++;
	}
}
