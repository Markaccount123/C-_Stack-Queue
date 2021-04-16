#pragma once

namespace wzy
{
	//可以使用顺序表的结构
	//设计模式---适配器模式
	template<class T, class Container = deque<T>>
	class queue
	{
	public:
		void push(const T& x)
		{
			_con.push_back(x);
		}

		void pop()
		{
			_con.pop_front();
		}

		const T& front()const
		{
			return _con.front();
		}

		const T& back()const
		{
			return _con.back();
		}

		size_t size()const
		{
			return _con.size();
		}

		bool empty()const
		{
			return _con.empty();
		}
	private:
		Container _con; //这是一个什么适配器我是不知道的
	};


	void test_queue()
	{
		//队列最好是使用list来写，因为如果使用vector那么你队头出数据，还要不停的挪动数据，效率会变低,且vector是没有pop_front的接口的
		queue<int, list<int>> q1;

		q1.push(1);
		q1.push(2);
		q1.push(3);
		q1.push(4);

	}
}