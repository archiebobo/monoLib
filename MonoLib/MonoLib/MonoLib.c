// MonoLib.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "mono_Vector.h"
#include "stdio.h"
#include "mono_IO.h"
#include "stdlib.h"

int main()
{
	int* vec1 = (int*)malloc(sizeof(int) * 3);
	mo_vecf vec2 = (mo_vecf)malloc(sizeof(float) * 3);
	mo_vecd vec3 = (mo_vecd)malloc(sizeof(double) * 3);

	if (vec1 != 0)
	{
		vec1[0] = 1;
		vec1[1] = 2;
		vec1[2] = 3;
	}
	if (vec2 != 0)
	{
		vec2[0] = 1;
		vec2[1] = 2;
		vec2[2] = 3;
	}
	if (vec3 != 0)
	{
		vec3[0] = 1;
		vec3[1] = 2;
		vec3[2] = 3;
	}

	FILE* f;
	fopen_s(&f, "C:\\Users\\pro_e\\Desktop\\newFile", "wb");
	WriteVectorI(f, vec1, 3);
	if (f != 0)
		fclose(f);

	mo_veci tvec = (mo_veci)malloc(sizeof(float) * 3);
	fopen_s(&f, "C:\\Users\\pro_e\\Desktop\\newFile", "r");
	mono_type ttype;
	if (f != 0)
	{
		if (fread(&ttype, 2, 1, f))
		{
			if (ttype == m_veci_name)
			{
				ReadVectorI(f, tvec, 3);
			}
		}
		fclose(f);
	}
	if (tvec != 0)
		printf("%d，%d，%d", tvec[0], tvec[1], tvec[2]);
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
