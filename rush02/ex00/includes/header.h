#ifndef HEADER_H
# define HEADER_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_putnbr(int nb);
void 			ft_putline(int i, char *xy);

int				ft_strlen(char *str);
char			*ft_strcat(char *dest, char *src);
char			*ft_strcpy(char *dest, char *src);
int				ft_strcmp(char *s1, char *s2);
int				ft_atoi(char *str);

#endif
