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
				free(*line[1]);
			if (*line[0] != 0)
				free(*line[0]);
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
				free(*line[1]);
			if (*line[0] != 0)
				free(*line[0]);
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

float getLineILength(mo_linei line, mo_dim dim)
{
	int sum = 0;
	for (int i = 0; i < dim; i++)
	{
		sum += pow(line[0][i] - line[1][i], 2);
	}
	return sqrtf(sum);
}

float getLineFLength(mo_linef line, mo_dim dim)
{
	float dx = line[0][0] - line[1][0];
	float dy = line[0][1] - line[1][1];
	float dz = line[0][2] - line[1][2];
	return sqrtf((powf(dx, 2) + powf(dy, 2) + powf(dz, 2)));
}

double getLineDLength(mo_lined line, mo_dim dim)
{
	double dx = line[0][0] - line[1][0];
	double dy = line[0][1] - line[1][1];
	double dz = line[0][2] - line[1][2];
	return sqrt((pow(dx, 2) + pow(dy, 2) + pow(dz, 2)));
}
