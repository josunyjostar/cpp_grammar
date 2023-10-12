#pragma once

#include <iostream>
using namespace std;
class Resource {

public:
	Resource() {
		cout << "Resource »ý¼º" << endl;
	}
	~Resource() {
		cout << "Resource ¼Ò¸ê" << endl;
	}
};