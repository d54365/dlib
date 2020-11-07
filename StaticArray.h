#ifndef __STATICARRAY_H_
#define __STATICARRAY_H_

#include "Array.h"

namespace DLib
{
	template <typename T, int N>
	class StaticArray : public Array<T>
	{
	protected:
		T m_space[N];
	public:
		StaticArray()
		{
			this->m_array = m_space;
		}

		StaticArray(const StaticArray& obj)
		{
			this->m_array = m_space;
			for (int i = 0; i < length(); i++)
			{
				m_space[i] = obj.m_space[i];
			}
		}

		StaticArray& operator= (const StaticArray& obj)
		{
			if (this != &obj)
			{

				for (int i = 0; i < length(); i++)
				{
					m_space[i] = obj.m_space[i];
				}
			}

			return *this;
		}

		int length() const
		{
			return N;
		}

	};
}

#endif // !__STATICARRAY_H_

