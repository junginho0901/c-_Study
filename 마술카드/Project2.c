#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>

int main(void)
	{
	FILE* fp;
	int max = 0, min = 0;
	int  just_box = 0;
	int number_time = 0;
	fp = fopen("numbers.txt", "r");
	if (fp == NULL)
	{
		printf("파일열기 실패\n");
		return 0;
	}
	else
	{
		while (fscanf(fp, "%d", &just_box) != EOF)
		{
			number_time++;
		}

	}
	int* array;
	array = (int*)malloc(sizeof(int) * number_time);
	rewind(fp);

	if (fp == NULL)
	{
		printf("파일열기 실패\n");
		return 0;
	}
	else
	{
		int i = 0;
		while (fscanf(fp, "%d", &array[i]) != EOF)
		{
			i++;
		}

		int j, k, temp;
		for (j = 1; j < number_time; j++)
		{
			for (k = 1; k < number_time - 1; k++)
			{
				if (array[k] > array[k + 1]) //연달아있는 두수중 앞에 있는수가 크다면
				{
					//위치 변경
					temp = array[k];
					array[k] = array[k + 1];
					array[k + 1] = temp;
				}
			}
		}
	}

	for (int i = 0; i < number_time; i++)
	{
		printf("%d  ", array[i]);

	}

	min = array[1];
	max = array[number_time - 1];
	printf("\n\n");

	rewind(fp);
	if (fp == NULL)
	{
		printf("파일열기 실패\n");
		return 0;
	}
	else
	{
		int line;
		int number_box;
		fscanf(fp, "%d", &line);
		printf("%d개의 데이터 만큼씩 한 줄에 출력\n", line);
		printf("\n");
		for (int i = 0; i < line; i++)
		{
			printf("\t%d", i + 1);
		}
		printf("\n");
		for (int i = 0; i < line; i++)
		{
			printf("=========");
		}
		printf("\n");

		int* min_location;
		min_location = (int*)malloc(sizeof(int) * number_time);
		for (int i = 0; i < number_time; i++)
		{
			min_location[i] = 100;
		}

		int* max_location;
		max_location = (int*)malloc(sizeof(int) * number_time);
		for (int i = 0; i < number_time; i++)
		{
			max_location[i] = 100;
		}

		int time = 0;
		int j = 0;
		while (fscanf(fp, "%d", &number_box) != EOF)
		{

			printf("\t%d", number_box);

			
			if (number_box == min)
			{
				min_location[j] = time;
			}
			if (number_box == max)
			{
				max_location[j] = time;
			}
			j++;
			time++;
			if (time == line|| feof(fp))
			{
				printf("\n");

				//여기에 최소값 최대값 표시 코드
				printf("\t");
				for (int i = 0; i < line; i++)
				{
					
					if (i == min_location[i])
					{
						printf("최소값");

					}
					if (i == max_location[i])
					{
						printf("최대값");

					}
					printf("\t");

				}
				for (int i = 0; i < number_time; i++)
				{
					min_location[i] =100;
				}
				for (int i = 0; i < number_time; i++)
				{
					max_location[i] = 100;
				}

				if (j == line)
				{
					j = 0;
				}


				time = 0;
				printf("\n");
			}
		}
	}

	fclose(fp);

	return 0;
}
