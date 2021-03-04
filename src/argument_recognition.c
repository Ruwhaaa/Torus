/*
** EPITECH PROJECT, 2018
** argument_recognition.c
** File description:
** argument recognition
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "include.h"

void arg_len(struct argument *math, char **argv)
{
	int arg = 2;
	int index = 0;
	math->len0 = 0;
	math->len1 = 0;
	math->len2 = 0;
	math->len3 = 0;
	math->len4 = 0;

	while (arg != 7) {
		while (argv[arg][index] != '\0') {
			arg_len2(math, index);
			index++;
		}
		arg = arg + 1;
		index = 0;
	}
	init_char(math, argv);
}

void arg_len2(struct argument *math, int index)
{
	if (index == 2) {
		math->len0 = math->len0 + 1;
	}
	if (index == 3) {
		math->len1 = math->len1 + 1;
	}
	if (index == 4) {
		math->len1 = math->len1 + 1;
	}
	if (index == 5) {
		math->len1 = math->len1 + 1;
	}
	if (index == 6) {
		math->len1 = math->len1 + 1;
	}
}
void init_char(struct argument *math, char **argv)
{
	math->a0 = malloc(sizeof(char) * math->len0);
	math->a1 = malloc(sizeof(char) * math->len1);
	math->a2 = malloc(sizeof(char) * math->len2);
	math->a3 = malloc(sizeof(char) * math->len3);
	math->a4 = malloc(sizeof(char) * math->len4);
	attribution(math, argv);
}

void attribution(struct argument *math, char **argv)
{

	math->opt = atoi(argv[1]);
	math->a0 = argv[2];
	math->a1 = argv[3];
	math->a2 = argv[4];
	math->a3 = argv[5];
	math->a4 = argv[6];
	math->n = atoi(argv[7]);
	error_recognition(math);
}
