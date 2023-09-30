/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 03:38:24 by adhaka            #+#    #+#             */
/*   Updated: 2023/06/21 01:03:04 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_randp(int sig)
{
	static int	res = 0;
	static int	bc = 0;

	res = res << 1;
	if (sig == SIGUSR1)
		res = res | 1;
	bc++;
	if (bc == 8)
	{
		ft_putchar(res);
		res = 0;
		bc = 0;
	}
}

int	main(void)
{
	signal(SIGUSR1, ft_randp);
	signal(SIGUSR2, ft_randp);
	ft_printf("server PID : %d\n", getpid());
	while (1)
		pause();
}
