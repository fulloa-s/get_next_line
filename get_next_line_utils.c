/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 10:38:17 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/01/25 17:12:48 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_strlen(char *line)
{
	int i;

	i = 0;
	if (!line)
		return (0);
	while (line[i])
		i++;
	return (i);
}

int		ft_strchr(char *line, char c)
{
	int i;

	i = 0;
	if (!line)
		return (0);
	while (line[i])
	{
		if (line[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		x;
	int		y;
	char	*newstr;

	x = ft_strlen(s1);
	y = ft_strlen(s2);
	if (!(newstr = (char *)malloc(sizeof(char) * (x + y + 1))))
		return (NULL);
	x = 0;
	while (s1 && s1[x])
	{
		newstr[x] = s1[x];
		x++;
	}
	y = 0;
	while (s2 && s2[y])
	{
		newstr[x] = s2[y];
		x++;
		y++;
	}
	newstr[x] = '\0';
	free(s1);
	return (newstr);
}
