#include <iostream>

using namespace std;

class Deque{
	
	private:
		
		//Елемент дека:
		struct Element{
			
			int data;
			Element *back, *front;
		};
		
	public:
		
		//Конструктор:
		Deque(){
			
			root = NULL;
		}
		
		//Деструктор:
		~Deque(){
			
		}
		
		//Вывод элементов дека:
		void show(){
			
		}
		
		//Добавление в конец очереди:
		void push_back(){
			
		}
		
		//Добавление в начало очереди:
		void push_front(){
			
		}
		
		//Выборка с конца очереди:
		void pop_back(){
			
		}
		
		//Выборка с начала очереди:
		void pop_front(){
			
		}
};



int main(){
	
	setlocale(LC_ALL, "Russian");
	
	return 0;
}
