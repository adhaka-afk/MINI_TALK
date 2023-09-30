/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 20:36:28 by adhaka            #+#    #+#             */
/*   Updated: 2022/12/30 15:03:45 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new;

	new = (char *)malloc(ft_strlen(s1) + 1);
	if (!new)
		return (NULL);
	ft_strlcpy(new, s1, (ft_strlen(s1) + 1));
	return (new);
}
