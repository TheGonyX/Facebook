#include <iostream>
#include <string>
#include <ctime>
#include <chrono>
#include <thread>

using namespace std;
using namespace std::this_thread;
using namespace std::chrono;

int main() {

	string jmeno;
	string heslo="1";
	string heslo2="2";
	string opakovat;
	system("Color 1F");

	cout << "zvolte sve uzivatelske jmeno: " << endl;
	cin >> jmeno;
	while (heslo != heslo2) {
		system("cls");
		cout << "Zadejte heslo: " << endl;
		cin >> heslo;
		cout << "Zopakujte heslo: " << endl;
		cin >> heslo2;
		if (heslo != heslo2)				{ 
			cout << "Nespravne heslo" << endl;
			sleep_until(system_clock::now() + seconds(1));
		}

							}
	system("cls");





	cout <<"\t \t \t \t Dekujeme za vytvoreni vaseho uctu Facebook" << endl;
	sleep_until(system_clock::now() + seconds(2));
	system("cls");
	cout << "\t \t \t \t \t Koho mozna znate" << endl;
	cout << "\t \t \t \t \t Jakub Ce" << endl;
	cout << "\t \t \t \t \t Milos Zeman" << endl;
	cout << "\t \t \t \t \t Bohuslav Sobotka" << endl;
	cout << "\t \t \t \t \t Miroslav Kalousek" << endl;
	cout << "\t \t \t \t \t Radomir Matonoha" << endl;
	cout << "\t \t \t \t \t Oldrich Seidler" << endl;
	cout << "\t \t \t \t \t Dominik Holusa " << endl;
	cout << "\t \t \t \t \t Martin Uvira" << endl;







	system("pause");
}