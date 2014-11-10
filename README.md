md5
===

Class to create MD5 checksum from file or string

<b>Example</b>

```c++

#include "md5/md5.h"

int main(int argc,char** argv){

  char cstring[] = "To jest testowy string";
	std::string str = "Bla, to jest test :)";

  /* MD5 from std::string */
  printf("md5sum: %s\n",  md5sum(  str ).c_str());
  
  /* MD5 from c-string */
  printf("md5sum: %s\n",  md5sum(  cstring ).c_str());
  
  /* MD5 from filename */
  printf("md5file: %s\n", md5file("README.md").c_str());
  
  /* Short MD5 from c-string */
  printf("md5sum6: %s\n", md5sum6( cstring ).c_str());

	/* we're done */
	return EXIT_SUCCESS;
}

```
