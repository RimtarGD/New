#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

class Seasons {
public:

	enum Season {
		Зима = 0, // 0
		Весна = 1, // 1
		Лето = 2, // 2
		Осень = 3 // 3
	};

	Season change = Зима;

	void SeasonsChange() {
		switch (change) {
		case Зима: change = Весна; break;
		case Весна: change = Весна; break;
		case Лето: change = Весна; break;
		case Осень: change = Весна; break;
		}
	}
	void Return_Seasons() {
		change = Зима;
	}
	void Switch_Seasons() {
		switch (change) {
		case 0: cout << "Зима"; break;
		case 1: cout << "Весна"; break;
		case 2: cout << "Лето"; break;
		case 3: cout << "Осень"; break;
		}
	}
};

class ReverseSeason : public Seasons {
public:

	void SeasonsChange() {
		switch (change) {
		case Зима: change = Осень; break;
		case Весна: change = Зима; break;
		case Лето: change = Весна; break;
		case Осень: change = Лето; break;
		}
	}
};

int main() {
	setlocale(LC_ALL, "Russian");
	Seasons S;
	ReverseSeason R;
	cout << "\n   Хороший сегодня день.\n    -А какое сейчас время года?\n    -";
	S.Switch_Seasons();
	cout << "!";
	cout << "\n    -А какое время года следующее?" << endl;
	S.SeasonsChange();
	cout << "    -";
	S.Switch_Seasons();
	cout << "!" << endl;
	cout << "    -А какое время года перед зимой?\n    -";
	S.Return_Seasons();
	R.SeasonsChange();
	R.Switch_Seasons();
	cout << "!\n    -Как же хорошо!";
	cout << "\n   Время года ";
	S.Switch_Seasons();
	cout << "!\n\n";
}