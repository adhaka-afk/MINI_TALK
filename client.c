/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 03:38:41 by adhaka            #+#    #+#             */
/*   Updated: 2023/06/21 00:56:20 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_transmit(int pid, char*str)
{
	unsigned char	a;
	int				count;
	int				b;

	count = 0;
	while (str[count] != '\0')
	{
		a = (unsigned char)str[count];
		b = 128;
		while (b > 0)
		{
			if ((a & b) != 0)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			usleep(100);
			b = b >> 1;
		}
		count++;
	}
}

int	main(int argc, char *argv[])
{
	int	pid;

	if (argc != 3)
	{
		ft_printf("ERROR, wrong no. of cmd line args");
		return (0);
	}
	pid = ft_atoi(argv[1]);
	if (pid < 1)
		ft_printf("ERROR, pid value < 1");
	ft_transmit(pid, argv[2]);
	return (0);
}
