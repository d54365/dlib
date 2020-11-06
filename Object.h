#ifndef __OBJECT_H_
#define __OBJECT_H_

namespace DLib
{
	class Object
	{
	public:
		void* operator new(unsigned int size) throw();
		void operator delete(void* p);
		void* operator new[](unsigned int size) throw();
		void operator delete[](void* p);
		virtual ~Object() = 0;
	};
}

#endif // !__OBJECT_H_

