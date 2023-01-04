/*
** EPITECH PROJECT, 2022
** Quentin
** File description:
** find_o_x
*/

#include "./include/sokoban.h"

int nb_o(char *str)
{
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'O')
            j++;
    }
    return j;
}

int nb_x(char *str)
{
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'X')
            j++;
    }
    return j;
}

int find_win(char **map, char *str)
{
    int n = 0;
    (void) map;
    (void) str;
    for (int i = 0; i <= nb_rows(str) - 1; i++) {
        for (int j = 0; j <= nb_cols(str); j++) {
            n += go_win(map, i, j);
        }
    }
    return n;
}

int go_win (char **map, int i, int j)
{
    int n = 0;
    if (map[i][j] == 'O')
        n++;
    return n;
}

int verify_size (int x, int y, char *str)
{
    int nb_ligne = nb_rows(str);
    int nb_colones = nb_cols(str);
    if (nb_ligne > x || nb_colones > y) {
        my_str("Veuillez retrecir votre terminal !\n");
        return 84;
    }
    return 0;
}
