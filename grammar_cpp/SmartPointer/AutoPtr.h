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
		if(m)
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