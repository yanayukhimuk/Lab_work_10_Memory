#include "Memory.h"
using namespace std;

/*void Address(int n, Student students) {
	cout << "Адрес каждой структуры студента в памяти: " << endl;
	for (int i = n - 1; i >= 0; --i) {
		cout << students + i << " ";
	}
}*/

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

	cout << "Размер статического массива: " << sizeof(Students) / sizeof(Students[0]) << endl;
	cout << "Размер динамического массива: " << n << endl;

	cout << "Адрес каждой структуры студента в памяти: " << endl;
	for (int i = n - 1; i >= 0; --i) {
		cout << students + i << " ";
	}
	cout << endl << "Величина, на которую изменяется значение указателя при инкременте: " << sizeof(students) << endl;

	cout << "Адреса полей структуры: " << endl; // Дописать (уточнить)
	// дописать 8.	Создать структуру с таким же набором полей, но другой последовательностью. Сравнить размеры структур. Вывести на консоль адреса каждого поля для обеих структур. Сделать выводы.

	return 0;
}
