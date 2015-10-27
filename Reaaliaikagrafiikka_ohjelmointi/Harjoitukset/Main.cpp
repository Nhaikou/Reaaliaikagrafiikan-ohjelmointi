#include <iostream>
#include <vector>


template<class T> class myvector_t
{
	std::vector<T> items;
public:
	myvector_t(int n)
	{
		items.resize(n);
		for (auto i : items)
		{
			i = 0.0;
		}
	}
	myvector_t(int n, T *v)
	{
		items.resize(n);
		for (int i = 0; i < n; i++)
		{
			items[i] = v[i];
		}
	}

	int GetSize() const
	{
		return items.size();
	}

	void push(T const& item)
	{
		items.erase(items.begin());
		items.push_back(item);
	}

	void Print()
	{
		for (int i = 0; i < GetSize(); i++)
		{
			std::cout << items[i] << std::endl;
		}
	}

	myvector_t operator+(const myvector_t &b) const
	{
		if (GetSize() != b.GetSize())
		{
			std::cout << "ERROR" << std::endl;
		}

		myvector_t v(GetSize());
		for (int i = 0; i < GetSize(); i++)
		{
			v.items[i] = items[i] + b.items[i];
		}

		return v;
	}
};


int main()
{
	
	myvector_t<int> vec1(3);
	myvector_t<int> vec2(3);
	myvector_t<int> sumVec(0);

	vec1.push(1);
	vec1.push(2);
	vec1.push(3);

	vec2.push(1);
	vec2.push(1);
	vec2.push(1);

	sumVec = vec1 + vec2;

	sumVec.Print();

	system("pause");
	return 0;

}