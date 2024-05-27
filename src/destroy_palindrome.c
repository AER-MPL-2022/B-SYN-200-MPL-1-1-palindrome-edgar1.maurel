/*
** EPITECH PROJECT, 2023
** B-SYN-200-MPL-1-1-palindrome-edgar1.maurel
** File description:
** destroy_palindrome.c
*/

#include "palindrome.h"

void destroy_palindrome(palindrome_t *palindrome)
{
    free(palindrome);
}
