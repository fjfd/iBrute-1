/*Credits to Cereal (2010)*/

#ifndef _HASHFUNCTION_H_
#define _HASHFUNCTION_H_


#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <cryptopp/md5.h>
#include <cryptopp/sha.h>

using namespace std;
using namespace CryptoPP;

class hasher
{
    public:
        string endhash;

        string md5( string content );

        string sha128( string content );
        string sha256( string content );
        string sha512( string content );
};

#endif
