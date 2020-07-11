#include<iostream>
#define size 10
using namespace std;

template<class T>
class Stack
{
private:
	T a[size];
	int top=-1;
public:
	void push(T x);
	T pop();
};

template<class T>
void Stack<T>::push(T x)
{
	if(top==size-1)
		cout<<"Stack is full";
	else
	{
		top++;
		a[top]=x;
	}
}

template<class T>
T Stack<T>::pop()
{
	T x;
	if(top==-1)
		cout<<"Stack is empty";
	else
	{
		x = a[top];
		top--;
	}
	return x;
}

int main()
{
	Stack<int> s1;
	s1.push(10);
	s1.push(20);
	s1.push(03);
	cout<<s1.pop()<<endl;
	cout<<s1.pop()<<endl;
	cout<<s1.pop()<<endl;
	return 0;
}
