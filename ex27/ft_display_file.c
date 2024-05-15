/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflamion <fflamion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 23:30:18 by fflamion          #+#    #+#             */
/*   Updated: 2024/05/15 23:31:53 by fflamion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	ft_display_file(char *path)
{
	int		file;
	int		reader;
	char	stock[100];

	file = open(path, O_RDONLY);
	if (file <= 0)
		return (0);
	(reader = read(file, stock, 100));
	while (reader > 0)
	{
		write(1, stock, reader);
		(reader = read(file, stock, 100));
	}	
	close(file);
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else if (!ft_display_file(argv[1]))
		write(2, "Cannot read file.\n", 18);
	return (0);
}
