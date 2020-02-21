#include<iostream>
#include<conio.h>
using namespace std;
template<class T>
class Stack
{      
        T *arr;
        int size;
        int top;
        public:
       	  	Stack(T x)
			 {  arr=new T[x];
			    size=x;
			    top=-1;
			  }
			  
			void push(int info)
			{    
			   if(isfull()==true)
			    {
			    cout<<"Stack overflow"<<endl;}
			   
			   else 
			     arr[++top]=info;
			} 
		       
			   
			T pop()
		    {
			    if(isempty()==true)
				{cout<<"Stack underflow"<<endl;}
				 
				else 
				{ 
				 T out;
				 out=arr[top];
				//cout<<"the element poped out is"<<arr[top]<<endl;
				top--;
				 return out;
				}
			}
			      
			bool isfull()
			{ return (top==(size-1));}
			           
			              
			bool isempty()
			{ return (top==-1);}
			    
       	    void display()
       	    {  if(top>-1)
       	        {
       	         for(int i=top;i>=0;i--)
       	            {cout<<arr[i]<<endl;}}
       	           
       	           else
       	            {  cout<<"stack is empty"<<endl;}
       	           
       	      }
};


/*int main()
{  
    //Roll No.:62
    //Objective:Implementation of Stack using arrays
    int n,val;
    cout<<"enter the size of stack"<<endl;
    cin>>n;
    Stack <int>S(n);
    char b;
    
     do
	 {
	   
      cout<<"Menu For Stack Operations:"<<endl;
      cout<<"1.Inserting an element-PUSH"<<endl;
      cout<<"2.Deleting an element-POP"<<endl;
      cout<<"3.Displaying the stack"<<endl;
      
      int ch;
      cout<<"Enter your choice"<<endl;
      cin>>ch;
      switch(ch)
      
      {
        case 1:{
        	
        	
        cout<<"enter the value to be inserted"<<endl;
               cin>>val;
		
		     S.push(val);break;}
        case 2:{
        	
		       S.pop();break;}
        case 3:S.display();break;
        default:cout<<"invalid choice";break;
        
       }
    cout<<"Do you want to coutinue"<<endl;
         cin>>b;}while(b=='y'||b=='Y');
    getch();
    return 0;
    
}*/
