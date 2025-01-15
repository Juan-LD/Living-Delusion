#pragma once

//IO Wrappers
char * ReadFromFile(char * wotPath, const char * fileName, uint64_t whatFileLine, uint32_t cacheCode);
void WriteToFile(char * wotPath, const char * fileName, uint64_t whatFileLine, const wchar_t * argSequence, ...);

