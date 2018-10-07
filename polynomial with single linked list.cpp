#include<iostream>
using namespace std;
class p{
	private :  
	struct node{
	int c ;
	int e ;
	 node *next;
	}*head;
	public :
	
	 p();
	 void pand(int c, int e);
	 void display();
	 void padd(p &a, p &b);
	 	 ~p();   
	    
};
p :: p(){
	head=NULL;
	
}
void p::pand(int c, int e){
		node *temp=head ,*r ,*o ;
if(head==NULL){
	head=new node;
	if(head==NULL)
{
	cout<<"NO MEMORY "<<endl;
	return;}
	head->c=c;
	head->e=e;
	head->next=NULL;
}
else{
	temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	r=new node;
	r->c=c;
	r->e=e;
	r->next=NULL;
	temp->next=r;
	
}	
}

void p::display(){
	node *temp;
 temp=head;
 while(temp!=NULL){
 	if(temp->e!=0){
 		cout<<temp->c<<"x^"<<temp->e<<" + ";
	 }
	 else{
	 	cout<<temp->c<<"  ";
	 }
 	temp=temp->next;
 }
}
void p::padd(p &a, p &b){
	node *c;
	c=new node;
	c->next=NULL;
while(a.head!=NULL && b.head!=NULL){
	if(head==NULL){
		head=new node;
		c=head;
	}
	else{
		c->next=new node;
		c=c->next;
	}
	if(a.head->e < b.head->e){
		c->e=b.head->e;
		c->c=b.head->c;
		b.head=b.head->next;
	
	}
	else{
		if(a.head->e > b.head->e){
		c->e=a.head->e;
		c->c=a.head->c;
		a.head=a.head->next;
	}
	else{
		cout<<"poi0";
		c->e=b.head->e;
		c->c=b.head->c+a.head->c;
		b.head=b.head->next;
		a.head=a.head->next;
	
	
	}
	}
}
while(a.head!=NULL){
	if(head==NULL){
		head=new node;
		c=head;
	}
	else{
		c->next= new node;
		c=c->next;
	}
	c->c=a.head->c;
	c->e=a.head->e;
	a.head=a.head->next;
}
while(b.head!=NULL){
	if(head==NULL){
		head=new node;
		c=head;
	}
	else{
		c->next= new node;
		c=c->next;
	}
	c->c=b.head->c;
	c->e=b.head->e;
	b.head=b.head->next;
}
c->next=NULL;
}

p::~p(){
}
int main(){
	int c,e;
	int n;
	p a,b;
	cout<<"ENTER THE NO OF TERMS YOU WAND TO ENTER"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
    	cout<<"enter the coefficinet "<<endl;
    	cin>>c;
    		cout<<"enter the exponent "<<endl;
    	cin>>e;
    	a.pand(c,e);
	}
cout<<endl;
a.display();
cout<<endl;
cout<<"ENTER THE NO OF TERMS YOU WAND TO ENTER"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
    	cout<<"enter the coefficinet "<<endl;
    	cin>>c;
    		cout<<"enter the exponent "<<endl;
    	cin>>e;
    	a.pand(c,e);
	}
cout<<endl;
a.display();
cout<<endl;
p c1;
c1.padd(a,b);
c1.display();
return 0;
}
