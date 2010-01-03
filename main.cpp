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

    bool okay = false;

    while ( okay == false ){
    cout << "How many threads should i use (max. 6): ";
    unsigned short int threads_count = 0;
     cin >> threads_count;
    if ( threads_count <= 6 ){
        okay = true;
        }
    }
    cout << okay;
    cout << algotype;
    cout << hash2brute;
}
