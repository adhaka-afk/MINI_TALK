/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 20:37:47 by adhaka            #+#    #+#             */
/*   Updated: 2022/12/30 15:04:48 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	a;

	if (!s)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	if ((unsigned int)ft_strlen(s) < len)
		substring = (char *)malloc(sizeof(*s) * (ft_strlen(s) - start + 1));
	else
		substring = (char *)malloc(sizeof(char) * (len + 1));
	if (substring == NULL)
		return (NULL);
	a = 0;
	while (len-- && s[a + start])
	{
		substring[a] = s[a + start];
		a++;
	}
	substring[a] = '\0';
	return (substring);
}
