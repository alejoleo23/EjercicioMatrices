#pragma once
#include <random>
ref class OPERACIONES
{
public:
	int tamaño;
public:
	void CargarVector(int [],int );
	OPERACIONES();
};

void OPERACIONES::CargarVector(int v[], int t) {
	if (t >= 1)
	{
		v[t] = rand() % 10+1;
		CargarVector(v, t - 1);
	}
}

OPERACIONES::OPERACIONES()
{
}
