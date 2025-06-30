#include <string>

// back
func(int i)->string (&)[10];

// alias
using strList = string[10];
strList(&func(int i));

// decltype
string strlist[5];
decltype(strlist) &func(int i);
