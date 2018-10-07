#include<iostream>
using namespace std;
class A1{
	private :  struct node{
	int data ;
	struct node *next;}*head,*tail;
	public :
	
	 A1();
		void append(int n);
		void add(int p, int n);
		void begun(int n);
	    void  display();
	    void count();
	    void D(int n);
	    void sort();
	    void isort(int n);
	    void rev();
	    
	 ~A1();   
	    
};
A1 :: A1(){
	tail=NULL;
	head=NULL;
}
	  void A1::append(int n){
	node *temp ;
	temp=new node;
	temp->data=n;	
if(head==NULL){
	head=temp;
	temp->next=NULL;
	tail=temp;
	}
else{
tail->next=temp;
tail=temp;
tail->next=head;
	
}	
}
void A1::display(){
	node *temp,*p;
	p=NULL;
 temp=head;
 cout<<endl;
 while(temp->next!=head){
 	cout<<temp->data<<"  ";
 temp=temp->next;
 p=head;
}
 	cout<<temp->data<<endl;
}
void A1 :: add(int p, int n){
	node *temp,*r;
	r=head;
	temp=new node;
	
	temp->data=n;
	temp->next=NULL;
	for(int i=2;i<p;i++){
		r=r->next;
	}
	
	temp->next=r->next;
	r->next=temp;
}
void A1:: count(){
    node *temp;
    int c=0;
    temp=head;
    while(temp!=tail){
        c++;
        temp=temp->next;
    }
    cout<<" THE NO OF NODES ARE  :  "<<c+1;
}
void A1 :: begun(int n){
	node *temp,*q;
	q=head;
	temp=new node;
	
	temp->data=n;
	temp->next=NULL;
	if(head==NULL){
		head=temp;
	}
	else{
		tail->next=temp;
		temp->next=head;
		head=temp;
	}
}
void A1 :: D(int n){
	node *temp,*old;
	temp=head;
	while(temp!=NULL){
		if(temp->data==n){
		           	if(temp==head){
			                 	head=head->next;
			                 	tail->next=head;
			                      }
			        else{
			                    old->next=temp->next;
	                    }
			delete temp;
				return;
		}
		
		else{
			old=temp;
			temp=temp->next;
			
		}
	}
}
A1::~A1(){
}
int main(){
	A1 a;
a.append(21);
a.append(25);
	cout<<endl;
	a.display();
		return 0;
}


