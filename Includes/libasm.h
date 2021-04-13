#ifndef LIBASM_H
# define LIBASM_H

# include <errno.h>
# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

size_t	ft_strlen(char *str);
int		ft_strcmp(const char *s1, const char *s2);
ssize_t	ft_write(int fd, void *buf, size_t size);
ssize_t	ft_read(int fd, void *buf, size_t size);

#endif
