/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 20:45:13 by adhaka            #+#    #+#             */
/*   Updated: 2022/12/30 15:04:18 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	size_t	a;

	if (!s || !f)
		return (NULL);
	new = (char *)malloc(sizeof(*s) * ft_strlen(s) + 1);
	if (!new)
		return (NULL);
	a = 0;
	while (s[a])
	{
		new[a] = (*f)(a, s[a]);
		a++;
	}
	new[a] = '\0';
	return (new);
}
