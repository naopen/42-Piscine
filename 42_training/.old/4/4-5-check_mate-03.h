#ifndef CHECK_MATE_H
# define CHECK_MATE_H

# include <stdlib.h>
# include <unistd.h>

int		ft_strlen(char *str);
int		check_rook(char **tab, int i, int j);
int		main(int argc, char *argv[]);
int		check_pawn(char **tab, int i, int j);
int		check_bishop(char **tab, int i, int j, int size);

#endif
