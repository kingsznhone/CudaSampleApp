// MyApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "CudaLib.cuh"

int main()
{
	int n = 5;
	int *in = new int[n];
	int *out = new int[n];

	for (int i = 0; i < n; i++) in[i] = i;

	CudaLib::complexCalcFast(in, out, n);

	for (int i = 0; i < n; i++) {
		printf("%d -> %d\n", in[i], out[i]);
	}
	CudaLib::complexCalcOriginal(in, out, n);

	for (int i = 0; i < n; i++) {
		printf("%d -> %d\n", in[i], out[i]);
	}

	delete in;
	delete out;

    return 0;
}

