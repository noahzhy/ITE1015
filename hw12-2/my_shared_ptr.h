#ifndef __my_shared_ptr__
#define __my_shared_ptr__
#include <iostream>
using namespace std;

template <class T>
class My_shared_ptr {
	private:
		T* m_obj = NULL;
		int* count = NULL;
	public:
		My_shared_ptr(){
			m_obj = NULL;
			count = NULL;
		}
		My_shared_ptr(T* obj){
			m_obj = obj;
			count = new int;
			*count = 1;
		}
		My_shared_ptr(const My_shared_ptr& rhs){
			m_obj = rhs.m_obj;
			count = rhs.m_count;
			*count += 1;
		}
		~My_shared_ptr(){
			*count -= 1;
			if (*count <= 0) {
					delete m_obj;
					delete count;
			}
			if(getCount() == 0) cout << "everything destroyed"<<endl;
		}

		My_shared_ptr<T>& operator=(const My_shared_ptr<T>& rhs){
			if (m_obj == NULL || count == NULL) {
					delete m_obj;
					delete count;
			} else {
					*count -= 1;
					if (*count <= 0) {
							delete m_obj;
							delete count;
					}
			}

			m_obj = rhs.m_obj;
			count = rhs.count;
			*count += 1;
			return *this;
		}
		const T* get_m_obj(){ return m_obj;}

		int getCount(){
				if (count) {
            return *count;
        } else {
            return 0;
        }
		}
		void increase(){
			if (count) {
					*count += 1;
			}
		}
		void decrease(){
			if (count) {
					*count -= 1;
			}
		}
};

#endif
