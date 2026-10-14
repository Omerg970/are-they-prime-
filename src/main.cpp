#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int fn;
	int sn;
	vector<int> fnumbers = {};
	
	cout << "enter your first number" << endl;
	cin >> fn;
	cout << "enter your second number" << endl;
	cin >> sn;

	for(int i = 2; i <= fn; i++)
	{ 
		if( fn % i == 0)
		{
			fnumbers.push_back(i);
		}
	}
	for(int i = 2; i <= sn; i++)
	{
		if(sn % i == 0)
		{
			for (int k = 0; k < fnumbers.size(); k++)
			{
				if (fnumbers[k] == i) {
					cout << "numbers arent prime that you entered" << endl;
					return 1;
				}
			}
		}
	}
	return 0;//i didnt want to explain, its very clear i think. -,-
}