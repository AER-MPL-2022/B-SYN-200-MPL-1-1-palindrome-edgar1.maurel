/*
** EPITECH PROJECT, 2023
** B-SYN-200-MPL-1-1-palindrome-edgar1.maurel
** File description:
** create_palindrome.c
*/

#include "palindrome.h"

palindrome_t *create_palindrome(arguments_t *args)
{
    palindrome_t *palindrome = malloc(sizeof(palindrome_t));

    palindrome->number = args->n;
    palindrome->palindrom_res = args->p;
    palindrome->base = args->b;
    palindrome->max = args->imax;
    palindrome->min = args->imin;
    palindrome->iteration = 0;
    return (palindrome);
}