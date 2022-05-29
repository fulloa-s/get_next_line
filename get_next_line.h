/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 10:27:32 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/01/25 17:21:10 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

int		get_next_line(int fd, char **line);
char	*fill_line(char *memory, char *line);
char	*clean_memory(char *memory);
int		tofree(char *buff);
int		defr(char **line, int fd);
int		ft_strlen(char *line);
int		ft_strchr(char *line, char c);
char	*ft_strjoin(char *s1, char *s2);

#endif
