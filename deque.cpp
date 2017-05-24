#include <iostream>

using namespace std;

class Deque{
	
	private:
		
		//Елемент дека:
		struct Element{
			
			int data;
			Element *left, *right;
		};
		
		Element *element, *back, *front;
		
	public:
		
		//Конструктор:
		Deque(){
			
			element-> back = NULL;
			element-> front = NULL;
		}
		
		//Деструктор:
		~Deque(){
			
		}
		
		//Вывод элементов дека:
		void show(){
			
		}
		
		//Добавление в конец очереди:
		void push_back(int x){
			
			//Если элемент стоит в конце очереди:
			new_element = new Element;
				
			back = & new_element;
			new_element-> front = & element;
			new_element-> back = NULL;
			
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
