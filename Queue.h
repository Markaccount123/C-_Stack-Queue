#pragma once

namespace wzy
{
	//����ʹ��˳���Ľṹ
	//���ģʽ---������ģʽ
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
		Container _con; //����һ��ʲô���������ǲ�֪����
	};


	void test_queue()
	{
		//���������ʹ��list��д����Ϊ���ʹ��vector��ô���ͷ�����ݣ���Ҫ��ͣ��Ų�����ݣ�Ч�ʻ���,��vector��û��pop_front�Ľӿڵ�
		queue<int, list<int>> q1;

		q1.push(1);
		q1.push(2);
		q1.push(3);
		q1.push(4);

	}
}