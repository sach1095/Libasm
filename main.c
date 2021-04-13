#include "Includes/libasm.h"

int	main(void)
{
	ssize_t ret;

	ret = 0;

	dprintf(1, "\nHello welcom to my \n");

	dprintf(1, " ____  ____  ____  ____  _________  ____  ____  ____  ____\n");
	dprintf(1, "||m ||||a ||||i ||||n ||||       ||||t ||||e ||||s ||||t ||\n");
	dprintf(1, "||__||||__||||__||||__||||_______||||__||||__||||__||||__||\n");
	dprintf(1, "|/__\\||/__\\||/__\\||/__\\||/_______\\||/__\\||/__\\||/__\\||/__\\|\n\n");


	dprintf(1, "\nwrite avec un text.\n\nmy_strlen : %zu.\n", ft_strlen("coucou"));
	dprintf(1, "re_strlen : %lu.\n", strlen("coucou"));

	dprintf(1, "\nwrite avec chaine vide.\n");

	dprintf(1, "my_strlen : %zu.\n", ft_strlen(""));
	dprintf(1, "re_strlen : %lu.\n", strlen(""));

	dprintf(1, "\n-------------------------------\n\nwrite avec un text.\n");

	dprintf(1 ,"my_write : ");
	ret = ft_write(1, "Bonjour", 7);
	dprintf(1, ".(%li)\nre_write : ", ret);
	ret = write(1,  "Bonjour", 7);
	dprintf(1, ".(%li)\n", ret);

	dprintf(1, "\nwrite avec fd non valide\n");

	dprintf(1 ,"my_write : ");
	ret = ft_write(3, "Bonjour", 7);
	dprintf(1, ".(%li)\nre_write : ", ret);
	ret = write(3,  "Bonjour", 7);
	dprintf(1, ".(%li)\n", ret);

	dprintf(1, "\n-------------------------------\n\nread valide\n");

	int fd;
	char lol[21];

	fd = open("info.txt", O_RDONLY);
	dprintf(1 ,"my_read : ");
	ret = ft_read(fd, lol, 21);
	dprintf(1, "%s.(%li)\nre_read : ", lol, ret);
	close(fd);
	fd = open("info.txt", O_RDONLY);
	ret = read(fd,  lol, 1);
	dprintf(1, "%s.(%li)\n", lol, ret);
	close(fd);

	dprintf(1, "\nread avec un fd non valide\n");

	fd = open("", O_RDONLY);
	dprintf(1 ,"my_read : ");
	ret = ft_read(fd, lol, 21);
	dprintf(1, "%s.(%li)\nre_read : ", lol, ret);
	close(fd);
	fd = open("", O_RDONLY);
	ret = read(fd,  lol, 1);
	dprintf(1, "%s.(%li)\n", lol, ret);
	close(fd);

	dprintf(1, "\n-------------------------------\n\n");

	const char	*s1;
	const char	*s2;

	s1 = "coucou";
	s2 = "coucou";

	dprintf(1 ,"my_strcmp : ");
	ret = ft_strcmp(s1, s2);
	dprintf(1, ".(%li)\nre_strcmp : ", ret);

	ret = strcmp(s1, s2);
	dprintf(1, ".(%li)\n", ret);

	dprintf(1, "\n-------------------------------\n\n");


	return (0);
}
