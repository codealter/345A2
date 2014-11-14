//List.h
#pragma once
template<typename T, int max>
class List{
	static const int arr = 1 * max;
	T list[max];
public:
	List(){  }// - default constructor - 0 elements in the list
	size_t size() const// - returns the number of elements in the list(size_t is an unsigned int)
	{
		int count = 0;
		for (int i = 0; i < arr; i++)
		{
			if (list[i].width() > 0)
			{
				count++;
			}
		}
		return count;
	}
	int width() const //- returns the maximum field width required for any element in the list
	{
		int num = 0;
		for (int i = 0; i < size(); i++)
		{
			if (num < list[i].width())
			{
				num = list[i].width();
			}
		}
		return num;

	}
	const T& operator[](int i) const// - returns an unmodifiable reference to element i in the list - to a dummy element if i is out of bounds
	{
		if (i > 0 && i < arr)
		{
			return list[i];
		}
		else
			return list[0];
	}
	void operator+=(const T& src)//-adds the referenced object if there is room in the list - does nothing otherwise
	{
		if (size() <= arr)
		{
			int len = size() + 1;
			for (int i = 0; i < arr; i++)
			{
				if (list[i].width() < 1)
				{
					list[i] = src;
					i = 10;
				}
			}
		}
	}
	void operator+=(T&& src)
	{

	}
};