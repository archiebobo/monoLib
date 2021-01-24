﻿// MonoLib.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "mono_Vector.h"
#include "stdio.h"
#include "mono_IO.h"
#include "stdlib.h"
#include "stdarg.h"
#include "mono_Line.h"

mo_veci mo_create_veci(mo_dim dim, ...)
{
	mo_veci vec = (mo_veci)malloc(sizeof(int) * 3);
	if (vec == 0)
	{
		return 0;
	}
	va_list list;
	va_start(list, dim);
	for (int i = 0; i < dim; i++)
	{
		vec[i] = va_arg(list, int);
	}
	va_end(list);
	return vec;
}

int main()
{
	mo_veci vec1 = mo_create_veci(3, 6, 8, 0);
	mo_veci vec2 = mo_create_veci(3, 0, 0, 0);
	mo_linei line1;
	mo_CreateLineI(&line1, vec1, vec2);
	printf("%f", getLineILength(line1, 2));
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
