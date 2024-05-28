/*
** EPITECH PROJECT, 2023
** B-SYN-200-MPL-1-1-palindrome-edgar1.maurel
** File description:
** generate_palindrome.c
*/

#include "palindrome.h"

void generate_palindrome(palindrome_t *palindrome)
{
    int a = palindrome->number;
    while (!check_palindrome(a, palindrome->base) || palindrome->iteration < palindrome->min) {
        int b = 0;
        int c = a;
        while (a != 0) {
            b = b * palindrome->base + a % palindrome->base;
            a = a / palindrome->base;
        }
        a = c + b;
        palindrome->iteration++;
        if (palindrome->iteration > palindrome->max)
            break;
    }
    palindrome->palindrom_res = a;
    if (palindrome->iteration > palindrome->max) {
        printf("no solution\n");
        palindrome->palindrom_res = -1;
    }
}

void generate_specific_palindrome(palindrome_t *palindrome)
{
    int a = palindrome->number;
    while (!check_palindrome(a, palindrome->base) || a != palindrome->palindrom_res || palindrome->iteration < palindrome->min) {
        int b = 0;
        int c = a;
        while (a != 0) {
            b = b * palindrome->base + a % palindrome->base;
            a = a / palindrome->base;
        }
        a = c + b;
        palindrome->iteration++;
        if (palindrome->iteration > palindrome->max)
            break;
    }
    palindrome->palindrom_res = a;
    if (palindrome->iteration > palindrome->max) {
        palindrome->palindrom_res = -1;
    }
}

void find_all_numbers(palindrome_t *palindrome)
{
    int temp = palindrome->palindrom_res;
    for (int i = 0; i <= temp; i++) {
        palindrome->iteration = 0;
        palindrome->number = i;
        palindrome->palindrom_res = temp;
        generate_specific_palindrome(palindrome);
        if (palindrome->palindrom_res == temp)
            printf("%d leads to %d in %d iteration(s) in base %d\n",
            palindrome->number, palindrome->palindrom_res, palindrome->iteration, palindrome->base);
    }
}