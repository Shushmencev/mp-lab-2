#include <fstream>
#include <iostream>

#include <string>

#include <deque>
#include <algorithm>

using namespace std;

int main(){
	
	//��������� �������� �����:
	setlocale(LC_ALL, "Russian");
	
	//���������� ���� �����:
	deque<string> my_deque_1, my_deque_2;
	
	//�������� ������ fin:
	ifstream fin;
	fin.open("list_of_books.txt");
	
	//���������� ������:
	string my_string;
	
	//���������� ������� ���� �� �����:
	while (fin.good()){
		
		getline(fin, my_string);
		my_deque_1.push_back(my_string);
	}
	
	//�������� ������ fin:
	fin.close();
	
	//���������� ���������:
	system("pause");
	return 0;
}
