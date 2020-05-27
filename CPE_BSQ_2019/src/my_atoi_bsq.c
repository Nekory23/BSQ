/*
** EPITECH PROJECT, 2019
** BSQ
** File description:
** my_atoi for the number of lines
*/

#include "my.h"

int my_atoi_bsq(char *buffer)
{
    int nbr_lines = 0;

    for (int i = 0; buffer[i] != '\n'; i++)
        if (buffer[i] >= '0' && buffer[i] <= '9') {
            nbr_lines = nbr_lines * 10;
            nbr_lines = nbr_lines + (buffer[i] - '0');
        }
    return (nbr_lines);
}
