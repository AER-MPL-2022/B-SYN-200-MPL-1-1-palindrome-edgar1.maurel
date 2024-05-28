/*
** EPITECH PROJECT, 2023
** B-SYN-200-MPL-1-1-palindrome-edgar1.maurel
** File description:
** check_palindrome.c
*/

#include "palindrome.h"

int check_palindrome(int a, int base)
{
    int b = 0;
    int c = a;

    while (a != 0) {
        b = b * base + a % base;
        a = a / base;
    }
    if (c == b)
        return (1);
    return (0);
}