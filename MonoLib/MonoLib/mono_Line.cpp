#include "mono_Line.h"

void mo_CreateLineI(mo_linei* line, mo_veci from, mo_veci to)
{
	*line = (mo_linei)malloc(sizeof(mo_veci) * 2);
	if (*line != 0)
	{
		(*line)[0] = from;
		(*line)[1] = to;
	}
}

void mo_CreateLineF(mo_linef* line, mo_vecf from, mo_vecf to)
{
	*line = (mo_linef)malloc(sizeof(mo_vecf) * 2);
	if (*line != 0)
	{
		*line[0] = from;
		*line[1] = to;
	}
}

void mo_CreateLineD(mo_lined* line, mo_vecd from, mo_vecd to)
{
	*line = (mo_lined)malloc(sizeof(mo_vecd) * 2);
	if (*line != 0)
	{
		*line[0] = from;
		*line[1] = to;
	}
}

void mo_DisposeLineI(mo_linei* line, bool deepDispose)
{
	if (deepDispose)
	{
		if (*line != 0)
		{
			if (*line[1] != 0)
				free(line[1]);
			if (*line[0] != 0)
				free(line[0]);
		}
	}
	free(line);
}

void mo_DisposeLineF(mo_linef* line, bool deepDispose)
{
	if (deepDispose)
	{
		if (*line != 0)
		{
			if (*line[1] != 0)
				free(line[1]);
			if (*line[0] != 0)
				free(line[0]);
		}
	}
	free(line);
}

void mo_DisposeLineD(mo_lined* line, bool deepDispose)
{
	if (deepDispose)
	{
		if (*line != 0)
		{
			if (*line[1] != 0)
				free(line[1]);
			if (*line[0] != 0)
				free(line[0]);
		}
	}
	free(line);
}
