/*
** EPITECH PROJECT, 2022
** Quentin
** File description:
** initialisation_p
*/

#include "./include/sokoban.h"

int nb_cols(char *str)
{
    int j = 0;
    for (; str[j] != '\n'; j++) {
    }
    return j;
}

int nb_rows(char *str)
{
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n')
            j++;
    }
    return j;
}

void find_p(char **map, pos_t *pos, int i, int j)
{
    pos->c = 0;
    pos->cu = 0;
    pos->r = 0;
    pos->ru = 0;
    if (map[i][j] == 'P') {
        pos->x = i;
        pos->y = j;
    }
    if (map[i][j] == 'O') {
        pos->r += 1;
    }
    if (map[i][j] == 'X')
        pos->c += 1;
}
