//writing to and reading from file
#include<iostream>
#include<fstream>
#include <string>
using namespace std;
int main(){
	while (1){
		cout << "To write to the file click 1" << endl;
		cout << "To read the whole file click 2" << endl;
		cout << "To search in the file click 3" << endl;
		int choice;
		cin >> choice;
		if (choice == 1){
			ofstream writefile;
			writefile.open("TextFile1.txt", ios::app);
			if (!writefile.is_open()){
				cerr << "File not found" << endl;
				return 1;
			}
			else{
				char inname[100];
				cout << "Write what do you want to write to the file : ";
				cin >> inname;
				writefile << inname << endl;
				cout << "Writing went successfully" << endl;
				writefile.close();
			}
		}
		else if (choice == 2){
			ifstream readallfile;
			readallfile.open("TextFile1.txt", ios::app);
			if (!readallfile.is_open()){
				cerr << "File not found" << endl;
				return 1;
			}
			else{
				char c;
				cout << "****************************************************************************************" << endl;
				while (readallfile.get(c)) { cout << c; }
				readallfile.close();
				cout << endl;
				cout << "****************************************************************************************" << endl;
			}
		}
		else cout << "wrong input..." << endl;
	}
}