#include <iostream>
using namespace std;

class remoteLampu {
private:
	string saklarNo[10];
public:
	void setSaklarNo(int i, string value) {
		saklarNo[i] = value;
	}
	string getsaklarno(int i) {
		return saklarNo[i];
	}
};

