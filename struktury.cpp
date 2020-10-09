//hubert pasikowski
#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <time.h>
#include <ctime>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

struct zwierze {

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
	bool return_m() { return miesorzerny; }
};
struct zoo {
	vector<zwierze> w_z;
	queue<zwierze> q_z_m;
	stack<zwierze> s_z_r;
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
	int liczba_rodzaju(bool m) {
		int l = 0;
		for (int i = 0;i < w_z.size();i++) {
			if (w_z[i].miesorzerny == m) ++l;

		}
		return l;
	}
	void generuj_kolejki() {
		for (int i = 0;i < w_z.size();i++) {
			if (w_z[i].miesorzerny == true)q_z_m.push(w_z[i]);
			else s_z_r.push(w_z[i]);
		}
	}
};

int main() {
	srand(time(NULL));

	zoo zoo1(10);
	zoo1.wyswietl();
	zoo1.w_z.push_back(zwierze());
	cout << endl;
	zoo1.wyswietl();
	return 0;
}



//zwierze kon;
//kon.nadajTyp();
//kon.wyswietlInformacje(); 
