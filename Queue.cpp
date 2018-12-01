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
	Container _con;        //一旦定义对象，编译器会自动调用_con的构造函数
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