#pragma once

namespace wzy
{
	//����ʹ��˳���Ľṹ
	//���ģʽ---������ģʽ
	template<class T,class Container = deque<T>>
	class stack
	{
	public:
		void push(const T& x)
		{
			_con.push_back(x);
		}

		void pop()
		{
			_con.pop_back();
		}

		const T& top()const
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


	void test_stack()
	{
		stack<int, vector<int>> st1;
		stack<int, list<int>> st2;

		st1.push(1);
		st1.push(2);
		st1.push(3);
		st1.push(4);



		st2.push(1);
		st2.push(2);
		st2.push(3);
		st2.push(4);

	}
}