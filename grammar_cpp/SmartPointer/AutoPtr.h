#pragma once
#include <iostream>

using namespace std;

template<typename T>
class AutoPtr {

public:
	AutoPtr(T* ptr = nullptr) :m_ptr(ptr) {
		cout << "Auto ptr ������" << endl;
	}

	AutoPtr(const AutoPtr& a) {
		cout << "Auto ptr ���� ������" << endl;

		//*deep copy
		m_ptr = new T;
		*m_ptr = *a.m_ptr;
	}

	AutoPtr& operator=(const AutoPtr& a) {
		cout << "Auto ptr ���� ���� ������" << endl;
		if (&a == this) return *this;

		if (m_ptr != nullptr) {
			delete m_ptr;
		}

		m_ptr = new T;
		*m_ptr = *a.m_ptr;

		return *this;
	}

	AutoPtr(AutoPtr&& a) :m_ptr(a.m_ptr) {
		cout << "Auto ptr �̵� ������" << endl;

		//*swallow copy
		a.m_ptr = nullptr;
	}

	AutoPtr& operator=(AutoPtr&& a) {
		cout << "Auto ptr �̵� ���� ������" << endl;
		if (&a == this) return *this;

		if (m_ptr != nullptr) {
			delete m_ptr;
		}

		m_ptr = a.m_ptr;
		a.m_ptr = nullptr;

		return *this;
	}

	~AutoPtr() {
		cout << "Auto ptr �Ҹ���" << endl;
		if (m_ptr != nullptr) {
			delete m_ptr;
			m_ptr = nullptr;
		}
	}
public:
	T* m_ptr = nullptr;

};