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

	// Summa
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
	// Vähennys
	myvector_t operator-(const myvector_t &b) const
	{
		if (GetSize() != b.GetSize())
		{
			std::cout << "ERROR" << std::endl;
		}

		myvector_t v(GetSize());
		for (int i = 0; i < GetSize(); i++)
		{
			v.items[i] = items[i] - b.items[i];
		}

		return v;
	}

	// Kerto
	myvector_t operator*(const myvector_t &b) const
	{
		if (GetSize() != b.GetSize())
		{
			std::cout << "ERROR" << std::endl;
		}

		myvector_t v(GetSize());
		for (int i = 0; i < GetSize(); i++)
		{
			v.items[i] = items[i] * b.items[i];
		}

		return v;
	}
};


int main()
{
	// Vektori laskut
	//----------------------------------------------------------------------
	myvector_t<int> vec1(3);
	myvector_t<int> vec2(3);
	myvector_t<int> sumVec(0);
	myvector_t<int> minVec(0);
	myvector_t<int> multVec(0);


	vec1.push(1);
	vec1.push(2);
	vec1.push(3);

	vec2.push(1);
	vec2.push(1);
	vec2.push(2);

	sumVec = vec1 + vec2;
	minVec = vec1 - vec2;
	multVec = vec1 * vec2;
	std::cout << "Sum" << std::endl;
	sumVec.Print();
	std::cout << std::endl;
	std::cout << "Min" << std::endl;
	minVec.Print();
	std::cout << std::endl;
	std::cout << "Income" << std::endl;
	multVec.Print();
	std::cout << std::endl;
	//---------------------------------------------------------------------



	system("pause");
	return 0;

}