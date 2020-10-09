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
};

int main() {
	srand(time(NULL));
	zwierze kon;
	kon.nadajTyp();
	kon.wyswietlInformacje(); 
}
