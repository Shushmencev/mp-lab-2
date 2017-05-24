#include <fstream>
#include <iostream>

#include <deque>
#include <algorithm>

using namespace std;

int main(){
	
	//Поддержка русского языка:
	setlocale(LC_ALL, "Russian");
	
	//Объявление двух деков:
	deque<int> my_deque_1, my_deque_2;
	
	//Создание потока fin:
	ifstream fin;
	fin.open("list_of_books.txt");
	
	//
	
	
	//Закрытие потока fin:
	fin.close();
	
	my_deque_1.push_back(5);
	
	//Завершение программы:
	system("pause");
	return 0;
}
