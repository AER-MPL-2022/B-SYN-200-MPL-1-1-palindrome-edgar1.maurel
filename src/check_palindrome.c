/*
** EPITECH PROJECT, 2023
** B-SYN-200-MPL-1-1-palindrome-edgar1.maurel
** File description:
** check_palindrome.c
*/

#include "palindrome.h"

int check_palindrome(int a)
{
    int b = 0;
    int c = a;

    while (a != 0) {
        b = b * 10 + a % 10;
        a = a / 10;
    }
    if (c == b)
        return (1);
    return (0);
}