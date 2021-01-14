#pragma once

#ifndef _MONO_VECTOR_H_
#define _MONO_VECTOR_H_




struct MoVector2i
{
	int val[2];
	int* x;
	int* y;
};
struct MoVecter3i 
{
	int val[3];
	int* x;
	int* y;
	int* z;
};
struct MoVector2i createMono2i(int x, int y);
struct MoVector3i createMono3i(int x, int y);

#endif // !_MONO_VECTOR_H_
