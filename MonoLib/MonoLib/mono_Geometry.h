#pragma once
#ifndef _MONO_GEOMETRY_H_
#define _MONO_GEOMETRY_H_

#include "mono_Common.h"
#include "mono_IO.h"

struct mo_geometry
{
	void* geometry;
	mono_type type;
	void (*write)(FILE* file, void* geometry, mo_dim dim);
	void (*read)(FILE* file, void* geometry, mo_dim dim);
	char* (*str)();
};

typedef struct mo_geometry MO_Geometry;



#endif // !_MONO_GEOMETRY_H_

