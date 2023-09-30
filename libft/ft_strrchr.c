/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 11:01:33 by adhaka            #+#    #+#             */
/*   Updated: 2022/12/30 15:04:37 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*temp;

	temp = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			temp = s;
		s++;
	}
	if (*s == (char)c)
		temp = s;
	return ((char *)temp);
}
