#include <iostream>
using namespace std;

struct Node {
	int noMhs;
	string name;
	Node* next;
};

Node* START = NULL;

void addNode() {
	int nim;
	string nama;
	Node* nodebaru = new Node();
	cout << "Masukan NIM: ";
	cin >> nim;
	cout << "Masukan Nama: ";
	cin >> nama;
	nodebaru->noMhs = nim;
	nodebaru->name;
	return;
}
