#include<locale.h>
#include<stdio.h>
#include<iostream>
#include<time.h>
#include<math.h>
#include"Header.h"

void Nummber(int N, int M)
{
	int NUmber=N+M;
	printf("%d\n", NUmber);
}
void shestnad(int shest)
{
	int chislo = 0;
	int chislo2;
	int flag = 0;
	while (shest > 0)
	{
		if (shest < 10)
		{
			chislo = shest;
			shest = 0;
			printf("%d", chislo);
		}
		else {
			if (shest > 16)
			{
				chislo = shest / 16;
				shest %= 16;
			}
			else
			{
				chislo = shest;
				shest = 0;
			}
			if (chislo < 10)
			{
				printf("%d", chislo);
			}
			else if (chislo > 9 && chislo < 16)
			{
				switch (chislo)
				{
				case 10:
					printf("A");
					break;
				case 11:
					printf("B");
					break;
				case 12:
					printf("C");
					break;
				case 13:
					printf("D");
					break;
				case 14:
					printf("E");
					break;
				case 15:
					printf("F");
					break;
				}
			}
			else
			{
				while (chislo > 0)
				{
					if (chislo % 16 == 0)
						flag = 1;
					chislo2 = chislo / 16;
					chislo %= 16;

					if (chislo2 < 10)
					{
						printf("%d", chislo2);
					}
					if (chislo < 10)
					{
						printf("%d", chislo);
						chislo = 0;
					}
					else if (chislo > 9 && chislo < 16)
					{
						switch (chislo)
						{
						case 10:
							printf("A");
							break;
						case 11:
							printf("B");
							break;
						case 12:
							printf("C");
							break;
						case 13:
							printf("D");
							break;
						case 14:
							printf("E");
							break;
						case 15:
							printf("F");
							break;
						}
						chislo = 0;
					}
				}
				if (flag == 1)
					printf("0");
			}
		}
	}
	printf("\n");
}

void vrem()
{
	int HH;
	char f;
	int MM;

	printf("Введите время в формате HH:MM");
	scanf("%d%c%d", &HH,&f, &MM);
	
	if (f == ':')
	{
		printf("%d:%d\n", HH, MM);
	}
	else
	{
		vrem();
	}
	}

void vozrast()
{
	int God;
	printf("Введите возраст");
	scanf("%d", &God);
	if (God > 18 && God < 30)
	{
		printf("Возраст %d\n", God);

	}
	else
	{
		vozrast();
	}

}

void  Posle()
{
	int chislo=1;
	int summ=0;
	int max = 0;
while(scanf("%d", &chislo)==1)
	{
	/*	printf("Введите число");
		scanf("%d", &chislo);*/
		if (max < chislo)
			max = chislo;
		summ += chislo;
	}
printf("сумма =%d, максимальное число=%d", summ, max);
}