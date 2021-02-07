#pragma once

#ifndef _MONO_GEOMETRY_IO_H_
#define _MONO_GEOMETRY_IO_H_

#include "stdio.h"
#include "mono_Vector.h"

void WriteVectorI(FILE* file, mo_veci vector, mo_dim dim)
{
	fwrite(&m_veci_type, 2, 1, file);
	fwrite(vector, sizeof(int), dim, file);
}

void WriteVectorF(FILE* file, mo_vecf vector, mo_dim dim)
{
	fwrite(&m_vecf_type, 2, 1, file);
	fwrite(vector, sizeof(float), dim, file);
}

void WriteVectorD(FILE* file, mo_vecd vector, mo_dim dim)
{
	fwrite(&m_vecd_type, 2, 1, file);
	fwrite(vector, sizeof(double), dim, file);
}

void ReadVectorI(FILE* file, mo_veci vector, mo_dim dim)
{
	fread(vector, sizeof(int), 3, file);
}

void ReadVectorF(FILE* file, mo_vecf vector, mo_dim dim)
{
	fread(vector, sizeof(float), 3, file);
}

void ReadVectorD(FILE* file, mo_vecd vector, mo_dim dim)
{
	fread(vector, sizeof(double), 3, file);
}
#endif // !_MONO_GEOMETRY_IO_H_
