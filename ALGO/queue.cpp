#include<iostream>
#include<conio.h>
using namespace std;
class queue
{
	public:
		   int front,rear,max;
		   int s[20];
		   queue()
		   {    
		        cout<<"Enter the size of queue"<<endl;
		        cin>>max;
		        s[max];
		   	 	front=rear=-1;
		   }
		   
		   bool isfull()
		   {
		   		return (rear==(max-1));	
		   }
		   
		   bool isempty()
		   {
		   		return (front==-1);
		   }
		   void enqueue(int el)
		   {
		   		
		   		if(isfull())
		   		{ 
		   		   cout<<"Overflow queue"<<endl;
		   		}
		   		else if(isempty())
		   		{  
		   		   front++;
		   		   s[front]=el;
		   		   rear=front;
		   		}
		   		else
		   		{
		   		   rear++;
		   		   s[rear]=el;
		   		}
		   }
		   
		   void dequeue()
		   {
		   		if(isempty())
		   		{
		   		   cout<<"Underflow queue"<<endl;	
		   		}
		   		else if(front==rear)
		   		{   
		   		    cout<<"deleted element"<<s[front]<<endl;
		   		    front=-1;rear=-1;
		   		}
		   		else
		   		{
		   		   cout<<"deleted element"<<s[front]<<endl;
		   		   front++;
		   		}
		   }
		   
		   void clear()
		   {
		   		
				   do{
					  dequeue();
				    }while(isempty()==false);
		   		  	   
		   }
		   
		   void display()
		   {
		   	  	if(isempty())
		   		{ 
		   		   cout<<"cannot be displayed"<<endl;
		   		}
		   		else
		   		{
		   		   for(int i=front;i<=rear;i++)
		   		   {
		   		   	  cout<<s[i]<<endl;
		   		   }
		   		}
		   	  
		   }
};
/*int main()
{
	int info,choice;
	char ch;
	queue q;
	cout<<"Menu for implementing queue using arrays"<<endl;
	cout<<"1.enqueue-Insertion"<<endl;
	cout<<"2.dequeue-Deletion"<<endl;
	cout<<"3.Display"<<endl;
	cout<<"4.Clear"<<endl;
	do
	{
		cout<<"Enter your choice"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:{
				    cout<<"1.enqueue"<<endl;
				    cout<<"enter the element to be inserted"<<endl;
				    cin>>info;
				    q.enqueue(info);
				    break;
		        	}
		    case 2:{
				    cout<<"1.dequeue"<<endl;
				    q.dequeue();
				    break;
		        	}
			case 3:{
				    cout<<"3.Display"<<endl;
				    q.display();
				  break;
			     }
			case 4:{
				    cout<<"4.Clear"<<endl;
				    q.clear();
				    break;
			       }
			default:cout<<"invalid choices";break;	   	 		    	
		}
		
		cout<<"do you want to continue y/n"<<endl;
		cin>>ch;
	}while(ch=='y');
	
	getch();
	
}*/
