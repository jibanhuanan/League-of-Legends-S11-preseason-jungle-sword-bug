#include <iostream>
#include <bitset>

using namespace std;
 
//#define INT_MIN     (-2147483647 - 1)        
//		INT_MAX = 2147483647=2^32-1
//        INT_MIN = -2147483648=-2^32

int main(int argc, char *argv[])
{
	unsigned int a = 2147483648;
    cout << "unsigned int" << endl;
	cout << "+" << a << " : ";
	cout << bitset<32>(a) << endl;
	
	system("pause");
	return 0;

}
