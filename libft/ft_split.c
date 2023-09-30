/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 20:42:56 by adhaka            #+#    #+#             */
/*   Updated: 2022/12/30 15:03:20 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(char const *s, char c)
{
	int	word_nbr;
	int	a;

	a = 0;
	word_nbr = 0;
	while (s[a])
	{
		if ((s[a] != c) && ((s[a + 1] == c) || !s[a + 1]))
			word_nbr++;
		a++;
	}
	return (word_nbr);
}

static char	*ft_word_string(char const *s, char c)
{
	char	*new;
	int		a;

	a = 0;
	while (s[a] && s[a] != c)
		a++;
	new = (char *)malloc(sizeof(char) * a + 1);
	if (!new)
		return (NULL);
	a = 0;
	while (s[a] && s[a] != c)
	{
		new[a] = s[a];
		a++;
	}
	new[a] = '\0';
	return (new);
}

char	**ft_split(char const *s, char c)
{
	char	**arrayofwords;
	int		a;

	if (!s)
		return (NULL);
	arrayofwords = malloc((sizeof(char *)) * (ft_word_count(s, c) + 1));
	if (!arrayofwords)
		return (NULL);
	a = 0;
	while (*s && *s == c)
		s++;
	while (*s)
	{
		arrayofwords[a++] = ft_word_string(s, c);
		while (*s && *s != c)
			s++;
		while (*s && *s == c)
			s++;
	}
	arrayofwords[a] = 0;
	return (arrayofwords);
}
