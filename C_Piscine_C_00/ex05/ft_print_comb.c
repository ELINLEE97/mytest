/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 18:23:49 by jko               #+#    #+#             */
/*   Updated: 2020/01/22 18:44:49 by jko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb(void)
{
	char num[5];

	num[3] = ',';
	num[4] = ' ';
	num[0] = '0';
	while (num[0] <= '7')
	{
		num[1] = num[0] + 1;
		while (num[1] <= '8')
		{
			num[2] = num[1] + 1;
			while (num[2] <= '9')
			{
				write(1, &num[0], 3);
				if (!(num[0] == '7' && num[1] == '8' && num[2] == '9'))
				{
					write(1, &num[3], 2);
				}
				num[2]++;
			}
			num[1]++;
		}
		num[0]++;
	}
}