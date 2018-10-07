#include<iostream>
using namespace std;
class A1{
private :  
	struct node{
	int data ;
	 node *next;
	}*f,*r;
	public :
	
	 A1();
	 void add(int n);
	 void del();
	 void display();
	 ~A1();
};
A1 :: A1(){
	f=NULL;
	r=NULL;
	
}
void A1:: add(int n){
	node *t;
	t->data=n;
	t->next=NULL;
	if(f==NULL){
		f=t;
		r=t;
	}
	else{
		node *n;
		n=r->next;
		r->next=t;
		t->next=n;
	}
}
void A1:: del(){
	node *t;
	if(f==NULL){
		cout<<"empty "<<endl;
	}
	else if(f==r){
		delete f;
		f=NULL;
		r=NULL;
	}
	else{
		t=f;
		f=f->next;
		t->next=NULL;
		r->next=f;
		delete t;
	}
	
}
void A1:: display(){
	node *t;
	t=f;
	if(f==NULL){
		cout<<"EMPTY "<<endl;
		
	}
	else{
		while(t->next!=f){
			cout<<t->data<<endl;
		}
	}
}
A1::~A1(){
}
int main(){
	A1 a;
	a.add(20);
	a.add(15);
	a.add(14);
	
	return 0;
}
