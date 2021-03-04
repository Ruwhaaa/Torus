/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "include.h"

int main(int argc, char **argv)
{
	if (argc != 8) {
		return (84);
	}
	if (argc == 8) {
		struct argument math;
		arg_len(&math, argv);
	}
	return (0);
}
