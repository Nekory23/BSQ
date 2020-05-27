/*
** EPITECH PROJECT, 2019
** BSQ
** File description:
** my.h
*/

#ifndef __MY_H__
#define __MY_H__

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

int my_putstr(char const *str);
void my_putchar(char c);
int my_atoi_bsq(char *buffer);
int error_handling(char *buffer);
int is_file_valid(char *buffer);
int my_strlen(char const *str);

#define ERROR_ARG "This proram must take only the path to the file\n"
#define ERROR_FILE "this file is not valid\n"
#define ERROR_OPEN "could not open file\n"

#endif
