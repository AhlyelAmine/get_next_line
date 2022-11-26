/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahlyel <aahlyel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:31:25 by aahlyel           #+#    #+#             */
/*   Updated: 2022/11/26 23:48:06 by aahlyel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>

int main()
{
	char    *p;
	int fd = open("aa.txt", O_RDONLY);
								p =																		get_next_line(fd);
	printf("%s",p);
									p =																get_next_line(fd);
	printf("%s",p);
										p =														get_next_line(fd);
	printf("%s",p);
											p =												get_next_line(fd);
	printf("%s",p);
												p =										get_next_line(fd);
	printf("%s",p);
													p =								get_next_line(fd);
	printf("%s",p);
														p =						get_next_line(fd);
	printf("%s",p);
															p =				get_next_line(fd);
	printf("%s",p);												/*|||||||*/
															p =				get_next_line(fd);
	printf("%s",p);
														p =						get_next_line(fd);
	printf("%s",p);
													p =								get_next_line(fd);
	printf("%s",p)
												p =										get_next_line(fd);
	printf("%s",p);
											p =												get_next_line(fd);
	printf("%s",p)
										p =														get_next_line(fd);
	printf("%s",p);
									p =																get_next_line(fd);
	printf("%s",p);
								p =																		get_next_line(fd);
	printf("%s",p);

}
