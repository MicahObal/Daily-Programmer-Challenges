#include <iostream>
using namespace std;

int main() {
	string numbers = "65 36 23 27 42 43 3 40 3 40 23 32 23 26 23 67 13 99 65 1 3 65 13 27 36 4 65 57 13 7 89 58 23 74 23 50 65 8 99 86 23 78 89 54 89 61 19 85 65 19 31 52 3 95 89 81 13 46 89 59 36 14 42 41 19 81 13 26 36 18 65 46 99 75 89 21 19 67 65 16 31 8 89 63 42 47 13 31 23 10 42 63 42 1 13 51 65 31 23 28";
	string results, placeholder;
	
	for (string::size_type i = 0; i < numbers.length(); i++) {
		if ((numbers[i] == ' ') || i == (numbers.length() - 1)) {
			if (results.find(placeholder) != string::npos) {
				placeholder = "";
			} else {
				results += (placeholder + ' ');
				placeholder = "";
			}
		} else {
			placeholder += numbers[i];
		}
	}
	
	cout<<"Original: "<<numbers<<endl<<endl;
	cout<<"Culled: "<<results<<endl;
}
