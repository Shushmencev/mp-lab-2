#include <fstream>
#include <iostream>

#include <string>
#include <cstring>

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
	while (getline(fin, my_string)){
		
		my_deque_1.push_back(my_string);
	}
	
	//�������� ������ fin:
	fin.close();
	
	//���������� �� ���� �����:
		//����������� ������ ������ �� ������ ���:
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
	
	//����� ���������������� ������ ����:
	cout << "��������������� ������ ����: " << endl;
	while (not my_deque_2.empty()){
		
		cout << my_deque_2.front() << endl;
		my_deque_2.pop_front();
	}
	
	//���������� ���������:
	system("pause");
	return 0;
}
