#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    cout << "iBrute v0.1" << endl;
    cout << "Which hashtype do you want to brute?" << endl;
    
    cout << "(MD5, SHA128, SHA256, SHA512)> ";
    string algotype;
     cin >> algotype;

    cout << "Enter hash: ";
    string hash2brute;
     cin >> hash2brute;

    while ( thread_counts <= 6 ){
    cout << "How many threads should i use (max. 6): ";
    unsigned short int threads_count = 0;
     cin >> threads_count;
    }
}
