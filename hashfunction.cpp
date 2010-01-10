/*Credits to Cereal (2010)*/

#include "hashfunction.h"

string hasher::md5( string content ){
    Weak::MD5 hash;
    
    byte digest[Weak::MD5::DIGESTSIZE];
    
    hash.CalculateDigest( digest, (const byte*)content.c_str(), content.length() );

	size_t size = sizeof( digest );
	unsigned int b;
	const byte* p = digest;
	ostringstream r;
 
	while( p != digest + size )
	{
	    b = *reinterpret_cast<const unsigned int*>( p );
	    b = ((b & 0x000000ff) << 24) |
    	((b & 0x0000ff00) << 8) |
    	((b & 0x00ff0000) >> 8) |
    	((b & 0xff000000) >> 24);
    	r << std::hex << std::setfill('0') << std::setw(8) << b;
 
    	p += 4;
	}
    
    endhash = r.str();
    return endhash;
}

string hasher::sha128( string content ){
    byte hash[SHA1::DIGESTSIZE];
    
    SHA1().CalculateDigest( hash, (const byte*)content.c_str(), content.length() );

    size_t size = sizeof( hash );
    unsigned int b;
    const byte* p = hash;
    ostringstream r;

    while( p != hash + size )
    {
        b = *reinterpret_cast<const unsigned int*>( p );
        b = ((b & 0x000000ff) << 24) |
        ((b & 0x0000ff00) << 8) |
        ((b & 0x00ff0000) >> 8) |
       ((b & 0xff000000) >> 24);
        r << std::hex << std::setfill('0') << std::setw(8) << b;
    
       p += 4;
    }

    endhash = r.str();
    return endhash;
}

string hasher::sha256( string content ){
    byte hash[SHA256::DIGESTSIZE];
    
    SHA256().CalculateDigest( hash, (const byte*)content.c_str(), content.length() );
    
    size_t size = sizeof( hash );
    unsigned int b;
    const byte* p = hash;
    ostringstream r;

    while( p != hash + size )
    {
        b = *reinterpret_cast<const unsigned int*>( p );
        b = ((b & 0x000000ff) << 24) |
        ((b & 0x0000ff00) << 8) |
        ((b & 0x00ff0000) >> 8) |
       ((b & 0xff000000) >> 24);
        r << std::hex << std::setfill('0') << std::setw(8) << b;
    
       p += 4;
    }

    endhash = r.str();
    return endhash;
}

string hasher::sha512( string content ){
    byte hash[SHA512::DIGESTSIZE];
    
    SHA512().CalculateDigest( hash, (const byte*)content.c_str(), content.length() );

    size_t size = sizeof( hash );
    unsigned int b;
    const byte* p = hash;
    ostringstream r;

    while( p != hash + size )
    {
        b = *reinterpret_cast<const unsigned int*>( p );
        b = ((b & 0x000000ff) << 24) |
        ((b & 0x0000ff00) << 8) |
        ((b & 0x00ff0000) >> 8) |
       ((b & 0xff000000) >> 24);
        r << std::hex << std::setfill('0') << std::setw(8) << b;
    
       p += 4;
    }

    endhash = r.str();
    return endhash;
}
