#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	// String obj
	char *str = "bhavinpatil";
	int i = 0;
	while (str[i])
		i++;
	cout << i << endl;


	return 0;
}
