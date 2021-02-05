#pragma once

#ifndef _MONO_VECTOR_H_
#define _MONO_VECTOR_H_

#include "mono_Common.h"

typedef int mo_dim;

typedef int* mo_veci;
typedef double* mo_vecd;

struct MoVec2i
{
	int* Vec;
	int* X;
	int* Y;
	void(*Read);
	void(*Write);
};
struct MoVec2d
{
	double* vec;
	double* x;
	double* y;
	void(*Read);
	void(*Write);
};
struct MoVec3d
{
	double val[3];
	double* x;
	double* y;
	double* z;
	void(*Read);
	void(*Write);
};
#pragma region  ²»×Å¼±
typedef float* mo_vecf;
struct MoVec2f
{
	float* val;
	float* x;
	float* y;
};
struct MoVec3i
{
	int val[3];
	int* x;
	int* y;
	int* z;
};
struct MoVec3f
{
	float val[3];
	float* x;
	float* y;
	float* z;
};
#pragma endregion

mo_veci CreateVectorI(mo_dim dim, int* vals);
mo_vecd CreateVectorD(mo_dim dim, double* vals);

mo_veci  VectorIAdd(mo_dim dim, mo_veci a, mo_veci b);
mo_vecd  VectorDAdd(mo_dim dim, mo_vecd a, mo_vecd b);

mo_veci  VectorISub(mo_dim dim, int a, mo_veci b);
mo_vecd  VectorDSub(mo_dim dim, double a, mo_vecd b);

mo_veci  VectorIMultiple(mo_dim dim, mo_veci a, mo_veci b);
mo_vecd  VectorDMultiple(mo_dim dim, mo_vecd a, mo_vecd b);

mo_veci  VectorIDot(mo_dim dim, mo_veci a, mo_veci b);
mo_vecd  VectorDDot(mo_dim dim, mo_vecd a, mo_vecd b);

mo_veci  VectorICross(mo_dim dim, mo_veci a, mo_veci b);
mo_vecd  VectorDCross(mo_dim dim, mo_vecd a, mo_vecd b);



void ReverseVectorI(mo_dim dim, mo_veci vec);
void ReverseVectorD(mo_dim dim, mo_vecd vec);

double VectorILength(mo_dim dim, mo_veci vec);
double VectorDLength(mo_dim dim, mo_vecd vec);

void UnitizeVectorI(mo_dim dim, mo_veci vec);
void UnitizeVectorD(mo_dim dim, mo_vecd vec);


#endif // !_MONO_VECTOR_H_