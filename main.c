#include "get_next_line.h"

int	main()
{
	char	*s;
	int		fd1;
	int		fd2;
	int		res;

	fd1 = open("1.txt", O_RDONLY);
	fd2 = open("2.txt", O_RDONLY);
	printf("\n__1__\n");
	while ((res = get_next_line(fd1, &s)))
	{
		printf("\nLine : %s  res = %d\n", s, res);
		free(s);
	}
	printf("\nLine : %s  res = %d\n", s, res);
	free(s);
	printf("\nLine : %s  res = %d\n", s, res);
	printf("\nLine : %s  res = %d\n", s, res);
	while ((res = get_next_line(fd2, &s)))
	{
		printf("\nLine : %s  res = %d\n", s, res);
		free(s);
	}
	printf("\nLine : %s  res = %d\n", s, res);
	free(s);
	close(fd1);
	close(fd2);
}