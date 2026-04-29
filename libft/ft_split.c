/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryanan <eryanan@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 17:48:29 by eryanan           #+#    #+#             */
/*   Updated: 2026/04/27 18:26:35 by eryanan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *s, char c)

{
	size_t	i;
	size_t	count;
	size_t	word;

	i = 0;
	count = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] != c && word == 0)
		{
			count++;
			word = 1;
		}
		else if (s[i] == c)
			word = 0;
		i++;
	}
	return (count);
}

static int	word_len(char const *s, char c)

{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static void	ft_free(char **s, size_t nb)
{
	size_t	i;

	i = 0;
	while (i < nb)
	{
		free(s[i]);
		i++;
	}
	free(s);
}

static char	**fill_word(char **result, char const *s, char c, size_t nb)

{
	size_t	len;
	size_t	i;

	i = 0;
	while (i < nb)
	{
		while (*s == c)
			s++;
		len = word_len(s, c);
		result[i] = ft_substr(s, 0, len);
		if (!result[i])
		{
			ft_free(result, i);
			return (NULL);
		}
		s = s + len;
		i++;
	}
	result[i] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)

{
	char	**result;
	size_t	nb;

	if (!s)
		return (NULL);
	nb = count_word(s, c);
	result = malloc(sizeof(char *) * (nb + 1));
	if (!result)
		return (NULL);
	result = fill_word(result, s, c, nb);
	return (result);
}
