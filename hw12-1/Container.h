#ifndef __Container__
#define __Container__
#include "MyContainer.h"
#include <iostream>
using namespace std;

int max(int a, int b) {
	if (a > b) {
		return a;
	} else {
		return b;
	}
}

template <typename T>
class MyVector : public MyContainer<T> {
	public:
		MyVector() : MyContainer<T>() {
			capacity = 0;
		}

		MyVector(int n) : MyContainer<T>(n) {
			capacity = n;
		}

		MyVector(T* arr, size_t n) : MyContainer<T>(arr, n) {
			capacity = n;
		}

		bool empty() {
			if (MyContainer<T>::n_elements == 0) {
				return 1;
			} else {
				return 0;
			}
		}

		int size() {
			return MyContainer<T>::n_elements;
		}

		int max_size() {
			return capacity;
		}

		void reserve(int new_cap) {
			if (new_cap > capacity) {
				T* ptmp = new T[new_cap];
				for (size_t i = 0; i < MyContainer<T>::n_elements; i++) {
					ptmp[i] = MyContainer<T>::obj_arr[i];
				}
				MyContainer<T>::obj_arr = ptmp;
				capacity = new_cap;
			}
		}

		void push_back(T obj) {
			if (MyContainer<T>::n_elements >= capacity) {
				reserve(max(1, capacity * 2));
				MyContainer<T>::obj_arr[MyContainer<T>::n_elements++] = obj;
			}
		}

		void pop_back() {
			if (MyContainer<T>::n_elements > 0) {
				MyContainer<T>::obj_arr[MyContainer<T>::n_elements--] = NULL;
			}
		}

		T& front() {
			return MyContainer<T>::obj_arr[0];
		}

		T& back() {
			return MyContainer<T>::obj_arr[MyContainer<T>::n_elements - 1];
		}

		T& at(int idx) {
			if (idx < MyContainer<T>::n_elements && idx>= 0) {
				return MyContainer<T>::obj_arr[idx];
			}
		}

		T& operator[](const int &i) {
			return MyContainer<T>::obj_arr[i];
		}

		MyVector operator+(const MyVector<T> &rhs) {
			int sum_elements = MyContainer<T>::n_elements + rhs.n_elements;

			MyVector tmp(sum_elements);
			for (size_t i = 0; i < MyContainer<T>::n_elements; i++) {
				tmp[i] = MyContainer<T>::obj_arr[i];
			}

			for (size_t i = 0; i < rhs.n_elements; i++) {
				tmp[MyContainer<T>::n_elements + i] = rhs.obj_arr[i];
			}

			return tmp;
		}

	private:
		int capacity;
};

#endif
