#include "mono_Vector.h"

struct MoVector2i createMono2i(int x, int y)
{
	struct MoVector2i vec;
	vec.x = vec.val;
	vec.y = vec.val + 1;
	*(vec.x) = x;
	*(vec.y) = y;
	return vec;
}
