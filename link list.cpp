#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
using namespace std;
class A1{
	private :  
	struct node{
	int data ;
	 node *next;
	}*head,*h;
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
	    void mrg(A1 &a,A1 &b);
	    void inter(A1 &a, A1 &b);
	    void del();
	 ~A1();   
	    
};
A1 :: A1(){
	head=NULL;
	
}
void A1::del()
{
	node *t;
	t=head;
	node *r;
	cout<<"DELETING THE COMPLETE LINKED LIST "<<endl;
	while(t!=NULL)
	{
		
		r=t->next;
		free(t);
		t=r;
	}
	head=NULL;
}


	  void A1::append(int n){
	node *temp=head ,*r ,*o ;
if(head==NULL){
	head=new node;
	if(head==NULL)
{
	cout<<"NO MEMORY "<<endl;
	return;}
	head->data=n;
	head->next=NULL;
}
else{
	temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	r=new node;
	r->data=n;
	r->next=NULL;
	temp->next=r;
	
}	
}
	
		
void A1::display(){
	node *temp;
 temp=head;
 while(temp!=NULL){
 	cout<<temp->data<<"  ";
 	temp=temp->next;
 }
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
    while(temp!=NULL){
        c++;
        temp=temp->next;
    }
    cout<<" THE NO OF NODES ARE  :  "<<c;
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
void  A1:: sort(){
	node *t, *i,*j;
	int m;
j=head;
i=head->next;
for(i=head;i!=NULL;i=i->next){
	for(j=i->next;j!=NULL;j=j->next){
		if(i->data>j->data){
			m=i->data;
		i->data=j->data;
		j->data=m;
		}
	}
	
}
}
void A1::isort(int n){
	node *t,*r,*p,*n1;
	int  i=1, m=0;
	if(head==NULL)
	{
	
	head=new node;
	head->data=n;
	head->next=NULL;
	 
}
else{
	t=head;
	node *u;
	u=head;
p=new node;
p->data=n;
p->next=NULL;

  while(t->next!=NULL){
		if(p->data > t->data){
			r=t;
			t=t->next;
			
			
		
		
		}
		else{
	if(t->data==u->data){
	    p->next=u;
	    head=p;
	    
	    return;
	}
			m=t->data;
			t->data=p->data;
			p->data=m;
			r->next=t;
			n1=t->next;
			t->next=p;
			p->next=n1;
			m=0;
		
			return ;	
		}

}

   if(i==1){
	
		if(p->data < t->data){
		int y;
		y=t->data;
		t->data=p->data;
		p->data=y;
		t->next=p;
		i++;
		
	}
	else{
		
		t->next=p;
	i++;
	}
}
}

}
void A1:: mrg(A1 &a, A1 &b){
node *c;
c=NULL;
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
    if(a.head->data  < b.head->data){
        c->data=a.head->data;
        a.head=a.head->next;
    }
     else{
	  if (b.head->data  < a.head->data){
        c->data=b.head->data;
        b.head=b.head->next;

    }
    else
     {
        c->data=a.head->data;
        a.head=a.head->next;
        b.head=b.head->next;
    }
}
}
while(a.head!=NULL){
    c->next=new node;
    c=c->next;
      c->data=a.head->data;
        a.head=a.head->next;
}
while(b.head!=NULL){
	c->next=new node;
    c=c->next;
      c->data=b.head->data;
        b.head=b.head->next;
 }
 c->next=NULL;
}

void A1::inter(A1 &a, A1 &b){
   
    node *c,*c1;
    c=a.head;
    c1=b.head;
    int flag=0;
    while(c!=NULL)
    {
        append(c->data);
        c=c->next;
    }
    while(c1!=NULL)
    {
        node *t=head;
        flag=0;
        while(t!=NULL)
        {
            if(t->data==c1->data)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            append(c1->data);
        }
        c1=c1->next;
}

}






void A1::rev()
{
	node *r,*p,*current;
	current=head;
	p=NULL;
		while(current!=NULL){
			r=current->next;
			current->next=p;
			p=current;
			current=r;
		}
		head=p;
	
}



A1::~A1(){
}
int main(){
	A1 a,b,c;
a.append(5);
a.append(6);
a.append(15);
a.append(16);

a.display();
a.del();
a.display();

return 0;
}
		

