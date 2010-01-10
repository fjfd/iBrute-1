#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "hashfunction.h"

using namespace std;

int main()
{
    hasher hashobj;

    cout << "iBrute v0.1" << endl;
    cout << "Which hashtype do you want to brute?" << endl;
    
    bool check_algo;
    string algotype;
    
    while ( check_algo == false ){
    cout << "(MD5, SHA128, SHA256, SHA512)> ";
      getline(cin, algotype);
    if ( algotype == "MD5" || algotype == "SHA128" || algotype == "SHA256" || algotype == "SHA512" ){
        check_algo = true;
        }
    }

    cout << "Enter hash> ";
    string hash2brute;
     getline(cin, hash2brute);

    cout << "Algo...:\t" << algotype << endl;
    cout << "Hash...:\t" << hash2brute << endl;
    cout << "Is that correct (Y/N)> ";

    string correct;
    cin >> correct;

    if ( correct == "Y" || correct == "y" ){
        //begin with the brute
        cout << "Where is the dictionary?: ";
        string pathtodic;
        cin  >> pathtodic;
        
        const char* pathdic = pathtodic.data();

        ifstream dict( pathdic );
        string content;
        string hasherdalesher;

        while ( dict.good() ){
            dict >> content;
            
            if ( algotype == "MD5" ){
                hasherdalesher = hashobj.md5( content );
                if ( hasherdalesher == hash2brute ){
                    cout << "Match found! The word is: " << content << endl;
                    return 0;
                }
                else if ( hasherdalesher != hashobj.md5( content ) ){
                    cerr << "No match found! FAIL!" << endl;
                    return -1;
                }
            }
            else if ( algotype == "SHA128" ){
                hasherdalesher = hashobj.sha128( content );
                if ( hasherdalesher == hash2brute ){
                    cout << "Match found! The word is: " << content << endl;
                    return 0;
                }
                else if ( hasherdalesher != hashobj.sha128( content ) ){
                    cerr << "No match found! FAIL!" << endl;
                    return -1;
                }
            }
            else if ( algotype == "SHA256" ){
                hasherdalesher = hashobj.sha256( content );
                if ( hasherdalesher == hash2brute ){
                    cout << "Match found! The word is: " << content << endl;
                    return 0;
                }
                else if ( hasherdalesher != hashobj.sha256( content ) ){
                    cerr << "No match found! FAIL!" << endl;
                    return -1;
                }
            }
            else if ( algotype == "SHA512" ){
                hasherdalesher = hashobj.sha512( content );
                if ( hasherdalesher == hash2brute ){
                    cout << "Match found! The word is: " << content << endl;
                    return 0;
                }
                else if ( hasherdalesher != hashobj.sha512( content ) ) {
                    cerr << "No match found! FAIL!" << endl;
                    return -1;
                }
            }

        }
    }  
        else if ( correct == "N" || correct == "n" ){
            return 0;
        }
    return 0;
}
