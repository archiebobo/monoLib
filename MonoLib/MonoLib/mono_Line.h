#pragma once

#ifndef _MONO_LINE_H_
#define _MONO_LINE_H_

#include "mono_Vector.h"
#include "stdlib.h"

typedef mo_veci* mo_linei;
typedef mo_vecf* mo_linef;
typedef mo_vecd* mo_lined;

void mo_CreateLineI(mo_linei* line, mo_veci from, mo_veci to);

void mo_CreateLineF(mo_linef* line, mo_vecf from, mo_vecf to);

void mo_CreateLineD(mo_lined* line, mo_vecd from, mo_vecd to);

void mo_DisposeLineI(mo_linei* line, bool deepDispose);

void mo_DisposeLineF(mo_linef* line, bool deepDispose);

void mo_DisposeLineD(mo_lined* line, bool deepDispose);



#endif // !_MONO_LINE_H_
