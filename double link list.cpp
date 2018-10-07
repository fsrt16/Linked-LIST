#include<iostream>
using namespace std;
class s{
	private : struct dn{
	dn *prev;
	int data;
	dn *next;}*head;
	public : s();
	void append(int n);
		void add(int p, int n);
		void begun(int n);
	    void  display();
	    void count();
	    void D(int n);
	 //    void sort();
	 //   void isort(int n);
	  //  void rev();
	    
		~s(); 
};
s :: s(void){
	head==NULL;
}
void s:: add(int p, int n){
	dn *temp,*r;
	r=head;
	temp=new dn;
	temp->prev=NULL;
	temp->data=n;
	temp->next=NULL;
	for(int i=1;i<p;i++){
		r=r->next;
	}
	temp->prev=r;
	temp->next=r->next;
	r->next=temp;
	
}
void s::append(int n){
	dn *temp ,*q ;
	q=head;
	temp= new dn;
	temp->prev=NULL;
	temp->data=n;
	temp->next=NULL;
	if(head==NULL){
		head=temp;
	}
	else{ while(q->next!=NULL){
		q=q->next;
	}
	temp->prev=q;
	q->next=temp;
	}
}
void s :: display(){
	dn *temp;
	temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"   ";
	temp=temp->next;
	}
}
void s :: begun(int n){
	dn *temp,*q;
	q=head;
	temp=new dn;
	temp->prev=NULL;
	temp->data=n;
	temp->next=NULL;
	if(head==NULL){
		head=temp;
	}
	else{
		head->prev=temp;
		temp->next=head;
		head=temp;
	}
}
void s:: count(){
    dn *temp;
    int c=0;
    temp=head;
    while(temp!=NULL){
        c++;
        temp=temp->next;
    }
    cout<<" THE NO OF NODES ARE  :  "<<c;
}
void s :: D(int n){
	dn *temp,*old,*ne;
	temp=head;
	while(temp!=NULL){
		if(temp->data==n){
			if(temp==head){
				head=head->next;
			}
			else{
			old->next=temp->next;
			ne->prev=temp->prev;
	}
			delete temp;
				return;
		}
		
		else{
			old=temp;
			temp=temp->next;
			ne=temp->next;
			
		}
	}
}
s :: ~s(){
}


int main()
{

s a1;
a1.append(55);
a1.append(75);
a1.append(96);
a1.add(2,94);
a1.begun(8);
a1.display();
cout<<endl;

a1.D(75);
a1.display();
a1.count();
return 0;
}


