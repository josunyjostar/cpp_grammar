#pragma once

#include <iostream>
using namespace std;
class Resource {

public:
	Resource() {
		cout << "Resource ����" << endl;
	}
	~Resource() {
		cout << "Resource �Ҹ�" << endl;
	}
};