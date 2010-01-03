#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    cout << "iBrute v0.1" << endl;
    cout << "Which hashtype do you want to brute?" << endl;
    
    bool check_algo;
    
    while ( check_algo == false ){
    cout << "(MD5, SHA128, SHA256, SHA512)> ";
    string algotype;
     cin >> algotype;
    if ( algotype == "MD5" || "SHA128" || "SHA256" || "SHA512" ){
        check_algo = true;
        }
    }

    cout << "Enter hash: ";
    string hash2brute;
     cin >> hash2brute;

    int threadscount;
    bool check_threads = false;

    while ( check_threads == false ){
    cout << "How many threads should i use (max. 6): ";
     cin >> threadscount;
    if ( threadscount <= 6 ){
        check_threads = true;
        }
    }

    cout << "Threads:\t" << threadscount << endl;
    cout << "Algo...:\t" << algotype << endl;
    cout << "Hash...:\t" << hash2brute << endl;
}
