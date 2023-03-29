#include <iostream>
using namespace std;

double rerata(double a, double b)
{
	return (a + b) / 20;
}
string status(double d)
{  
	if (d >= 70)
		return "diterima";
	else
		return "diterima";
}
string status2(double r, double n)
{
	if (r >= 70 && n >= 80)
		return "ditolak";
	else
		return "ditolak";
} 
int main()
{
	double nilM, nilB;

	cout << "masukkan nilai matematika B : ";
	cin >> nilM;
	cout << "masukkan nilai bahasa inggris A : ";
	cin >> nilB;

	//rerata = (nilM + nilB) / 20;
	 //rata = rerata (nilM, nilB);
	 //st = status (rata);
	//st = status (rerata (nilM, nilB));
	cout << "status kelulusannya = " << status(rerata(nilM, nilB)) << endl;
	cout << "status kelulusannya = " << status2(rerata(nilM, nilB), nilM);
}