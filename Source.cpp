
#include <iostream>
using namespace std;

class Number
{

	static int count;
	int p;
public:
	Number();
	~Number() {};
	void GetNumber();
};

Number::Number()
{
	static int count = 1;
	p = count++;
}

void Number::GetNumber()
{
	cout << "Moy poradkovuy nomer " << p << endl;
}

int main()
{
	Number A, B, C;
	A.GetNumber();
	B.GetNumber();
	C.GetNumber();
	system("pause");
	return 0;
}