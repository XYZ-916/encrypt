#ifndef __ENCRYPT_MD_FIVE__
#define __ENCRYPY_MD_FIVE__

#include <iostream>
#include <string>

/* Type define */
typedef unsigned char byte;
typedef unsigned long ulong;


using std::string;
using std::ifstream;

class MD5 {
public:
	MD5();
	~MD5();

	void encryptString(const string &str);
	void encryptFile(const string &fileName);

protected:
	void encrypt(const byte *input, ulong length);


};


#endif /*__ENCRYPT_MD_FIVE__*/