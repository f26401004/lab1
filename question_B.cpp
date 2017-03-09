#include<iostream>

int main()
{
	using namespace std;
	int num;
	cin >> num;
	while(num!=1)
	{
		cout << num << " ";
		if(num%2==0) num = num/2;
		else num = 3*num+1;
	}
	cout << num << endl;
	return 0;
}
