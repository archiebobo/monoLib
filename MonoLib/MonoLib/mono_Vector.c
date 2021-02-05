#include "mono_Vector.h"
#include "math.h"
#include "stdlib.h"

mo_veci VectorIAdd(int dim, mo_veci a, mo_veci b)
{
	mo_veci vec = (mo_veci)calloc(dim, 4);
	if (vec != 0)
		for (int i = 0; i < dim; i++)
		{
			vec[i] = a[i] + b[i];
		}
	return vec;
}
