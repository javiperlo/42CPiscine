/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readFile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:04:20 by javperez          #+#    #+#             */
/*   Updated: 2023/08/27 23:14:38 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

void	split_names(const char *input);

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
		{
			return (str + i);
		}
		i ++;
		j = 0;
	}
	if (to_find[j] == '\0')
	{
		return (str);
	}
	return (0);
}

char	search_word(char *to_find_str)
{
	int		fd;
	char	my_string[1001];
	ssize_t	bytes_read;
	char	*position;
	char	*line;

	fd = open("numbers.dict", O_RDONLY);
	if (fd != -1)
	{
		while ((bytes_read = read(fd, my_string, sizeof(my_string) - 1)) > 0)
		{
			my_string[bytes_read] = '\0';
			line = my_string;
			position = line;
			while (*position != '\0')
			{
				if (*position == '\n')
				{
					*position = '\0';
					if (ft_strstr(line, to_find_str))
					{
						if (to_find_str[0] <= '9')
						{
							split_names(line);
							close(fd);
							return (0);
						}
					}
					line = position + 1;
				}
				position++;
			}
		}
		close(fd);
	}
	else
		write (1, "Dict Error\n", 11);
	return (0);
}
