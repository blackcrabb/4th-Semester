#include<iostream>
#include<conio.h>
#include"linkedlist.cpp"
#include"stack.cpp"
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
			    DFS(s);
			}
			void DFS(SLlist d[])
			{
				bool explored[n];
				for(int i=0;i<n;i++)
				{
					explored[i]=false;
				}
				Stack S;
				SLlist dis[n];
				for(int i=0;i<n;i++)
				{
					dis[i].insertatend(i);
				}
				int u;
				S.push(s);
				node *temp=new node();
				node *p=new node();
				while(S.isempty()==false)
				{
					u=S.pop();
					if(explored[u]==false)
					{
						explored[u]=true;
						temp=d[u].head;
						p=d[u].head;
						while(temp!=NULL)
						{
							S.push(temp->info);
						}
					}
				}
			}
			
};
int main()
{
	Graph g;
	g.input();
	getch();
}
