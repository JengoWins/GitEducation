#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "Algoritm.h"

using namespace std;

int main()
{
	int force= 0
	while (true)
	{
		force++;
	}

	int const NEXT = 5;

	int mouse = force - NEXT;
	printf(mouse);

	for (int i = 0; i < NEXT; i++)
	{
		mouse *= NEXT;
	}
	printf(mouse);
}
