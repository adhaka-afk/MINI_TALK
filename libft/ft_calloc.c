/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 20:35:03 by adhaka            #+#    #+#             */
/*   Updated: 2022/12/30 14:59:49 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*rptr;

	rptr = malloc(count * size);
	if (!rptr)
		return (NULL);
	ft_bzero(rptr, count * size);
	return (rptr);
}
