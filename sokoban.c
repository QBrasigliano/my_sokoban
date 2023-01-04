/*
** EPITECH PROJECT, 2022
** Quentin
** File description:
** sokoban
*/

#include "./include/sokoban.h"

int sokoban (char **av)
{
    int touche = 0;
    int x;
    int y;
    pos_t *pos = malloc(sizeof(pos_t));
    char *str = chargement(av);
    initscr();
    getmaxyx(stdscr, x, y);
    if (verify_size(x, y, str) != 0)
        return 84;
    keypad(stdscr, TRUE);
    char **map = load_2d_arr(str, nb_rows(str), nb_cols(str), pos);
    find_fc(map, str, touche, pos);
    endwin();
    return 2;
}

int main (int ac, char **av)
{
    if (ac == 1)
        return 84;
    if (ac > 2)
        return 84;
    if (my_strcmp(av[1], "-h") != 1) {
        print_message();
        return 0;
    }
    char *str = chargement(av);
    if (nb_o(str) != nb_x(str))
        return 84;
    if (my_strcmp(av[1], "map*") != 1)
        return find_w_l (av);
    return 0;
}

int find_fc(char **map, char *str, int touche, pos_t *pos)
{
    while (1) {
        clear();
        print_2d_array(map, nb_rows(str) - 1, nb_cols(str));
        if (find_win(map, str) == 0)
            break;
        touche = getch();
        mouv(touche, map, pos);
        if (touche == 32)
            map = load_2d_arr(str, nb_rows(str), nb_cols(str), pos);
        if (touche == 27)
            break;
        refresh();
    }
    return 0;
}

char* chargement (char **av)
{
    char *filepath = av[1];
    char *str = open_read_file(filepath);
    return str;
}

int find_w_l (char **av)
{
    int res = sokoban(av);
    if (res == 0)
        my_str("You Win!\n");
    if (res == 1)
        my_str("You Lose!\n");
    if (res == 84)
        my_str("Error!\n");
    return res;
}
