#include <iostream>
#include <cstring>
using namespace std; 

int main()
{
	char place[] = "Hello World"; 
	if (strstr(place, "Hello"))
		cout << "Hello found" << endl;
	else
		cout << "Hello not found." << endl; 
	return 0; 
}