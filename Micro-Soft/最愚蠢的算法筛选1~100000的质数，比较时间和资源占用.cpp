#include <stdio.h> 
#include <time.h>

void main()
{
	//定义j和IsPrime变量
	int j;
	int IsPrime;
	int AllPrime = 0;
	int TurePrime;
	//提示
	printf("将开始筛选用最愚蠢的算法筛选1~100000的质数，比较时间与资源占用！任意键继续！\n");
	printf("版权所有 童年是个风筝,sctop\n");
	getchar();
	//开始计时
	clock_t begin, end;
	double cost;
	begin = clock();
	//for循环进入主程序
	for (int i = 2; i < 100001; i++)
	{
		IsPrime = 1;
		j = 2;
		while (j == i)
		{
			if (j%i == 0)
			{
				IsPrime = 0;
			}
			j++;
		}
		if (IsPrime == 1)
		{
			printf("%d ", i);
			AllPrime++;
		}
	}
	//结束计时
	end = clock();
	cost = (double)(end - begin);
	double RunTime = cost / 1000;
	TurePrime = 100000 - AllPrime;
	//提示并且获取一个键后退出
	printf("\n有效质数（1~100000）个数为%d个；无效质数有%d个。",AllPrime,TurePrime);
	printf("\n本次程序运行了 %lf 秒。任意键退出。\n", RunTime);
	getchar();
}
