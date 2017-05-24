#include <fstream>
#include <iostream>

#include <string>

#include <deque>
#include <algorithm>

using namespace std;

int main(){
	
	//Поддержка русского языка:
	setlocale(LC_ALL, "Russian");
	
	//Объявление двух деков:
	deque<string> my_deque_1, my_deque_2;
	
	//Создание потока fin:
	ifstream fin;
	fin.open("list_of_books.txt");
	
	//Объявление строки:
	string my_string;
	
	//Заполнение первого дека из файла:
	while (fin.good()){
		
		getline(fin, my_string);
		my_deque_1.push_back(my_string);
	}
	
	//Закрытие потока fin:
	fin.close();
	
	//Завершение программы:
	system("pause");
	return 0;
}
