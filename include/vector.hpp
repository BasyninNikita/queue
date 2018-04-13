#include <iostream>
#include <algorithm>
#include <cassert>
template <typename T>
class queue_t
{
private:
	struct node_t {
		node_t * next;
		T value;
	};
private:
	node_t * head;
	node_t * tail;
public:
	vector_t();
	~vector_t();
	void push(T value);
	void pop();
};
template <typename T>
queue_t<T>::queue_t()
{
	head=nullptr;
	tail=nullptr;
}
template <typename T>
queue_t<T>::queue_t()
{
	node_t * node=other.head;
	head=new node_t;
	head->value=node->value;
	head-next=nullptr;
	tail=head;
	node=node->next;
	while(node!=nullptr)
	{
		tail->next=new node_t;
		tail = tail->next;
		tail->value = node->value;
		tail->next = nullptr;
		node = node->next;	
	}
}
template <typename T>
queue_t<T>::~queue_t()
{
	if(head!=nullptr)
	{
		destr(head);
	}
}
template <typename T>
void queue_t<T>::destr(node_t * node)
{
	if(node!=nullptr)
	{
		if(node->next!=nullptr)
		{
			del(node->next)
		}
		delete node;
	}
}
template <typename T>
void queue_t<T>::push(T value)
{
	if(head==nullptr)
	{
		head=new node_t
		head->value=value;
		head->next=nullptr;
		tail=head;
	}
	else {
		tail->next=new node_t
		tail=tail->next;
		tail->value=value;
		tail.next=nullptr;
	}
}
template <typename T>
void queue_t<T>::pop()
{
	if(head==nullptr)
	{
	throw error("can't delete")	
	}
   	T a=head->value;
	node_t * node=head
	head=head->next;
	delete node;
	return a;
}



