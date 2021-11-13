#include<iostream>
using namespace std;

#define N 6

int top=-1;
char stack[N];

 void push(char i){
 	if(top==N-1){
 		cout<<"Stack overflow";
	 }
	 else{
	 	top++;
	 	stack[top]=i;
	 }
}
void pop(){
	if(top==-1){
		cout<<"Stack underflow";
	}
	else{
		cout<<"The element popped :"<<stack[top];
		top--;
	}
}
void display(){
	if(top==-1){
		cout<<"The stack in empty.";
	}
	else{
		cout<<"The elements in array :";
		for(int q=top;q>=0;q--){
			cout<<"\n"<<stack[q];
		}
	}
}

int main(){
	char j;
	int e;
	cout<<"1. PUSH";
	cout<<"\n2. POP";
	cout<<"\n3. Display";
	cout<<"\n4. Exit";
	do{
		cout<<"\nEnter choice :";
		cin>>e;
		switch(e){
			case 1 :
				cout<<"\nEnter a Character to push :";
				cin>>j;
				push(j);
				break;
			case 2 :
				pop();
				break;
			case 3 :
				display();
				break;
			case 4:
				cout<<"Successfully exited.";
				break;
			default :
				cout<<"invalid input";
				break;
		}
	}while(e!=4);
	return 0;
	
}	 	
 
