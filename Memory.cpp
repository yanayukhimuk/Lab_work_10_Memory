#include "Memory.h"
using namespace std;

//void PrintAddress(Student* students, int size) {
//	cout << "����� ������ ��������� �������� � ������: " << endl;
//	for (Student* ptr = students; ptr <= &students[size - 1];ptr++) {
//		//for (int i =0; i < size; i++)
//		cout << "#["  << "]: address = " << ptr << endl;
//	}
//}

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

	cout << "������ ������������ ������� : " << sizeof(Students) / sizeof(Students[0]) << endl;
	cout << "������ ������� (������): " << sizeof(Students) << endl;
	cout << "������ ������������� �������: " << n << endl;

	cout << "����� ������� �������� � ������: " << endl;
	for (int i = n - 1; i >= 0; --i) {
		cout << students + i << " ";
	}
	cout << endl << "��������, �� ������� ���������� �������� ��������� ��� ����������: " << sizeof(students) << endl;

	//cout << "������ ����� ���������: " << endl; // �������� (��������)
	//PrintAddress(students, n);

	//=====================================================================================================================================//
	const int amount_of_students_2 = 10;
	Student_2 Students_2[amount_of_students] = {};
	int m;
	
	cout << "������� ���������� ��������� ��� ������ ������������ �������";
	cin >> m;
	Student_2* students_2 = new Student_2[m]; //������������ ������ 
	for (int i = 0; i < m; i++) {
		cout << "���: ";
		cin >> students_2->name_2;
		cout << "�������: ";
		cin >> students_2->surname_2;
		cout << "���������: ";
		cin >> students_2->faculty_2;
		cout << "������: ";
		cin >> students_2->group_2;
		cout << "Email: ";
		cin >> students_2->email_2;
		cout << endl;
	}
	Student_2 firstStudent_2 = *students_2;
	cout << "������ ������������ ������� : " << sizeof(Students_2) / sizeof(Students_2[0]) << endl;
	cout << "������ ������ ������������ �������(������): " << sizeof(Students_2) << endl;
	cout << "������ ������������� �������: " << m << endl;

	cout << "����� ������� �������� � ������: " << endl;
	for (int i = m - 1; i >= 0; --i) {
		cout << students_2 + i << " ";
	}
	cout << endl << "��������, �� ������� ���������� �������� ��������� ��� ����������: " << sizeof(students_2) << endl;
	//PrintAddress(students, m);
	return 0;
}
