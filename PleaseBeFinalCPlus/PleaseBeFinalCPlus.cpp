
#include <iostream>
#include <string.h>
using namespace std;
//using std::
int main()
{
	char a[2];
	int res = 1;

	for (int i = 0; i < 2; i++) {
		cin >> a;
		res = res * atoi(a);
	}
	
	cout << " Res = " << res;

	return 0;
}
