// ������� 5: �������� ���������, �������������� ����� ����� �������� student ��������� � ��������� �����������(��������, ������ � �.�.).

#include "stdafx.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	struct student
	{
		char famil[11];
		char name[11], facult[6];
		char Nomzach[6];
	} stud[10];

	char param[22];
	char search[11];
	int searchzach = 0, somebody = 0;
	

	strcpy(stud[0].famil, "������"); strcpy(stud[0].name, "����");strcpy(stud[0].facult, "���");strcpy(stud[0].Nomzach, "12345");
	strcpy(stud[1].famil, "��������"); strcpy(stud[1].name, "������");strcpy(stud[1].facult, "���");strcpy(stud[1].Nomzach, "18423");
	strcpy(stud[2].famil, "������"); strcpy(stud[2].name, "��������");strcpy(stud[2].facult, "�����");strcpy(stud[2].Nomzach, "18324");
	strcpy(stud[3].famil, "�������"); strcpy(stud[3].name, "����������");strcpy(stud[3].facult, "����");strcpy(stud[3].Nomzach, "20243");
	strcpy(stud[4].famil, "������"); strcpy(stud[4].name, "��������");strcpy(stud[4].facult, "���");strcpy(stud[4].Nomzach, "21423");
	strcpy(stud[5].famil, "����������"); strcpy(stud[5].name, "�����");strcpy(stud[5].facult, "���");strcpy(stud[5].Nomzach, "18638");
	strcpy(stud[6].famil, "��������"); strcpy(stud[6].name, "�����");strcpy(stud[6].facult, "���");strcpy(stud[6].Nomzach, "19683");
	strcpy(stud[7].famil, "��������"); strcpy(stud[7].name, "�����");strcpy(stud[7].facult, "���");strcpy(stud[7].Nomzach, "19836");
	strcpy(stud[8].famil, "���������"); strcpy(stud[8].name, "���������");strcpy(stud[8].facult, "����");strcpy(stud[8].Nomzach, "21863");
	strcpy(stud[9].famil, "��������"); strcpy(stud[9].name, "�����");strcpy(stud[9].facult, "����");strcpy(stud[9].Nomzach, "16345");
	//printf("��������� ���������: �������, ���, ���������, ����� �������� ������\n");
	/*printf("������� ��������, �� �������� ������� ��������� �����: ");
	gets_s(param);
	
	while ((strcmp(param, "�������") != 0) && (strcmp(param, "���") != 0) && (strcmp(param, "���������") != 0) && (strcmp(param, "����� �������� ������") != 0))
	{
		printf("\n������ ��������� �� ����������!\n��������� ���������: �������, ���, ���������, ����� �������� ������\n(������� � ������� ����� ��� ������� � �����)\n");
		printf("\n������� ��������, �� �������� ������� ��������� �����: ");
		gets_s(param);
	}*/

	/*printf("%s ��������: ", param);
	if (strcmp(param, "����� �������� ������")==0)
		scanf_s("%d", &searchzach);
	else
		gets_s(search);*/

	printf("������ ��������: ");
	gets_s(search);

	printf("\n\n����������:\n");
	printf("    �������\t\t���\t���������\t����� �������� ������\n");
	printf("   __________________________________________________________________\n");

	for (int i = 0; i < 10; i++)
			if ((strcmp(search, stud[i].famil) == 0)||(strcmp(search, stud[i].name) == 0)||(strcmp(search, stud[i].facult) == 0)||(strcmp(search, stud[i].Nomzach) == 0))
			{
				somebody = 1;
				printf("%12s\t%12s\t%4s\t\t%s\n", stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
			}

	/*if (searchzach != 0)
	{
		for (int i = 0; i < 10; i++)
			if (stud[i].Nomzach == searchzach)
			{
				somebody = 1;
				printf("%12s\t%12s\t%4s\t\t%d\n", stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
			}
	}

	if (strcmp(param, "�������") == 0)
	{
		for (int i = 0; i < 10; i++)
			if (strcmp(search, stud[i].famil) == 0)
			{
				somebody = 1;
				printf("%12s\t%12s\t%4s\t\t%d\n", stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
			}
	}

	if (strcmp(param, "���") == 0)
	{
		for (int i = 0; i < 10; i++)
			if (strcmp(search, stud[i].name) == 0)
			{
				somebody = 1;
				printf("%12s\t%12s\t%4s\t\t%d\n", stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
			}
	}

	if (strcmp(param, "���������") == 0)
	{
		for (int i = 0; i < 10; i++)
			if (strcmp(search, stud[i].facult) == 0)
			{
				somebody = 1;
				printf("%12s\t%12s\t%4s\t\t%d\n", stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
			}
	}*/

	if (somebody == 0)
		printf("\n\t\t�������� � ������ ������� �� �������!\n\n\n");
	Sleep(1000000);
}