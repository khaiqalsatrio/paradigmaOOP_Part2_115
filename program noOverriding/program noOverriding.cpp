#include <iostream>
using namespace std;

class baseClass {
	public:
		virtual void perkenalan() {
			cout << "hallo saya fungtion dari base class";
		}
};
class derivedClass : public baseClass {
public:
	void perkenalan() {
		cout << "hallo saya function dari derived Class";
	}
};
int main() {
	derivedClass a;
	a.perkenalan();

	return 0;
}