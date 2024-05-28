/*
** EPITECH PROJECT, 2023
** B-SYN-200-MPL-1-1-palindrome-edgar1.maurel
** File description:
** my_getnbr.c
*/

#include "palindrome.h"

int my_getnbr(char *str)
{
    int i = 0;
    int res = 0;
    int sign = 1;

    if (str[0] == '-') {
        sign = -1;
        i++;
    }
    while (str[i] != '\0') {
        if (str[i] < '0' || str[i] > '9')
            return -1;
        res = res * 10 + str[i] - '0';
        i++;
    }
    if (sign < 0)
        return -1;
    return (res * sign);
}
