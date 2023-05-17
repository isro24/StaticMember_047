#include <iostream>
using namespace std;

class angka {
private:
	int* arr;
	int panjang;
public:
	angka(int); //Constructor
	~angka(); //Destructor
	void cetakdata();
	void isiData();
};
//Definisi member function
angka::angka(int i){	//Constructor
	panjang = 1;
	arr = new int[i];
	isiData();
}

angka::~angka() {	//Destructor
	cout << endl;
	cetakdata();
	delete[]arr;
	cout << "Alamat Array Sudah Dilepaskan" << endl;
}

