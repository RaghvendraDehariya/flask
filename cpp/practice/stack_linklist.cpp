#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node *next;
};

class stack{
	private:
		node *top;
	public:
		stack(){top=NULL;}
		void push(int n);
		int pop();
		int peek();
		void display();
		int peek(int pos);
		int stack_top();
		int isempty();
		int isfull();
};

void stack::push(int n){

	node *p;
	p=new node;

	if(p==NULL){
		cout<<"stack is full\n";
	}
	else{
		p->data=n;
		p->next=top;
		top=p;
	}
}

int stack::pop(){
	int x=-1;
	node *p;
	if(top==NULL){
		cout<<"stack is empty\n";
	}
	else{
		x=top->data;
		p=top;
		top=top->next;
		delete p;
	}
	return x;
}

void stack::display(){
	node *p;
	p=top;
	while(p!=NULL){
		cout<<p->data<<" ";
		p=p->next;
	}
	cout<<endl;
}

int stack::peek(int pos){
	node *p=top;
	if(pos<0)
		return -1;
	else{
		for(int i=0;i<pos-1;i++)
			p=p->next;
		return p->data;
	}
}

int stack::stack_top(){
	if(top==NULL)
		return -1;
	return top->data;
}

int stack::isempty(){
	if(top==NULL)
		return 1;
	return 0;
}

int stack::isfull(){
	node *p;
	p=new node;
	if(p==NULL){
		delete p;
		return 1;
	}
	else 
		return 0;
}

int main(){

	stack st;
	int c,n,pos;

	do{
		cout<<"\nchoose one of stack properties ;"<<endl;

		cout<<"1.push\t\t2.pop\n3.peek\t\t4.stack-top\n5.isempty\t6.isfull\n7.display\t8.exit"<<endl;

		cin>>c;

		switch(c){
			case 1:
				cout<<"Enter the Number you were pushing:";
				cin>>n;
				st.push(n);
				cout<<"push successful"<<endl;
				break;
			case 2:
				st.pop();
				cout<<"pop successful"<<endl;
				break;
			case 3:
				cout<<"Enter the position:";
				cin>>pos;
				cout<<st.peek(pos);
				break;
			case 4:
				cout<<"stack's top value is:"<<st.stack_top()<<endl;
				break;
			case 5:
				if(st.isempty()==1)
					cout<<"true"<<endl;
				else
					cout<<"false"<<endl;
				break;
			case 6:
				if(st.isfull()==1)
					cout<<"true"<<endl;
				else
					cout<<"false"<<endl;
				break;
			case 7:
				cout<<"Display stack's element:\n";
				st.display();
				cout<<endl;
				break;
		}
	}while(c>0 && c<8);

	return 0;
}
