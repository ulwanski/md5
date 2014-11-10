#ifndef MD5_H
#define MD5_H

#include <string>

std::string md5sum(std::string dat);
std::string md5sum(const void* dat, size_t len);
std::string md5file(const char* filename);
std::string md5file(std::FILE* file);
std::string md5sum6(std::string dat);
std::string md5sum6(const void* dat, size_t len);

#endif // end of MD5_H