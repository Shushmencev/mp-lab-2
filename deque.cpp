#include <fstream>
#include <iostream>

#include <deque>
#include <algorithm>

using namespace std;

int main(){
	
	//��������� �������� �����:
	setlocale(LC_ALL, "Russian");
	
	//���������� ���� �����:
	deque<int> my_deque_1, my_deque_2;
	
	//�������� ������ fin:
	ifstream fin;
	fin.open("list_of_books.txt");
	
	//
	
	
	//�������� ������ fin:
	fin.close();
	
	my_deque_1.push_back(5);
	
	//���������� ���������:
	system("pause");
	return 0;
}
