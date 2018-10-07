#include<iostream>
using namespace std;
class A1{
	private :  
	struct node{
	int data ;
	 node *next;
	}*head;
	public :
	
	 A1();
	 void push(int n);
	 void pop();
	 void disp();
	 ~A1();   
	    
};
A1 :: A1(){
	head=NULL;
	
}
void A1::push(int n){
	node *t;
	t=new node;
	t->data=n;
	
	if(head==NULL){
		t->next=NULL;
		head=t;
	}
	else{
		t->next=head;
		head=t;
	}
}
void A1::pop(){
	if(head==NULL){
		cout<<"EMPTY STACK SORRY!!!!!"<<endl;
		return ;
	}
	node *t;
	t=head;
	head=head->next;
	delete t;
}
void A1::disp(){
	node *t;
	t=head;
	while(t->next!=NULL){
		cout<<t->data<<endl;
		t=t->next;
	}
}
A1 :: ~A1(){	
}
int main(){
	A1 a;
	a.push(25);
	a.push(35);
	a.push(159);
	a.push(87);
	a.disp();
	a.pop();
	a.disp();
	return 0;
}
