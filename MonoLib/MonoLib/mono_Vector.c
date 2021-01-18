#include "mono_Vector.h"
#include "math.h"
#include "stdlib.h"

void createVector2i(struct MoVec2i* vec, int x, int y)
{
	vec->x = vec->val;
	vec->y = vec->val + 1;
	*(vec->x) = x;
	*(vec->y) = y;
	return vec;
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
