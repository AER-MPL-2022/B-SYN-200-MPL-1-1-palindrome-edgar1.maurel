/*
** EPITECH PROJECT, 2023
** B-SYN-200-MPL-1-1-palindrome-edgar1.maurel
** File description:
** get_args.c
*/

#include "palindrome.h"
#include <stdio.h>
arguments_t *init_args(void)
{
    arguments_t *args = malloc(sizeof(arguments_t));
    args->n = -1;
    args->p = -1;
    args->b = 10;
    args->imin = 0;
    args->imax = 100;
    return (args);
}

void validate(arguments_t *args)
{
    if (args->n == -1 && args->p == -1) {
        destroy_args(args);
        error_message("Please provide -n or -p arguments\n");
    }
    if (args->imin > args->imax) {
        destroy_args(args);
        error_message("imin should be less than imax\n");
    }
    if (args->imin < 0 || args->imax > 100) {
        destroy_args(args);
        error_message
        ("imin should be positive and imax should be less than 100\n");
    }
    if (args->n != -1 && args->p != -1) {
        destroy_args(args);
        error_message("Please only provide -n or only -p arguments\n");
    }
    if (args->b < 2 || args->b > 10) {
        destroy_args(args);
        error_message("b should be between 2 and 10\n");
    }
}

arguments_t *get_args(int argc, char **argv)
{
    arguments_t *args = init_args();
    for (int i = 0; i < argc; i++) {
        if (my_strcmp(argv[i], "-n") == 0 && i + 1 < argc) {
            args->n = my_getnbr(argv[i + 1]);
        }
        if (my_strcmp(argv[i], "-p") == 0 && i + 1 < argc) {
            args->p = my_getnbr(argv[i + 1]);
        }
        if (my_strcmp(argv[i], "-b") == 0 && i + 1 < argc) {
            args->b = my_getnbr(argv[i + 1]);
        }
        if (my_strcmp(argv[i], "-imin") == 0 && i + 1 < argc) {
            args->imin = my_getnbr(argv[i + 1]);
        }
        if (my_strcmp(argv[i], "-imax") == 0 && i + 1 < argc) {
            args->imax = my_getnbr(argv[i + 1]);
        }
    }
    validate(args);
    return args;
}

void destroy_args(arguments_t *args)
{
    free(args);
}