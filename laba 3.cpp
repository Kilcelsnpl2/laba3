/*************************
* Автор: Карпов Кирилл   *
* Дата:	 22.10.2026      *
* Название: вариант 10   *
*************************/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double l, p, Mu, Re, ksi, W, Wcms, velocityCount, lcm;

  cout << "Width Of Nozzle Channels = ";
  cin >> l;

  cout << "Gas Density = ";
  cin >> p;

  cout << "dynamic Viscosity Of Gas = ";
  cin >> Mu;

  cout << "Enter the number of speed values = ";
  cin >> velocityCount;

  lcm = l / 10.0; // mm => сm

  for (int velocityIndex = 0; velocityIndex < velocityCount; ++velocityIndex) {

	cout << "Gas Velocity = ";
	cin >> W;

	Wcms = W * 100.0; // m/s => cm/s
	Re = ((Wcms * lcm * p) / Mu);

	if (Re < 2500) {
	  ksi = 2.62 / pow(Re, 0.65);
	} else {
	  ksi = 0.125 / pow(Re, 0.26);
    }
		
	cout << "Re = " << Re << " csi = " << ksi << endl;
  }

  return 0;
}