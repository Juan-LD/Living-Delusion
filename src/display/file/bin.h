#pragma once

//Binary version of the File I/O Wrappers
void * ReadFromBinaryFile(char * wotPath, const char * fileName, uint64_t whatFileLine, uint32_t cacheCode, void * data, uint64_t size);

//TODO: maybe change these arguments i forgor how binary write/read works
void WriteToBinaryFile(char * wotPath, const char * fileName, uint64_t whatFileLine, uint32_t cacheCode, void * data, uint64_t size);
