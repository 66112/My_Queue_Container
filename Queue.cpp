#include <iostream>
#include <deque>
#include <list>
using namespace std;

template <class T,class Container = deque<T>>
class Queue
{
public:
	void Push(const T& data)
	{
		_con.push_back(data);
	}
	void Pop()
	{
		_con.pop_front();
	}
	size_t Size()
	{
		return _con.size();
	}
	T& Top()
	{
		return _con.front();
	}
	bool Empty()
	{
		return _con.empty();
	}
private:
	Container _con;        //һ��������󣬱��������Զ�����_con�Ĺ��캯��
};
int main()
{
	Queue<int> q1;
	q1.Push(1);
	q1.Push(2);
	q1.Push(3);
	q1.Push(4);
	while (!q1.Empty())
	{
		cout << q1.Top() << " ";
		q1.Pop();
	}
	cout << endl;
	return 0;
}