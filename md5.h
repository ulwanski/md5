#ifndef MD5_H
#define MD5_H

#include <string>

/* Same as 'md5sum' command, returned size is always 32 */
std::string md5sum(const void* dat, size_t len);

/* Return Calculated raw result(always little-endian), the size is always 16 */
void md5bin(const void* dat, size_t len, unsigned char out[16]);

/* Generate shorter md5sum by something like base62 instead of base16 or base10. 0~61 are represented by 0-9a-zA-Z */
std::string md5sum6(const void* dat, size_t len);

#endif // end of MD5_H