#include "mono_Vector.h"

struct MoVec2i createVector2i(int x, int y)
{
	struct MoVec2i vec;
	vec.x = vec.val;
	vec.y = vec.val + 1;
	*(vec.x) = x;
	*(vec.y) = y;
	return vec;
}

struct MoVec3i createVector3i(int x, int y, int z)
{
	struct MoVec3i vec;
	vec.x = vec.val;
	vec.y = vec.val + 1;
	vec.z = vec.val + 2;
	*(vec.x) = x;
	*(vec.y) = y;
	*(vec.z) = z;
	return vec;
}

int * exportVector3i(struct MoVec2i vec)
{
	return vec.val;
}
