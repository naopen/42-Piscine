#ifndef _CHECKMATE_H
#define _CHECKMATE_H

# include <unistd.h>
# include <stdlib.h>

size_t	ft_strlen(char *s);
int		ft_opiece(char piece);
int		ft_rook(char **board, int y, int x);
int		ft_pawn(char **board, int y, int x);
int		ft_bishop(char **board, int y, int x);

#endif
