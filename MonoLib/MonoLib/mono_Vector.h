#pragma once

#ifndef _MONO_VECTOR_H_
#define _MONO_VECTOR_H_

#include "mono_Common.h"

typedef int* mo_veci;
typedef int** mo_vecArrayi;
typedef float* mo_vecf;
typedef float** mo_vecArrayf;
typedef double* mo_vecd;
typedef double** mo_vecArrayd;
typedef float** mo_matf;
typedef double** mo_matd;

struct MoVec2i
{
	int val[2];
	int* x;
	int* y;
};

struct MoVec2f
{
	float val[2];
	float* x;
	float* y;
};

struct MoVec2d
{
	double val[2];
	double* x;
	double* y;
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

struct MoVec3d
{
	double val[3];
	double* x;
	double* y;
	double* z;
};

struct MoMat33f
{
	float val[3][3];
	float** r1;
	float** r2;
	float** r3;
};

struct MoMat33d
{
	double val[3][3];
	double** r1;
	double** r2;
	double** r3;
};

struct MoMat44f
{
	float val[4][4];
	float** r1;
	float** r2;
	float** r3;
	float** r4;
};

struct MoMat44d
{
	double val[4][4];
	double** r1;
	double** r2;
	double** r3;
	double** r4;
};


//Functions of Vector2i
/* MoVector2i 构造函数
* x: x坐标
* y: y坐标
*/
void createVector2i(struct MoVec2i* vec, int x, int y);

/*
* 从veci 建立Vector2i
*/
struct MoVec2i createVector2iFromVecPtr(mo_veci vecPtr);

/*
* 向量Vec2i加法
*/
struct MoVec2i addVec2i(struct MoVec2i a, struct MoVec2i b);

/*
* 向量Vec2i减法
*/
struct MoVec2i subsVec2i(struct MoVec2i a, struct MoVec2i b);
/*
* 向量Vec2i与标量乘法
*/
struct MoVec2i mulVec2i(struct MoVec2i vec, int mul);
/*
* 向量点乘积
*/
struct MoVec2i DotVec2i(struct MoVec2i a, struct MoVec2i b);
/*
* 向量长度
*/
double lenVec2i(struct MoVec2i vec);
/*
* 反转向量
*/
void invertVec2i(struct MoVec2i* vec);


//Functions of Vector2f
/* MoVector2f 构造函数
* x: x坐标
* y: y坐标
*/
struct MoVec2f createVector2f(float x, float y);

/*
* 从veci 建立Vector2f
*/
struct MoVec2f createVector2fFromVecPtr(mo_vecf vecPtr);

/*
* 向量Vec2f加法
*/
struct MoVec2f addVec2f(struct MoVec2f a, struct MoVec2f b);

/*
* 向量Vec2f减法
*/
struct MoVec2f subsVec2f(struct MoVec2f a, struct MoVec2f b);
/*
* 向量Vec2i与标量乘法
*/
struct MoVec2f mulVec2f(struct MoVec2f vec, int mul);
/*
* 向量点乘积
*/
struct MoVec2f DotVec2f(struct MoVec2f a, struct MoVec2f b);
/*
* 向量长度
*/
double lenVec2f(struct MoVec2f vec);
/*
* 反转向量
*/
void invertVec2f(struct MoVec2f* vec);
/*
* 单位化Vec2f
*/
void unitizeVec2f(struct MoVec2f* vec);
/*
* 判断两个向量是否相等
*/
bool equalsVec2f(struct MoVec2f* a, struct MoVec2f* b, bool forceValue);

//MoVector3i 构造函数
//x: x坐标
//y: y坐标
//z: z坐标
void createVector3i(struct MoVec3i* vec, int x, int y, int z);

mo_veci exportVector3i(struct MoVec3i vec);
#endif // !_MONO_VECTOR_H_
