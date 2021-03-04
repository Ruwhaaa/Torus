/*
** EPITECH PROJECT, 2018
** include.h
** File description:
** include
*/

#ifndef INCLUDE_H
#define INCLUDE_H_

struct argument
{
	int len0;
	int len1;
	int len2;
	int len3;
	int len4;
	int opt;
	char *a0;
	char *a1;
	char *a2;
	char *a3;
	char *a4;
	int n;
};

struct calcul
{
	int P;
};

int my_putstr(char const *str);
void my_putchar(char c);
void display_nbr(int n, int b, int nb);
int my_getnbr(char const *str);
int my_put_nbr(int nb);
char *my_revstr(char *str);
void number(int nb, char *str);
int decimal_nbr(char *str);
void arg_len(struct argument *math, char **argv);
void arg_len2(struct argument *math, int index);
void init_char(struct argument *math, char **argv);
void attribution(struct argument *math, char **argv);
int error_recognition(struct argument *math);
int torus(struct calcul *calc, struct argument *math);

#endif /* INCLUDE_H */
