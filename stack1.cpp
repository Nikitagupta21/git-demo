#include<iostream>
using namespace std;
#include<stack>
#include<bits/stdc++.h>
int main()
{
	stack<int>s;
	stack<int>s1;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.push(4);
	s1.push(5);
	while(!s.empty())
	{
		cout<<"elements: "<<s.top()<<endl;
		s.pop();
		
	}
	while(!s1.empty())
	{
		cout<<"elements are "<<s.top()<<endl;
		s.pop();
	}
	s.swap(s1);
	while(!s.empty())
	{
		cout<<"elements: "<<s.top()<<endl;
		s.pop();
		
	}
	while(!s1.empty())
	{
		cout<<"elements are "<<s.top()<<endl;
		s.pop();
	}
	return 0;
}
