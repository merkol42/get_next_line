/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merkol <merkol@42kocaeli.com.tr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:44:55 by merkol            #+#    #+#             */
/*   Updated: 2022/03/01 13:46:25 by merkol           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s)
		i++;
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] != '\0' && c != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}

char	*ft_strjoin(char *mystr, char *buff)
{
	char	*newstr;
	int		i;
	int		j;

	if (!mystr)
	{
		mystr = malloc(1);
		mystr[0] = '\0';
	}
	newstr = malloc(sizeof(char) * ((ft_strlen(mystr) + ft_strlen(buff)) + 1));
	i = 0;
	j = 0;
	while (mystr[i] != '\0')
	{
		newstr[i] = mystr[i];
		i++;
	}
	while (buff[j] != '\0')
		newstr[i++] = buff[j++];
	newstr[ft_strlen(mystr) + ft_strlen(buff)] = '\0';
	free(mystr);
	return (newstr);
}
