/*************************
 * Автор: Карпов Кирилл  *
 * Дата:	 28.12.2007  *
 * Название: вариант 10  *
 *************************/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double theWidthOfTheNozzleChannels, gasDensity, dynamicViscosityOfTheGas, Re, csi;
  double gasVelocity[] = { 1, 2, 5, 10, 20 };

  cout << "theWidthOfTheNozzleChannels = ";
  cin >> theWidthOfTheNozzleChannels;

  cout << "gasDensity = ";
  cin >> gasDensity;

  cout << "dynamicViscosityOfTheGas = ";
  cin >> dynamicViscosityOfTheGas;

  double theWidthOfTheNozzleChannelssm = theWidthOfTheNozzleChannels / 10.0; // mm => сm

  for (int i = 0; i < 5; ++i) {
		
	double gasVelocitysmS = gasVelocity[i] * 100.0; // m/s => cm/s
	Re = ((gasVelocitysmS * theWidthOfTheNozzleChannelssm * gasDensity) / dynamicViscosityOfTheGas);

	if (Re < 2500) {
		csi = 2.62 / pow(Re, 0.65);
	} else {
		csi = 0.125 / pow(Re, 0.26);
    }
		
	cout << "Re = " << Re << " csi = " << csi << endl;
  }

  return 0;

}