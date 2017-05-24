#include <fstream>
#include <iostream>

#include <string>
#include <cstring>

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
	while (getline(fin, my_string)){
		
		my_deque_1.push_back(my_string);
	}
	
	//Закрытие потока fin:
	fin.close();
	
	//Сортировка на двух деках:
		//Перемещение первой строки во второй дек:
	my_string = my_deque_1.front();
	my_deque_2.push_back(my_string);
	my_deque_1.pop_front();
	
		//
	while (not my_deque_1.empty()){
		
		my_string = my_deque_1.front();
		
		if (my_deque_1.front().compare(my_deque_2.back()) < 0){
			
			cout << "jfldskajfldkaj" << endl;
			
			my_deque_2.push_back(my_string);
			my_deque_1.pop_front();
		}
		
		else if (my_deque_1.front().compare(my_deque_2.front()) > 0){
			
			cout << "jfldskjfldkas" << endl;
			
			my_deque_2.push_front(my_string);
			my_deque_1.pop_front();
		}
		
		else{
			
			bool flag == TRUE;
			int count = 0;
			
			my_string = my_deque_2.back();
			my_deque_1.push_back(my_string);
			my_deque_2.pop_back();
			count += 1;
			
			if (){
				
				
			}
		}
	}
	my_string = my_deque_1.front();
	
	//Вывод отсортированного списка книг:
	cout << "Отсортированный список книг: " << endl;
	while (not my_deque_2.empty()){
		
		cout << my_deque_2.front() << endl;
		my_deque_2.pop_front();
	}
	
	//Завершение программы:
	system("pause");
	return 0;
}
