#include<iostream>
using namespace std;
const int n=100;
int stack[n];
int top=-1;
int overflow()
{
	if(top==99)
	{
		cout<<"stack overflow\n";
	}
	else
	{
		cout<<"element can be added\n";
	}
}
int underflow()
{
	if(top==-1)
	{
		cout<<"stack underflow\n";
	}
	else
	{
		cout<<"element is present\n";
	}
}
int push(int data)
{
	if(top==99)
	{
		cout<<"stack over flow";
		return 0;
	}
	top++;
	stack[top]=data;
	cout<<"element added\n";
}
int pop()
{
	if(top==-1)
	{
		cout<<"underflow\n";
		return 0;
	}
	cout<<"element pop"<<stack[top]<<"\n";
	top--;

}
int show()
{
	int i;
	for(i=0;i<=top;i++)
	{
		cout<<stack[i]<<" ";
	}
}
int search(int data)
{
	int i;
	for(i=0;i<=top;i++)
	{
		if(stack[i]==data)
		{
			cout<<"found";
			return 0;
		}
	}
	cout<<"not found";
	
}
int main()
{
   cout<<"stack operations\n";
   cout<<"1.Push element\n";
   cout<<"2.Pop element\n";
   cout<<"3.Search element\n";
   cout<<"4.Show element\n";
   cout<<"5.Is Underflow \n";
   cout<<"6.Is overflow\n";
   cout<<"7.Exit\n";
   int ch;
   cout<<"enter choice(1-7)";
   cin>>ch;
   int e;
   switch(ch)
   {
   	case 1:
   		cout<<"enter elemnt";cin>>e;
   		push(e);
   		break;
   	case 2:
	   pop();
        break;
	case 3:
	   cout<<"enter elemnt";cin>>e;
   		search(e);
   		
        break;
	case 4:
	   show();
        break;
	case 5:
	   underflow();
        break;
	case 6:
	   overflow();
        break;
	case 7:
	   cout<<"thank you";
        break;
	default:
	   cout<<"wrong choice";
	   break;		   	
   }
}