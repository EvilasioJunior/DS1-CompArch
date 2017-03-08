#include <bits/stdc++.h>

using namespace std;

struct node
{
	int value;
	node *next;
	node(int v){ value = v, next = nullptr; }
};

node *head, *tail;
int c;

void push(int v);
int front();
void pop();
bool empty();
int size();

void push(int v)
{
	if(empty())
		head = tail = new node(v);
	else
	{
		tail->next = new node(v);
		tail = tail->next;
	}
	c++;
}

int front()
{
	return head->value;
}

void pop()
{
	if(!empty())
	{
		head = head->next;
		c--;
	}
}

bool empty()
{
	return (head == nullptr);
}

int size()
{
	return c;
}

int main()
{
	
	return 0;
}
