/*
** EPITECH PROJECT, 2022
** Quentin
** File description:
** sokoban
*/

#pragma once

#include <criterion/criterion.h>
#include <ncurses.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdarg.h>
#include <sys/sysmacros.h>
#include <dirent.h>
#include <criterion/criterion.h>

typedef struct pos {
    int x;
    int y;
    int r;
    int ru;
    int c;
    int cu;
}pos_t;

int main (int ac, char **av);
int sokoban (char **av);
char* open_read_file(char *filepath);
char **mem_alloc_2d_array(int nb_rows, int nb_cols);
char **load_2d_arr(char *str, int nb_rows, int nb_cols, pos_t *pos);
void print_2d_array(char **map, int nb_rows, int nb_cols);

char* chargement (char **av);
int nb_o(char *str);
int nb_x(char *str);

int find_win(char **map, char *str);
int go_win (char **map, int i, int j);
int find_w_l (char **av);
int verify_size (int x, int y, char *str);

int find_fc(char **map, char *str, int touche, pos_t *pos);
int nb_cols(char *str);
int nb_rows(char *str);
void find_p(char **map, pos_t *pos, int i, int j);

void go_up (char **map, pos_t *pos);
void go_up_plus (char **map, pos_t *pos);
void go_down (char **map, pos_t *pos);
void go_down_plus (char **map, pos_t *pos);
void go_right (char **map, pos_t *pos);
void go_right_plus (char **map, pos_t *pos);
void go_left (char **map, pos_t *pos);
void go_left_plus (char **map, pos_t *pos);

void mouv(int touche, char **map, pos_t *pos);

void print_message (void);
int my_strlen(char const *str);
int my_str(char const *str);
void my_char(char c);
int my_nbr(int nb);
int my_strcmp(char const *s1, char const *s2);
