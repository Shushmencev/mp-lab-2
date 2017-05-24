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
	
	//����� ��������� ������ ����:
	deque<string> temp_deque = my_deque_1;
	cout << "�������� ������ ����: " << endl;
	while (not temp_deque.empty()){
		
		cout << temp_deque.back() << endl;
		temp_deque.pop_back();
	}
	
	//���������� �� ���� �����:
		//����������� ������ ������ �� ������ ���:
	my_string = my_deque_1.front();
	my_deque_2.push_back(my_string);
	my_deque_1.pop_front();
	
		//
	while (not my_deque_1.empty()){
		
		my_string = my_deque_1.front();
		
		if (my_deque_1.front().compare(my_deque_2.back()) < 0){
			
			my_deque_2.push_back(my_string);
			my_deque_1.pop_front();
		}
		
		else if (my_deque_1.front().compare(my_deque_2.front()) > 0){
			
			my_deque_2.push_front(my_string);
			my_deque_1.pop_front();
		}
		
		else{
			
			int count = 0;
			
			while (my_deque_1.front() >= my_deque_2.back()){
				
				my_string = my_deque_2.back();
				my_deque_1.push_back(my_string);
				my_deque_2.pop_back();
				count += 1;
			}
			
			//������ �������� �� ������ ���:
			my_string = my_deque_1.front();
			my_deque_1.pop_front();
			
			my_deque_2.push_back(my_string);
			
			//������ ��������� �����:
			for (int i = count; i > 0; i--){
				
				my_string = my_deque_1.back();
				my_deque_1.pop_back();
				my_deque_2.push_back(my_string);
			}
		}
	}
	//my_string = my_deque_1.front();
	
	//����� ���������������� ������ ����:
	cout << endl << "��������������� ������ ����: " << endl;
	while (not my_deque_2.empty()){
		
		cout << my_deque_2.back() << endl;
		my_deque_2.pop_back();
	}
	
	//���������� ���������:
	system("pause");
	return 0;
}
