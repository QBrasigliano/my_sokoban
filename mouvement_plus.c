/*
** EPITECH PROJECT, 2022
** Quentin
** File description:
** mouvement_plus
*/

#include "./include/sokoban.h"

void go_up_plus(char **map, pos_t *pos)
{
    if (map[pos->x - 2][pos->y] != '#' && pos->ru == 0) {
        map[pos->x - 2][pos->y] = 'X';
        map[pos->x - 1][pos->y] = 'P';
        map[pos->x][pos->y] = ' ';
        pos->x--;
    }
}

void go_down_plus(char **map, pos_t *pos)
{
    if (map[pos->x + 2][pos->y] != '#' && pos->ru == 0) {
        map[pos->x + 2][pos->y] = 'X';
        map[pos->x + 1][pos->y] = 'P';
        map[pos->x][pos->y] = ' ';
        pos->x++;
    }
}

void go_left_plus(char **map, pos_t *pos)
{
    if (map[pos->x][pos->y - 2] != '#' && pos->ru == 0) {
        map[pos->x][pos->y - 2] = 'X';
        map[pos->x][pos->y - 1] = 'P';
        map[pos->x][pos->y] = ' ';
        pos->y--;
    }
}

void go_right_plus(char **map, pos_t *pos)
{
    if (map[pos->x][pos->y + 2] != '#' && pos->ru == 0) {
        map[pos->x][pos->y + 2] = 'X';
        map[pos->x][pos->y + 1] = 'P';
        map[pos->x][pos->y] = ' ';
        pos->y++;
    }
}
