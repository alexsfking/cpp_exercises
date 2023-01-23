#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;

/*
Given a text file with many lines of numbers to format and print, for each row of 3 space-separated doubles, format and print
the numbers using the specifications in the Output Format section below.

Output
For each test case, print 3 lines containing the formatted A, B, and C, respectively. Each A, B, and C must be formatted as 
follows:

    A: Strip its decimal (i.e., truncate it) and print its hexadecimal representation (including the 0x prefix) in lower 
    case letters.
    B: Print it to a scale of 2 decimal places, preceded by a + or - sign (indicating if it's positive or negative), right
    justified, and left-padded with underscores so that the printed result is exactly 15 characters wide.
    C: Print it to a scale of exactly nine decimal places, expressed in scientific notation using upper case.
*/

        cout << std::resetiosflags(cout.flags());
        long A_new = (long) A;
        std::cout << std::left << std::hex << std::showbase << std::nouppercase;
        std::cout << A_new << endl;
        std::cout << std::right << std::setfill('_') << std::setw(15) << std::fixed << std::setprecision(2) << std::showpos;
        std::cout << B << endl;
        std::cout << std::scientific << std::setprecision(9) << std::uppercase << std::noshowpos;
        std::cout << C << endl;
	}