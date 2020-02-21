#include<iostream>
#include<conio.h>
using namespace std;
struct node
{
	int info;
	node *next;
};
class SLlist
{
	public:
		   node *head;
		   SLlist()
		   {
		   	   head=NULL;
		   }
		   void insertatbeg(int ele)
		   {
		   	
			   node *temp=new node();
			    
		     	{
		   		    temp->info=ele;
		   		    temp->next=head;
		   		    head=temp;
		     	}
		     	
		   }
		   void insertatend(int ele)
		   {
			   node *temp=new node();
		   	   node *ptr=new node();
		   	   
		   	   
		   	    ptr->info=ele;
		   	   if(head==NULL)
		   	   {
		   	   	 ptr->next=NULL;
		   	   	 head=ptr;
				  }
				  
			else
{
				temp=head;
			   	while(temp->next!=NULL)
		   	 	{
					 temp=temp->next;
		   	 	}
		   	 	
		   	 	ptr->info=ele;
		   	 	ptr->next=NULL;
		   	 	temp->next=ptr;
		
		   }
		   }
		   
		   void insert()
		   {
		   	 int m,num;
		   	 cout<<"enter the limit"<<endl;
		   	 cin>>m;
		   	 
		   	 for(int i=0;i<m;i++)
		   	 {
		   	 	cout<<"Enter the elements"<<endl;
		   	 	cin>>num;
		   	 	insertatend(num);
				}
		   }
		   void deletionatbeg()
		   {
		   	 node *temp=new node();
		   	 
		   	 if(head==NULL)
		   	 {
		   	 	cout<<"cannot be deleted"<<endl; 
		   	 }
		   	 else
		   	 {  temp=head;
		   	 	head=head->next;
		   	 	temp->next=NULL;
		   	 	delete temp;
		   	 }
		   }
		   
		   void deleteionatend()
		   {  
		     node *temp=new node();
		     node *p=new node();
		   	  if(head==NULL)
		   	 {
		   	 	cout<<"cannot be deleted"<<endl; 
		   	 }
		   	 else
		   	 {
		   	 	temp=head;
		   	 	while(temp->next->next!=NULL)
		   	 	{
		   	 		
		   	 		
					  temp=temp->next; 	 		
		   	 		 
		   	    }
		   	    p=temp;
		   	    temp=temp->next;
		   	    p->next=NULL;
		   	    delete temp;
		   	 }
		   }
		   
		   SLlist(const SLlist &the)
		   {
		   	  node *temp=new node();
		   	  temp=the.head;
		   	  while(temp!=NULL)
		   	  {
		   	  	insertatend(temp->info);
		   	  	temp=temp->next;
				 }
		   }
		   
		   void reverse()
		   {
		   	 node *current=new node();
		   	 node *prev=new node();
		   	 node *p=new node();
		   	 current=head;prev=NULL;p=NULL;
		   	 while(current!=NULL)
		   	 {
		   	 	p=current->next;
		   	 	current->next=prev;
		   	 	prev=current;
		   	 	current=p;
				}
		   	 head=prev;
		   	 
		   }
		   
		   void concatenate(const SLlist &b)
		   {
		   	  node *temp=new node();
		   	  temp=head;
		   	  while(temp->next!=NULL)
		   	  {
		   	  	 temp=temp->next;
		   	  }
		   	  
		   	  temp->next=b.head;
		   	  
		   }
		   
		   void search(int seah)
		   {
		   	 	node *temp=new node();
		   	 	int count=1;
		   	 	temp=head;
		   	 	while(temp!=NULL)
		   	 	{
		   	 	  
		   	 	  if(seah==temp->info)
		   	 	  {  cout<<"Element searched is in the position"<<count<<endl;
					  temp=temp->next;
			      }
				
				 else { 
				        temp=temp->next;
				        count++;
				      }
				}
		   	 
		   }
		   
		   
		   void display()
		   {
		   		node *temp=new node();
		   		temp=head;
		   		while(temp!=NULL)
		   		{
		   			cout<<temp->info<<"->";
		   			temp=temp->next;
		   		}
		   		cout<<"!!";
		   }
};
/*int main()
{
	SLlist stk,stk1;
	int ch,el,bhi;
	char choice;
	cout<<"Enter the list"<<endl;
	stk.insert();
	
	do
	{
		cout<<"Menu for implementing single linked list"<<endl;
		cout<<"1.Insertion of the node at the start of the linked list"<<endl;
		cout<<"2.Insertion of the node at the end of the linked list"<<endl;
		cout<<"3.Deletion of the node at the start of the linked list"<<endl;
		cout<<"4.Deletion of the node at the end of the linked list"<<endl;
		cout<<"5.Searching an element of the list"<<endl;
		cout<<"6.Reverse the list"<<endl;
		cout<<"7.Display the list"<<endl;
		cout<<"8.Concatenate 2 list"<<endl;
		cout<<"enter your choice"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:{
						cout<<"inserion at beg"<<endl;
						cout<<"enter the element"<<endl;
						cin>>el;
						stk.insertatbeg(el);
						break;
					}
					
			case 2:{
						cout<<"insert at the end"<<endl;
			    		cout<<"enter the element"<<endl;
						cin>>el;
						stk.insertatend(el);
						break;
					}
					
			case 3:{
						cout<<"deletion at beg"<<endl;
			        	stk.deletionatbeg();
						break;
		    		}
		    		
			case 4:{ 
						cout<<"deletion at end"<<endl;
			        	stk.deleteionatend();
						break;
					}
					
			case 5:{    cout<<"Enter the element to be searched"<<endl;
			            cin>>bhi;
			            stk.search(bhi);
				        break;
			       }		
					
			case 6:{    
						cout<<"reversing the list"<<endl;
						stk.reverse();
				        break;
			        }		
					
			case 7:{ 
						cout<<"display the list"<<endl;
			    		stk.display();
						break;
					}
			
			case 8:{
						cout<<"enter the list to be appended"<<endl;
						stk1.insert();
			         	stk.concatenate(stk1);
			         	
				   	 	break;
					}
					
			default:cout<<"invalid choice";
		}
		
		cout<<"Do you want to continue"<<endl;
		cin>>choice;
		
	}while(choice=='y'||choice=='Y');
	
	getch();
	return 0;
}*/
