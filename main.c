#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	*line;

	fd = open(argv[argc - 1], O_RDONLY);
	printf("\nValue of file descriptor : %d\n", fd);
	if (fd < 0)
		return (1);
	while ((ret = get_next_line(fd, &line)) > 0)
	{
		printf("%s\n", line);
		free(line);
	}
	printf("%d\n", ret);
	return (0);
}
