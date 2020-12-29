#include <iostream>
#include <Windows.h>

using namespace std;

typedef int inform;

struct Spusok
{
	Spusok* link1;
	inform inf;
};

void Create(Spusok*& first, Spusok*& last, inform inf);
void COUT(Spusok*& T);
void Process(Spusok*& T, int x);

int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Spusok* first = NULL;
	Spusok* last = NULL;

	for (int i = 0; i < 4; i++)
		Create(first, last, i);

	Spusok* T = first;
	COUT(T);
	T = first;

	int x;
	cout << "������ ��������, ��� �������� �������� �������������� ���� ������� ��������: ";
	cin >> x;
	Process(T, x);

	return 0;
}

void Create(Spusok*& first, Spusok*& last, inform inf)
{
	Spusok* tmp = new Spusok;

	tmp->inf = inf;
	tmp->link1 = NULL;
	if (first == NULL)
		first = tmp;
	else
		last->link1 = tmp;
	last = tmp;
}

void COUT(Spusok*& T)
{
	inform inf;

	cout << "���� ���������� ��� ����� ����������� �������: " << endl << endl;
	while (T != NULL)
	{
		inf = T->inf;
		cout << inf << "   ";
		T = T->link1;
	}
	cout << endl << endl;
}

void Process(Spusok*& T, int x)
{
	inform inf;

	cout << endl;
	cout << "���� ���������� ��� ����� ������������� ������� " << endl << endl;
	while (T != NULL)
	{
		inf = T->inf;            // 1(���������� ��������� �������� �������� � ������ � ����� 'inf')
		T->inf = inf + x;        // 2(����� ������������� ��������(�������� �� 'x') � ������� ������)
		cout << T->inf << "   ";
		T = T->link1;            // 3(������� ��������� �� �������� ������� ��� ��������� �������� � ��������� ��������)
	}
	cout << endl;
}
