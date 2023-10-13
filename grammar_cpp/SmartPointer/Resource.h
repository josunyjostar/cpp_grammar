#pragma once

#include <iostream>
using namespace std;
class Resource {

public:
	Resource() {
		cout << "Resource �⺻ ������" << endl;
	}

	Resource(unsigned length) {
		cout << "Resource length ������" << endl;
		m_data = new int[length];
		m_length = length;
	}

	Resource(const Resource& res) {
		cout << "Resource ���� ������" << endl;

		Resource(res.m_length);

		for (unsigned i = 0; i < m_length; ++i)
			m_data[i] = res.m_data[i];		
	}

	~Resource() {
		cout << "Resource �Ҹ�" << endl;
		if (m_data != nullptr)
			delete[] m_data;
	}

	Resource& operator=(Resource& res) {
		cout << "Resource ���� ���� ������" << endl;
		if (&res == this) return *this;

		if (m_data != nullptr) delete[] m_data;

		m_length = res.m_length;
		m_data = new int[m_length];

		for (unsigned i = 0; i < m_length; ++i)
			m_data[i] = res.m_data[i];

		return *this;
	}

	void print() {
		for (unsigned i = 0; i < m_length; ++i)
			cout << m_data[i] << " ";
		cout << endl;
	}

public:
	int* m_data = nullptr;
	unsigned m_length = 0;
};