/*
** EPITECH PROJECT, 2022
** Quentin
** File description:
** load_2d_arr_from_file
*/

#include "./include/sokoban.h"

char **mem_alloc_2d_array(int nb_rows, int nb_cols)
{
    char **j = malloc(sizeof(char *) * nb_rows);
    for (int i = 0; i != nb_rows; i++) {
        j[i] = malloc(sizeof(char) * nb_cols);
    }
    return j;
}

char **load_2d_arr(char *str, int nb_rows, int nb_cols, pos_t *pos)
{
    char** arr = mem_alloc_2d_array(nb_rows, nb_cols);
    int all = 0;
    for (int i = 0; i <= nb_rows - 1; i++) {
        for (int j = 0; j <= nb_cols; j++, all++) {
            arr[i][j] = str[all];
            find_p(arr, pos, i, j);
        }
        }
    arr[nb_rows - 1][nb_cols] = '\0';
    return arr;
}

void print_2d_array(char **map, int nb_rows, int nb_cols)
{
    for (int i = 0; i <= nb_rows; i++) {
        for (int j = 0; j <= nb_cols; j++) {
            printw("%c", map[i][j]);
        }
    }
}
