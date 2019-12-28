#include<iostream>
#include<cmath>
using namespace std;
int getStringLength(const char *);
void concatenate(char * destination, char * source);
void copyString(char * destination,const char * source);
void insertString(char * destination, char * source, int index);
int convertToInteger(char * source);
float convertToFloat(char * source);
int findSubString(char * destination, char * key, int start = 0);
int findSubString(char * destination, char ch, int start);
int insertString(char * destination, int index, char ch);
int remove(char * destination, int count);
int removeSubString(char * destination, char * source, int indexx);
int remove(char * destination, char ch);
void trim(char * destination);
void replace(char * destination, char * old, char *newone);
void makeUpperCase(char * destination);
void makeLower(char * destination);
void reverse(char * destination);
int compare(char * a, char * b, bool caseSensitive=true);