/*
** EPITECH PROJECT, 2022
** Quent22.04Bras
** File description:
** fc
*/

#include "./include/sokoban.h"

void go_up(char **map, pos_t *pos)
{
    if (map[pos->x - 1][pos->y] == 'X')
        go_up_plus (map, pos);
    if (map[pos->x - 1][pos->y] != 'X' && pos->ru != 0) {
        map[pos->x][pos->y] = 'O';
        pos->ru = 0;
        map[pos->x - 1][pos->y] = 'P';
        pos->x--;
    } else {
        if (map[pos->x - 1][pos->y] == 'O')
            pos->ru = 1;
        if (map[pos->x - 1][pos->y] != 'X') {
            map[pos->x - 1][pos->y] = 'P';
            map[pos->x][pos->y] = ' ';
            pos->x--;
        }
    }
}

void go_down (char **map, pos_t *pos)
{
    if (map[pos->x + 1][pos->y] == 'X')
        go_down_plus(map, pos);
    if (map[pos->x + 1][pos->y] != 'X' && pos->ru != 0) {
        map[pos->x][pos->y] = 'O';
        pos->ru = 0;
        map[pos->x + 1][pos->y] = 'P';
        pos->x++;
    } else {
        if (map[pos->x + 1][pos->y] == 'O')
            pos->ru = 1;
        if (map[pos->x + 1][pos->y] != 'X') {
            map[pos->x + 1][pos->y] = 'P';
            map[pos->x][pos->y] = ' ';
            pos->x++;
        }
    }
}

void go_left (char **map, pos_t *pos)
{
    if (map[pos->x][pos->y - 1] == 'X')
        go_left_plus(map, pos);
    if (map[pos->x][pos->y - 1] != 'X' && pos->ru != 0) {
        map[pos->x][pos->y] = 'O';
        pos->ru = 0;
        map[pos->x][pos->y - 1] = 'P';
        pos->y--;
    } else {
        if (map[pos->x][pos->y - 1] == 'O')
            pos->ru = 1;
        if (map[pos->x][pos->y - 1] != 'X') {
            map[pos->x][pos->y - 1] = 'P';
            map[pos->x][pos->y] = ' ';
            pos->y--;
        }
    }
}

void go_right(char **map, pos_t *pos)
{
    if (map[pos->x][pos->y + 1] == 'X')
        go_right_plus(map, pos);
    if (map[pos->x][pos->y + 1] != 'X' && pos->ru != 0) {
        map[pos->x][pos->y] = 'O';
        pos->ru = 0;
        map[pos->x][pos->y + 1] = 'P';
        pos->y++;
    } else {
        if (map[pos->x][pos->y + 1] == 'O')
            pos->ru = 1;
        if (map[pos->x][pos->y + 1] != 'X') {
            map[pos->x][pos->y + 1] = 'P';
            map[pos->x][pos->y] = ' ';
            pos->y++;
        }
    }
}

void mouv(int touche, char **map, pos_t *pos)
{
    if (touche == KEY_UP && map[pos->x - 1][pos->y] != '#')
        go_up(map, pos);
    if (touche == KEY_DOWN && map[pos->x + 1][pos->y] != '#')
        go_down(map, pos);
    if (touche == KEY_LEFT && map[pos->x][pos->y - 1] != '#')
        go_left(map, pos);
    if (touche == KEY_RIGHT && map[pos->x][pos->y + 1] != '#')
        go_right(map, pos);
}
