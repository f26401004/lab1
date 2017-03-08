#include<iostream>

int main()
{
	using namespace std;
	int num;
	cin >> num;
	cout << num << endl;
	while(num!=1)
	{
		cout << num;
		if(num%2==0) num = num/2;
		else num = 3*num+1;
	}
	cout << num;
	return 0;
}
