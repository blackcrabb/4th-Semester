#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;
class arrays
{
	public:
			int arr[100],x,temp[100],tem[100],ab[100],qui[100];
			int compare,com,quick;
			void input()
			{
				int in=0;
				cout<<"Enter the size"<<endl;
				cin>>x;
				for(int i=0;i<x;i++)
				{
					in=rand()%100;
					arr[i]=in;
						
				}
				
				for(int i=0;i<x;i++)
				{
					temp[i]=arr[i];
					tem[i]=arr[i];
					ab[i]=arr[i];
					qui[i]=arr[i];
				}
				
				cout<<endl;
			}
			
			void inputre()
			{
				cout<<"Enter the size"<<endl;
				cin>>x;
				cout<<"Enter array"<<endl;
				for(int i=0;i<x;i++)
				{
					cin>>arr[i];
				}
				
				for(int i=0;i<x;i++)
				{
					temp[i]=arr[i];
					tem[i]=arr[i];
					ab[i]=arr[i];
					qui[i]=arr[i];
				}
				cout<<endl;
			}
			
			void sortinwise()
			{
				int out=0;
				x=((rand()%100)+20);
				if((x>=30)&&(x<=100))
				{
					for(int i=0;i<x;i++)
					{
						out=rand()%100;
						if(out>=1 && out<=100)
						{
							arr[i]=out;
						}	
					}
				}
				else
				{
				}
					for(int i=0;i<x;i++)
				{
					temp[i]=arr[i];
					tem[i]=arr[i];
					ab[i]=arr[i];
					qui[i]=arr[i];
				}
				cout<<endl;
			}
			
			void display()
			{
				cout<<"The sorted array"<<endl;
				for(int i=0;i<x;i++)
				{
					cout<<arr[i]<<"  " ;
					
				}
				cout<<endl;
			}
			
			void displayi()
		    {
		    	cout<<"total no. of comparison"<<compare<<endl;
		    }

			void bubl()
			{
				cout<<endl;
				cout<<"Bubble sort"<<endl;
				int count=0;
				for(int i=0;i<x;i++)
				{
					for(int j=0;j<x-i-1;j++)
					{
						count++;
						if(arr[j]>arr[j+1])
						{
							
							int temp=arr[j];
							arr[j]=arr[j+1];
							arr[j+1]=temp;
						}
						else 
						{
						}
					}
				}
				cout<<"the total no. of comparison"<<count;
				cout<<endl;
			}
			
			void insertion()
			{
				cout<<"Insertion Sort"<<endl;
				int xloc;int c=0;
				compare=0;
				for(int xindex=0;xindex<x;xindex++)
				{
					int curr=temp[xindex];
					xloc=shiftvac(temp,xindex);
					temp[xloc]=curr;
				}
				displayi();
				cout<<endl;
			}
			
			int shiftvac(int a[],int g)
			{
				int vacant=g,xloc=0;
				int m=temp[g];
				while(vacant>0)
				{
					compare++;
					if(temp[vacant-1]<=m)
					{
						xloc=vacant;
						break;
					}
					temp[vacant]=temp[vacant-1];
					vacant--;
				}
				return xloc;
			}
			
			void selectsort()
			{
				cout<<"Selection Sort"<<endl;
				int count=0;
				int min;
				for(int i=0;i<x-1;i++)
				{
					min=i;
					for(int j=i+1;j<x;j++)
					{
						count++;
						if(tem[j]<tem[min])
						min=j;
					}
					int ti=tem[i];
					tem[i]=tem[min];
					tem[min]=ti;
				}
				cout<<"the total no. of comparisons"<<count;
				cout<<endl;
			}
			
			void mergesort(int a[],int l,int r)
			{
				com=0;
				if(l<r)
				{
					int m=(l+r)/2;
					mergesort(a,l,m);
					mergesort(a,m+1,r);
					merge(a,l,m,r);
				}
			}
			
			void merge(int b[],int beg, int mid,int end)
			{
			   	int i=beg;
			   	int j=mid+1,k=beg;
			   	int tempor[100];
				while(i<=mid && j<=end)
				{
					
					if(b[i]<b[j])
					{
						com++;
						tempor[k]=b[i];
						i++;	
					}
					else
					{
						com++;
						tempor[k]=b[j];
						j++;
					}
					k++;
				}
				
				while(i<=mid)
				{
						tempor[k]=b[i];
						i++;
						k++;
				}	
				
				while(j<=end)
				{
						tempor[k]=b[j];
						j++;
						k++;
				}	
					
						
			}
			
			void mergii()
			{
				cout<<"Merge Sort"<<endl;
				mergesort(ab,0,x-1);
				cout<<"total no. of comparisons"<<com<<endl;
			}
			
			void quickiee()
			{
				cout<<"Quick Sort"<<endl;
				quick=0;
				quicksort(qui,0,x-1);	
				cout<<"total no. of comparisons"<<quick<<endl;
			}
			
								 
			void quicksort(int qui[],int f,int l)
			{
				int pivot;
				if(f<l)
				{
					pivot=qui[f];
					int spilit=partition(qui,pivot,f,l);
					qui[spilit]=pivot; 
					quicksort(qui,f,spilit-1);
					quicksort(qui,spilit+1,l);  
				}
				
			}
			int partition(int qui[],int pivot,int f,int l)
			{
				int low=f,high=l;
				while(low<high)
				{
					int highvac=extendlarge(qui,pivot,low,high);
					int lowvac=extendsmall(qui,pivot,low+1,highvac);
					low=lowvac;
					high=highvac-1;		
				}
				return low;
			}
			int extendlarge(int qui[],int pivot,int lowvac,int high)
			{	
				int highvac=lowvac,curr=high;
				while(curr>lowvac)
				{quick++;
					if(qui[curr]<pivot)
					{
						qui[lowvac]=qui[curr];
						highvac=curr;
						break;
					}
					curr--;
				}
				return highvac;
			}
			int extendsmall(int qui[],int pivot,int low,int highvac)
			{
				int lowvac=highvac,curr=low;
				while(curr<highvac)
				{quick++;
					if(qui[curr]>=pivot)
					{
						qui[highvac]=qui[curr];
						lowvac=curr;
						break;
					}
					curr++;
				}
				return lowvac;
			}
			
			
};
int main()
{
	arrays surf;
	int choice;char ch;
	cout<<"Menu  for analysis"<<endl;
	cout<<"1.Sorting algo wise"<<endl;
	cout<<"2.Array wise"<<endl;
	do{
		cout<<"Enter your choice"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 2:
					for(int i=0;i<8;i++)
					{
						surf.input();
						surf.bubl();
						surf.insertion();
						surf.selectsort();
						surf.mergii();
						surf.quickiee();
						surf.display();
					}
					for(int i=0;i<2;i++)
					{
						surf.inputre();
						surf.bubl();
						surf.insertion();
						surf.selectsort();
						surf.mergii();
						surf.quickiee();
						surf.display();
					};break;
					
		    case 1:
					for(int i=0;i<8;i++)
					{
						surf.sortinwise();
						surf.bubl();
						surf.insertion();
						surf.selectsort();
						surf.mergii();
						surf.quickiee();
						surf.display();
					}
					for(int i=0;i<2;i++)
					{
						surf.inputre();
						surf.bubl();
						surf.insertion();
						surf.selectsort();
						surf.mergii();
						surf.quickiee();
						surf.display();
					};break;
						
			default:cout<<"invalid choice"<<endl;				
		}
		
			cout<<"Do you want to continue"<<endl;
			cin>>ch;
		}while(ch=='y');		
	
	getch();
}
