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

void OPERACIONES::CargaMatrizTridiagonal(int m[][50], int fil, int col, int tama�o)
{
	int x = fil - col;
	if (fil >= 1)
	{
		if (col >= 1)
		{
			if (x == 1 || x == -1 || x == 0)
			{
				m[fil][col] = rand() % 20 + 11;
				CargaMatrizTridiagonal(m, fil, col - 1, tama�o);
			}
			else
			{
				m[fil][col] = 0;
				CargaMatrizTridiagonal(m, fil, col - 1, tama�o);
			}
		}
		else
			CargaMatrizTridiagonal(m, fil - 1, tama�o, tama�o);
	}
}

OPERACIONES::OPERACIONES()
{
}
