#include <iostream>
using namespace std;
char count[] = "s";
int i = 99;
int main() {
	for ( ;; i-- ) {
		if ( i == 1 ) { count[0] = '\0'; }
		if ( i != 0 ) {
			if ( i != 99 ) {
				cout << i << " bottle" << count << " of beer on the wall\n\n";
			}
			cout << i << " bottle" << count << " of beer on the wall,\n";
			cout << i << " bottle" << count << " of beer\n\n";
			cout << "Take one down, pass it around,\n";
		} else {
			cout << "no more bottles of beer on the wall\n\n";
			cout << "Go to the store and buy some more,\n";
			cout << "99 bottles of beer on the wall\n";
			return 0;
		}
	}
}
