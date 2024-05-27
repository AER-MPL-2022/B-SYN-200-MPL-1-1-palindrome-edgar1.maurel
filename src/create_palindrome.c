/*
** EPITECH PROJECT, 2023
** B-SYN-200-MPL-1-1-palindrome-edgar1.maurel
** File description:
** create_palindrome.c
*/

#include "palindrome.h"

palindrome_t *create_palindrome_from_number(int number)
{
    if (number < 0)
        return (NULL);
    palindrome_t *palindrome = malloc(sizeof(palindrome_t));

    palindrome->number = number;
    palindrome->palindrom_res = 0;
    palindrome->base = 10;
    palindrome->max = 100;
    palindrome->min = 0;
    return (palindrome);
}

palindrome_t *create_palindrome_from_palindrome(int palindrome_number) {

    if (palindrome_number < 0)
        return (NULL);
    palindrome_t *palindrome = malloc(sizeof(palindrome_t));

    palindrome->number = -1;
    palindrome->palindrom_res = palindrome_number;
    palindrome->base = 10;
    palindrome->max = 100;
    palindrome->min = 0;
    return (palindrome);
}

palindrome_t *create_palindrome(arguments_t *args) {
    palindrome_t *palindrome = malloc(sizeof(palindrome_t));

    palindrome->number = args->n;
    palindrome->palindrom_res = args->p;
    palindrome->base = args->b;
    palindrome->max = args->imax;
    palindrome->min = args->imin;
    return (palindrome);
}