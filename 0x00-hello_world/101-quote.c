#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

/**
 * main - print string without using printf or puts
 *
 * Return: 1 (error)
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}

