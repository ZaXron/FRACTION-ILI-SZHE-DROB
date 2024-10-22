#include <iostream>
#include <random>
using namespace std;

class Drob {
	float znam;
	float chisl;
public:
	void Prov(int a, int b) {
		znam = b;
		chisl = a;

		if (b == 0) {
			cout << "Знаменитель не может быть нулём!!!";
		}
	}

	void Rand() {
		srand(time(0));
		znam = rand() % 100 + 3;
		chisl = rand() % 100 + 3;
	}

	void Show() {
		cout << chisl << "/" << znam << " = " << chisl / znam;
	}
};
int main()
{
	srand(time(0));
	Drob k;
	Drob f;
	f.Prov(4, 5);
	f.Show();
	cout << endl;
	k.Rand();
	k.Show();
}
