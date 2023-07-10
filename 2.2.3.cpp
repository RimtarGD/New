#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

class Seasons {
public:

	enum Season {
		���� = 0, // 0
		����� = 1, // 1
		���� = 2, // 2
		����� = 3 // 3
	};

	Season change = ����;

	void SeasonsChange() {
		switch (change) {
		case ����: change = �����; break;
		case �����: change = �����; break;
		case ����: change = �����; break;
		case �����: change = �����; break;
		}
	}
	void Return_Seasons() {
		change = ����;
	}
	void Switch_Seasons() {
		switch (change) {
		case 0: cout << "����"; break;
		case 1: cout << "�����"; break;
		case 2: cout << "����"; break;
		case 3: cout << "�����"; break;
		}
	}
};

class ReverseSeason : public Seasons {
public:

	void SeasonsChange() {
		switch (change) {
		case ����: change = �����; break;
		case �����: change = ����; break;
		case ����: change = �����; break;
		case �����: change = ����; break;
		}
	}
};

int main() {
	setlocale(LC_ALL, "Russian");
	Seasons S;
	ReverseSeason R;
	cout << "\n   ������� ������� ����.\n    -� ����� ������ ����� ����?\n    -";
	S.Switch_Seasons();
	cout << "!";
	cout << "\n    -� ����� ����� ���� ���������?" << endl;
	S.SeasonsChange();
	cout << "    -";
	S.Switch_Seasons();
	cout << "!" << endl;
	cout << "    -� ����� ����� ���� ����� �����?\n    -";
	S.Return_Seasons();
	R.SeasonsChange();
	R.Switch_Seasons();
	cout << "!\n    -��� �� ������!";
	cout << "\n   ����� ���� ";
	S.Switch_Seasons();
	cout << "!\n\n";
}