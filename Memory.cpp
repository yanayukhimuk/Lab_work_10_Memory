#include "Memory.h"
using namespace std;

/*void Address(int n, Student students) {
	cout << "����� ������ ��������� �������� � ������: " << endl;
	for (int i = n - 1; i >= 0; --i) {
		cout << students + i << " ";
	}
}*/

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int amount_of_students = 3;
	Student Students[amount_of_students] = {}; // ����������� ������ 
	int n;
	cout << "������� ���������� ��������� ��� ������ �������";
	cin >> n;
	Student* students = new Student[n]; //������������ ������ 
	for (int i = 0; i < n; i++) {
		cout << "���: ";
		cin >> students->name;
		cout << "�������: ";
		cin >> students->surname;
		cout << "���������: ";
		cin >> students->faculty;
		cout << "������: ";
		cin >> students->group;
		cout << "Email: ";
		cin >> students->email;
		cout << endl;
	}
	Student firstStudent = *students;

	cout << "������ ������������ �������: " << sizeof(Students) / sizeof(Students[0]) << endl;
	cout << "������ ������������� �������: " << n << endl;

	cout << "����� ������ ��������� �������� � ������: " << endl;
	for (int i = n - 1; i >= 0; --i) {
		cout << students + i << " ";
	}
	cout << endl << "��������, �� ������� ���������� �������� ��������� ��� ����������: " << sizeof(students) << endl;

	cout << "������ ����� ���������: " << endl; // �������� (��������)
	// �������� 8.	������� ��������� � ����� �� ������� �����, �� ������ �������������������. �������� ������� ��������. ������� �� ������� ������ ������� ���� ��� ����� ��������. ������� ������.

	return 0;
}
