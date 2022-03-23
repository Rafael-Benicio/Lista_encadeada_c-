#include <iostream>
#include <malloc.h>

using namespace std;


class Node{
private:
	// Variaveis------
	int data;
	Node *next;
public:
	int getData(){
		return data;
	}

	Node* getNext(){
		return next;
	}

	void setNext(Node* n){
		next = n;
	}

	void setData(int val) {
		data = val;
	}
	// Construtor---------------
	Node(int val){ 
		data = val;
		next = NULL;
	}
	Node(){ 
		next = NULL;
	}
};


class List{
 	private:
 		// Variaveis------------
 		Node* head;
 		Node* tail;
 	public:
 		int size;
 		// Variaveis------------
 		// Cabeça da lista encadeada
 		// Funções--------------
 		// Mostra elementos da lista
 		void show(){
			Node* c = head;
			if(empty())
				std::cout << "Não Há Elementos...\n";
			else{
				while(c) // percorre a lista
				{
					std::cout<<c->getData()<< std::endl;
					c = c->getNext();
				}
				std::cout << std::endl;
			}
		}
		// verifica se a lista está vazia
		inline bool empty(){return (head == NULL);}

		// insere no início
		void insert(int val){
			Node* novo_no=(Node*) malloc(sizeof(Node));
			novo_no=new Node(val);
			 new Node(val);
			if(empty()){
				head = novo_no;
				tail = novo_no;
			}
			else{
				novo_no->setNext(head);
				head = novo_no;
			}
			size++;
		}

		// insere no final (semelhante a push_back da list)
		void push(int val){
			Node* novo_no=(Node*) malloc(sizeof(Node));
			novo_no=new Node(val);

			if(empty()){
				head = novo_no;
				tail = novo_no;
			}
			else{
				tail->setNext(novo_no);
				tail = novo_no;
			}
			size++;
		}

		int operator[](int index){
			Node* c=(Node*) malloc(sizeof(Node));
			c=head;

			for(int i=0;i<index;i++){
				if(i == index) break;
				else if(c->getNext())
					c = c->getNext();
			}
			return c->getData();
			free(c);
		}

		bool remove(int val){
			Node* c=head;

			for(int i=0;i<size;i++){
				if(c->getData() == val){
					head=c->getNext();
					size--;
					return true;
					break;
				} 
				else if(c->getNext()->getData()==val){
					Node* x=c->getNext();
					c->setNext(x->getNext());
					size--;
					return true;
					break;
				}
				else if(tail==c->getNext()){
					break;
				}
				else if(c->getNext()){
					c = c->getNext();
				}
			}
			return false;
		}
 		//Construtor
 		List(){
 			size=0;
 			head=NULL;
 			tail=NULL;
 		}
		List(int val){
			// se passar elemento, então cria novo No
			head = new Node(val);
			tail = head;
			size=1;
		}
};

int main(){
 	
 	List enc;
 	
 	enc.insert(4);
 	enc.insert(3);
 	enc.insert(2);
 	enc.insert(1);
 	enc.push(5);
	enc.show();
	cout<<enc[1]<<endl;
	enc.show();
	

	return 0;
}