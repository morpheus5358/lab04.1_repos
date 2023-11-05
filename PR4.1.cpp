#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int k, N;
	double S;
	cout << "k = "; cin >> k;
	cout << "N = "; cin >> N;
	S = 0;
	k = 1;
	while (k <= N)
	{
		S += ((pow(k, 2)) / (pow(N, 2))) * cos(1.) * ((pow(N, 2)) / (pow(k, 2)));
		k++;
	}
	cout << S << endl;
	
	
	S = 0;
	k = 1;
	do {
		S += ((pow(k, 2)) / (pow(N, 2))) * cos(1.) * ((pow(N, 2)) / (pow(k, 2)));
		k++;
	} while (k <= N);
	cout << S << endl;
	
	
	S = 0;
	for (k = 1; k <= N; k++)
	{
		S += ((pow(k, 2)) / (pow(N, 2))) * cos(1.) * ((pow(N, 2)) / (pow(k, 2)));
	}
	cout << S << endl;
	
	
	S = 0;
	for (k = N; k >= 1; k--)
	{
		S += ((pow(k, 2)) / (pow(N, 2))) * cos(1.) * ((pow(N, 2)) / (pow(k, 2)));
	}
	cout << S << endl;
	return 0;
}
