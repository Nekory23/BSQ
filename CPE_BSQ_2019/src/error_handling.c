/*
** EPITECH PROJECT, 2019
** BSQ
** File description:
** error_handling
*/

#include "my.h"

int is_file_valid(char *buffer)
{
    int i = 0;

    while (buffer[i] != '\n') {
        if (buffer[i] >= '0' && buffer[i] <= '9')
            i++;
        else
            return (84);
    }
    i++;
    while (buffer[i] != '\0') {
        if (buffer[i] == '.' || buffer[i] == 'o' || buffer[i] == '\n')
            i++;
        else
            return (84);
    }
    return (0);
}

int has_correct_char_nbr(char *buffer, int nbr_lines)
{
    int char_in_line = 0;
    int total_char;
    int total_file;
    int j = 0;
    int i;

    while (buffer[j] != '\n')
        j++;
    i = j + 1;
    for (; buffer[i] != '\0'; i++) {
        total_file++;
    }
    i = j + 1;
    for (; buffer[i] != '\n'; i++)
        char_in_line = char_in_line + 1;
    total_char = nbr_lines * char_in_line;
    if (total_char != (total_file - nbr_lines))
        return (84);
    return (0);
}

int correct_nbr_of_lines(char *buffer, int nbr_lines)
{
    int j = 0;
    int lines = 0;

    while (buffer[j] != '\n')
        j++;
    j++;
    for (; buffer[j] != '\0'; j++)
        if (buffer[j] == '\n')
            lines++;
    if (lines != nbr_lines)
        return (84);
    return (0);
}

int error_handling(char *buffer)
{
    int nbr_lines;

    if (is_file_valid(buffer) == 84)
        return (84);
    nbr_lines = my_atoi_bsq(buffer);
    if (has_correct_char_nbr(buffer, nbr_lines) == 84)
        return (84);
    if (correct_nbr_of_lines(buffer, nbr_lines) == 84)
        return (84);
    return (0);
}
