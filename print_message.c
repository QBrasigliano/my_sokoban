/*
** EPITECH PROJECT, 2022
** Quentin
** File description:
** print_message
*/

#include "./include/sokoban.h"

void print_message (void)
{
    my_str("USAGE\n     ./my_sokoban map\nDESCRIPTION\n");
    my_str("     map file representing the warehouse map,");
    my_str(" containing ‘#’ for walls,\n");
    my_str("     ‘P’ for the player, ‘X’ for boxes");
    my_str(" and ‘O’ for storage locations.\n");
}
