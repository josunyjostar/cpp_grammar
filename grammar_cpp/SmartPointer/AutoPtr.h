#pragma once
#include <iostream>

template<typename T>
class AutoPtr {
public:
	AutoPtr(T* ptr = nullptr) :m_ptr(ptr) {}
	~AutoPtr() {
		if (m_ptr != nullptr) {
			delete m_ptr;
			m_ptr = nullptr;
		}
	}
public:
	T* m_ptr = nullptr;

};