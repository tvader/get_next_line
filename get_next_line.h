/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvader <tvader@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 11:06:01 by tvader            #+#    #+#             */
/*   Updated: 2021/06/21 23:13:07 by tvader           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# define TB_SIZE	10240
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10240
# endif // !BUFFER_SIZE
int		get_next_line(int fd, char **line);
void	*ft_calloc(size_t count, size_t size);
size_t	ft_strlen(char *str);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_max(size_t s1, size_t s2);
int		endpart(char **t_buf, char **s_buf, char **line, int cread);
void	linejoinrem(char **line, char **t_buf, char **s_buf);
#endif
