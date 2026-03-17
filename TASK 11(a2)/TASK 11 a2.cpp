#include<iostream>
using namespace std;
int main()
{
	int time = 0, hour = 0, min = 0;

	cout << "Enter time:";
	cin >> time;

	hour = time / 100;
	min = time % 100;

	if (hour == 0)
	{
		hour = 12;
		cout << "Time in 12-hour format:" << hour << ":" << min << "am" << endl;
	}
	else if (hour < 12)
	{
		cout << "Time in 12-hour format:" << hour << ":" << min << "am" << endl;
	}
	else if (hour == 12)
	{
		cout << "Time in 12-hour format:" << hour << ":" << min << "pm" << endl;
	}
	else
	{
		hour = hour - 12;
		cout << "Time in 12-hour format:" << hour << ":" << min << "pm" << endl;
	}
	return 0;
}