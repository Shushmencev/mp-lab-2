#include <iostream>

using namespace std;

class Deque{
	
	private:
		
		//������� ����:
		struct Element{
			
			int data;
			Element *left, *right;
		};
		
		Element *element, *back, *front;
		
	public:
		
		//�����������:
		Deque(){
			
			element-> back = NULL;
			element-> front = NULL;
		}
		
		//����������:
		~Deque(){
			
		}
		
		//����� ��������� ����:
		void show(){
			
		}
		
		//���������� � ����� �������:
		void push_back(int x){
			
			//���� ������� ����� � ����� �������:
			new_element = new Element;
				
			back = & new_element;
			new_element-> front = & element;
			new_element-> back = NULL;
			
		}
		
		//���������� � ������ �������:
		void push_front(){
			
		}
		
		//������� � ����� �������:
		void pop_back(){
			
		}
		
		//������� � ������ �������:
		void pop_front(){
			
		}
};



int main(){
	
	setlocale(LC_ALL, "Russian");
	
	return 0;
}
