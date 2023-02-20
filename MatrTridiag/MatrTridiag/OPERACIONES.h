#pragma once
#include <random>
ref class OPERACIONES
{
public:
	int orden;
public:
	void CargaMatrizTridiagonal(int[][50], int, int, int);
	OPERACIONES();
};

void OPERACIONES::CargaMatrizTridiagonal(int m[][50], int fil, int col, int tamaño)
{
	int x = fil - col;
	if (fil >= 1)
	{
		if (col >= 1)
		{
			if (x == 1 || x == -1 || x == 0)
			{
				m[fil][col] = rand() % 20 + 11;
				CargaMatrizTridiagonal(m, fil, col - 1, tamaño);
			}
			else
			{
				m[fil][col] = 0;
				CargaMatrizTridiagonal(m, fil, col - 1, tamaño);
			}
		}
		else
			CargaMatrizTridiagonal(m, fil - 1, tamaño, tamaño);
	}
}

OPERACIONES::OPERACIONES()
{
}
