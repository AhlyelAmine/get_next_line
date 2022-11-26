/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahlyel <aahlyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 16:24:31 by aahlyel           #+#    #+#             */
/*   Updated: 2022/11/26 23:47:47 by aahlyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <string.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# ifndef FD_MAX
#  define FD_MAX 10240
# endif

char	*get_next_line(int fd);
char	*ft_strfreejoin(char *s1, char *s2);
int		ft_memchr_ind(char *str, char c);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
char	*ft_read(int fd);
char	*ft_line(char *line);
char	*ft_hold(char *line);

#endif
