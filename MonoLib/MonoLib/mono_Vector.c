#include "mono_Vector.h"
#include "math.h"
#include "stdlib.h"

/*1，提取mo_veci vecPtr
 *2，赋值 movec2i 一个数组，两个指针
 *3，
*/

struct MoVec2i addVec2i(struct MoVec2i a, struct MoVec2i b)
{	
	//no debug
	a.val[0] = a.val[0] + b.val[0];
	a.val[1] = a.val[1] + b.val[1];
	a.x = &(a.val[0]);
	a.y = &(a.val[1]);
	return a;
}

struct MoVec2i subsVec2i(struct MoVec2i a, struct MoVec2i b)
{
	//no debug
	a.val[0] = a.val[0] - b.val[0];
	a.val[1] = a.val[1] - b.val[1];
	a.x = &(a.val[0]);
	a.y = &(a.val[1]);
	return a;
}

bool equalsVec2f(struct MoVec2f* a, struct MoVec2f* b, bool forceValue)
{
	if (
		fabsf(*a->x) - fabsf(*b->x) > S_TOLERENCE &&
		fabsf(*(a->y)) - fabsf(*(b->y)) > S_TOLERENCE
		)
	{
		return 0;
	}
	if (forceValue)
	{
		*b = *a;
	}
	return 1;
}

void createVector3i(struct MoVec3i* vec, int x, int y, int z)
{
	vec->x = vec->val;
	vec->y = vec->val + 1;
	vec->z = vec->val + 2;
	*(vec->x) = x;
	*(vec->y) = y;
	*(vec->z) = z;
}

mo_veci exportVector3i(struct MoVec3i vec)
{
	mo_veci p_vec;
	p_vec = (mo_veci)malloc(3 * sizeof(int));
	if (p_vec != 0)
	{
		p_vec[0] = *vec.x;
		p_vec[1] = *vec.y;
		p_vec[2] = *vec.z;
	}
	return p_vec;
}

void createVector2d(struct MoVec2d* vec, double x, double y)
{
	vec->x = vec->val;
	vec->y = vec->val + 1;
	*(vec->x) = x;
	*(vec->y) = y;
}

void createVector2f(struct MoVec2f* vec, float x, float y)
{
	vec->x = vec->val;
	vec->y = vec->val + 1;
	*(vec->x) = x;
	*(vec->y) = y;
}
