#include <iostream>

using namespace std;

class Deque{
	
	private:
		
		//������� ����:
		struct Element{
			
			int data;
			Element *back, *front;
		};
		
	public:
		
		Element *element;
		
		//�����������:
		Deque(){
			
			element->back = NULL;
			element->front = NULL;
		}
		
		//����������:
		~Deque(){
			
		}
		
		//����� ��������� ����:
		void show(){
			
		}
		
		//���������� � ����� �������:
		void push_back(int x){
			
			if (element->back == NULL){
				
			}
			
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
