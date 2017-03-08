#include <iostram>

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

int back()
{
	return tail->value;
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
	
	push(5);
	push(6);
	push(7);
	cout << size() << '\n';
	cout << front() << '\n';
	cout << back() << "\n\n";
	pop();
	cout << size() << '\n';
	cout << front() << '\n';
	cout << back() << '\n';
	
	return 0;
}
