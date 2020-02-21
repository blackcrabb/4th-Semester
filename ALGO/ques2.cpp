#include<iostream>
#include<conio.h>
#include"linkedlist.cpp"
#include"queue.cpp"
using namespace std;
class Graph
{
	public:
			int n,s;
			void input()
			{
				cout<<"Enter the no. of nodes"<<endl;
				cin>>n;
				SLlist list[n];
				for(int i=0;i<n;i++)
					list[i].insertatend(i);
				cout<<"Enter the no. of edges ( 0 -"<<n-1<<")";
				while(true)
				{
					cout<<endl;
					int x,y;
					cout<<"from : ";
					cin>>x;
					cout<<"to : ";
					cin>>y;
					if(x==-1 && y==-1)
						break;
					list[x].insertatend(y);
					list[y].insertatend(x);		
				}
				cout<<"THE LINKED LISTS"<<endl;	
				for (int i = 0; i < n; i++)
			    {
			        cout << endl;
			        list[i].display();
			    }
			    cout<<endl;
			    cout<<"Enter the source";
			    cin>>s;
			    cout<<endl;
			    BFS(list);
			}
			void directed()
			{
					cout<<"Enter the no. of nodes"<<endl;
				cin>>n;
				SLlist list[n];
				for(int i=0;i<n;i++)
					list[i].insertatend(i);
				cout<<"Enter the no. of edges ( 0 -"<<n-1<<")";
				while(true)
				{
					cout<<endl;
					int x,y;
					cout<<"from : ";
					cin>>x;
					cout<<"to : ";
					cin>>y;
					if(x==-1 && y==-1)
						break;
					list[x].insertatend(y);		
				}
				cout<<"THE LINKED LISTS"<<endl;	
				for (int i = 0; i < n; i++)
			    {
			        cout << endl;
			        list[i].display();
			    }
			    cout<<endl;
			    cout<<"Enter the source";
			    cin>>s;
			    cout<<endl;
			    BFS(list);
			}
			
			void BFS(SLlist l[])
			{
				bool discovered[n];
				for(int i=0;i<n;i++)
				{
						discovered[i]=false;
				}
				discovered[s]=true;
				queue q;
				q.enqueue(s);
				SLlist dis[n];
				for(int i=0;i<n;i++)
					{
						dis[i].insertatend(i);
					}
				int u=0; 
				node *temp=new node();
				while(q.isempty()==false)
				{
					 u=q.s[q.front];
					 temp=l[u].head;
					while(temp!=NULL)
					{
						
					  	if(discovered[temp->info]==false)
					  	{
					  		discovered[temp->info]=true;
					  		q.enqueue(temp->info);
					  		dis[u].insertatend(temp->info);
					  		
					   }
					  temp=temp->next;
					
					}
					 if(u==n-1)
					 {
					 	break;
					 }
					q.front=q.front+1;
					
				}
				cout<<endl;
				cout<<"THE BFS LINKED LIST"<<endl;
				for (int i = 0; i < n; i++)
			    {
			        cout << endl;
			        dis[i].display();
			    }
			    cout<<endl;
					
			}
};
int main()
{
	Graph g;
	cout<<"GRAPH is"<<endl;
	cout<<"1.Undirected"<<endl;
	cout<<"2.Directed";
	int i;
	cout<<"enter your choice"<<endl;
	cin>>i;
	if(i==1)
	{
	   g.input();
	}
	else if(i==2)
	{
		g.directed();
	}
	else
	{
		cout<<"wrong choice";
	}
	getch();
}
