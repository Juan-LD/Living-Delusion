#pragma once

//Wrappers for the standart openclose file functions
FILE * fopenSafe(const char * fileName, char * mode);
void fcloseSafe(FILE * fCloseThisFile);
