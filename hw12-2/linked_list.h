#ifndef __linked_list__
#define __linked_list__
#include <iostream>
using namespace std;

template <class T>
class Node {
	public:
		T data;
		Node<T>* next;
};

template <class T>
class List {
	private:
		Node<T> *head;
	public:
		List() : head(NULL) {};
		~List() {
			while (head) {
				Node<T>* ptr = head->next;
				delete head;
				head = ptr;
			}
		}

		List(T* arr, int n_nodes) {
			Node<T>* ptn = new Node<T>;
			for(size_t i = 0; i< n_nodes; i++) {
				if (i==0) {
					head = ptn;
				}
				ptn->data = arr[i];
				ptn->next = new Node<T>;
				ptn = ptn->next;
			}
			ptn->next = NULL;
		}

		void insert_at(int idx, T data) {
			Node<T> *ptr = head;
			Node<T> *t = new Node<T>;
			int p = 0;
			while(ptr->next) {
				p++;
				if(p == idx) break;
				ptr = ptr->next;
			}
			t->data = data;
			t->next = ptr->next;
			ptr->next = t;
		}

		void remove_at(int idx) {
			if (idx > 0) {
				Node<T>* now = head;
				while (--idx && now) {
					now = now->next;
				}
				Node<T>* next_node = now->next;
				now->next = next_node->next;
				delete next_node;
			} else {
				pop_front();
			}
		}

		void pop_back() {
			if (head) {
				Node<T>* prev = NULL;
				Node<T>* ptr = head;
				while (ptr->next) {
					prev = ptr;
					ptr = ptr->next;
				}
				delete ptr;
				if (prev) {
					prev->next = NULL;
				} else {
					head = NULL;
				}
			}
		}

		void push_back(T val) {
			Node<T> *p0, *p1, *p2;
			p1 = head;

			p2 = new Node<T>;
			p0 = new Node<T>;
			p0->data = val;

			while (p1->next) {
				p2 = p1;
				p1 = p1->next;
			}
			if(p1!=head) {
				p2->next = p0;
				p0->next = p1;
			} else {
				head = p0;
				p0->next = NULL;
			}


		}

		void pop_front() {
			Node<T>* new_head = NULL;
			if (head->next) {
				new_head = head->next;
			}
			delete head;
			head = new_head;
		}

		void push_front(T val) {
			Node<T>* ptr = new Node<T>;
			ptr->data = val;
			ptr->next = head;
			head = ptr;
		}

		friend ostream& operator<<(ostream& out, List& rhs) {
			Node<T>* ptr = rhs.head;
			int idx = 0;
			while (ptr->next != NULL) {
				out << ptr->data;
				ptr = ptr->next;
				if (ptr->next != NULL) out << ", ";
			}
			out<<endl;
			return out;
		}
};
#endif
