#pragma once
#include <random>
ref class OPERACIONES
{
public:
	int filas, columnas;
public:
	void CargarMatriz(int[][50], int, int, int);
	OPERACIONES();
};

void OPERACIONES::CargarMatriz(int m[][50],int f,int c,int tama�o)
{
	if (f >= 1)
	{
		if (c >= 1)
		{
			m[f][c] = rand() % 10 + 1;
			CargarMatriz(m, f, c - 1, tama�o);
		}
		else
			CargarMatriz(m, f - 1, tama�o, tama�o);
	}
}

OPERACIONES::OPERACIONES()
{
}
