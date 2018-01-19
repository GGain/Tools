#include <iostream>
#include <fstream> //need for ofstream

using namespace std;

int main(int argc, char** argv)
{
	int count=0;
	ifstream inFile;
	string fileName = "resetcount.txt";
	bool showLog = false;
	if (argc > 1 ) {
		if (!strcmp(argv[1],"-s") || !strcmp(argv[1], "--show")) {
			showLog = true;
		}
	}

	inFile.open(fileName);
	if (inFile.is_open()) {
		inFile >> count;
	}
	inFile.close();
	if (showLog) {
		cout << "Previous reset number: " << count << endl;
	}
	count++;

	ofstream myfile;
	myfile.open(fileName);
	if (myfile.is_open()) {
		
		cout << "Total reset time: " << count << endl;
		myfile << count;
	}
	else {
		if (showLog) {
			cout << "Can not open the file to write" << endl;
		}
	}

	myfile.close();
	if (showLog) {
		system("pause");
	}
	return 0;
}