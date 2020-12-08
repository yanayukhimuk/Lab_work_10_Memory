#include "Memory.h"
using namespace std;

//void PrintAddress(Student* students, int size) {
//	cout << "Адрес каждой структуры студента в памяти: " << endl;
//	for (Student* ptr = students; ptr <= &students[size - 1];ptr++) {
//		//for (int i =0; i < size; i++)
//		cout << "#["  << "]: address = " << ptr << endl;
//	}
//}

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int amount_of_students = 3;
	Student Students[amount_of_students] = {}; // статический массив 
	int n;
	cout << "Введите количество студентов для нового массива";
	cin >> n;
	Student* students = new Student[n]; //динамический массив 
	for (int i = 0; i < n; i++) {
		cout << "Имя: ";
		cin >> students->name;
		cout << "Фамилия: ";
		cin >> students->surname;
		cout << "Факультет: ";
		cin >> students->faculty;
		cout << "Группа: ";
		cin >> students->group;
		cout << "Email: ";
		cin >> students->email;
		cout << endl;
	}
	Student firstStudent = *students;

	cout << "Размер статического массива : " << sizeof(Students) / sizeof(Students[0]) << endl;
	cout << "Размер массива (память): " << sizeof(Students) << endl;
	cout << "Размер динамического массива: " << n << endl;

	cout << "Адрес каждого студента в памяти: " << endl;
	for (int i = n - 1; i >= 0; --i) {
		cout << students + i << " ";
	}
	cout << endl << "Величина, на которую изменяется значение указателя при инкременте: " << sizeof(students) << endl;

	//cout << "Адреса полей структуры: " << endl; // Дописать (уточнить)
	//PrintAddress(students, n);

	//=====================================================================================================================================//
	const int amount_of_students_2 = 10;
	Student_2 Students_2[amount_of_students] = {};
	int m;
	
	cout << "Введите количество студентов для нового проверочного массива";
	cin >> m;
	Student_2* students_2 = new Student_2[m]; //динамический массив 
	for (int i = 0; i < m; i++) {
		cout << "Имя: ";
		cin >> students_2->name_2;
		cout << "Фамилия: ";
		cin >> students_2->surname_2;
		cout << "Факультет: ";
		cin >> students_2->faculty_2;
		cout << "Группа: ";
		cin >> students_2->group_2;
		cout << "Email: ";
		cin >> students_2->email_2;
		cout << endl;
	}
	Student_2 firstStudent_2 = *students_2;
	cout << "Размер статического массива : " << sizeof(Students_2) / sizeof(Students_2[0]) << endl;
	cout << "Размер нового проверочного массива(память): " << sizeof(Students_2) << endl;
	cout << "Размер динамического массива: " << m << endl;

	cout << "Адрес каждого студента в памяти: " << endl;
	for (int i = m - 1; i >= 0; --i) {
		cout << students_2 + i << " ";
	}
	cout << endl << "Величина, на которую изменяется значение указателя при инкременте: " << sizeof(students_2) << endl;
	//PrintAddress(students, m);
	return 0;
}
