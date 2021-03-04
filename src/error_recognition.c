/*
** EPITECH PROJECT, 2018
** error_recognition.c
** File description:
** recognition
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "include.h"

int error_recognition(struct argument *math)
{
	if (math->opt < 1) {
		return (84);
	}
	if (math->opt > 3) {
		return (84);
	}
	struct calcul calc;
	torus(&calc, math);
	return (0);
}
