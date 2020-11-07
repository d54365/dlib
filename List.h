#ifndef __LIST_H_
#define __LIST_H_

#include "Object.h"

namespace DLib
{
	template <typename T>
	class List : public Object
	{
	protected:
		List(const List&) {}
		List& operator= (const List&) {}
	public:
		List() {}
		virtual bool insert(const T& e) = 0;
		virtual bool insert(int i, const T& e) = 0;
		virtual bool remove(int i) = 0;
		virtual bool set(int i, const T& e) = 0;
		virtual bool get(int i, T& e) const = 0;
		virtual int length() const = 0;
		virtual void clear() = 0;
	};
}

#endif // !__LIST_H_
