#pragma once

#ifndef _MONO_VECTOR_H_
#define _MONO_VECTOR_H_

struct MoVec2i
{
	int val[2];
	int* x;
	int* y;
};

struct MoVec2f {};

struct MoVec2d {};

struct MoVec3i
{
	int val[3];
	int* x;
	int* y;
	int* z;
};

struct MoVec3f {};

struct MoVec3d {};

struct MoMat33f {};

struct MoMat33d {};

struct MoMat44f {};

struct MoMat44d {};

//MoVector2i ���캯��
//x: x����
//y: y����
struct MoVec2i createVector2i(int x, int y);

//MoVector3i ���캯��
//x: x����
//y: y����
//z: z����
struct MoVec3i createVector3i(int x, int y, int z);

int* exportVector3i(struct MoVec2i vec);
#endif // !_MONO_VECTOR_H_
