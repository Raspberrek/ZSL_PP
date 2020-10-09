//hubert pasikowski
#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <time.h>
#include <ctime>
#include <vector>
using namespace std;

struct zwierze {
private:
	int typ;
	int rozmiar;
	bool miesorzerny;
public:
	void nadajTyp() {
		typ = rand() % 9 + 1;
	};
	void nadajRozmiar() {
		rozmiar = rand() % 15 + 1;
	}
	void nadajZernosc() {
		if (typ < 5) {
			miesorzerny = true;
		}
		else miesorzerny = false;
	}
	void wyswietlInformacje() {
		cout << "typ " << typ << endl << "rozmiar " << rozmiar << endl << "miesorzerny " << miesorzerny << endl;
	}
	zwierze() {
		nadajRozmiar();
		nadajTyp();
		nadajZernosc();
	}
};
struct zoo {
	vector<zwierze> w_z;
	zoo(int l) {
		for (int i = 0; i < l; i++) {
			w_z.push_back(zwierze());
		};
	};
	void wyswietl() {
		for (int i = 0; i<w_z.size() ;i++) {
			w_z[i].wyswietlInformacje();
		};
	};
};

int main() {
	srand(time(NULL));
	//zwierze kon;
	//kon.nadajTyp();
	//kon.wyswietlInformacje(); 

	zoo zoo1(10);
	zoo1.wyswietl();
	zoo1.w_z.push_back(zwierze());
	cout << endl;
	zoo1.wyswietl();
	return 0;
}
