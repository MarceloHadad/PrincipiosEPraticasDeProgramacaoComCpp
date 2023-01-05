#include "std_lib_facilities.h"

int main()
{
	double distance = 0;
	double sumDistance = 0;
	double minorDistance = 0;
	double greaterDistance = 0;
	double averageDistance = 0;
	vector<double> distanceVec;

	// Leia uma sequência de valores double para um vector.
	// Pense em cada um destes valores como sendo a distância entre duas cidades ao longo de um trajeto.
	while (cin >> distance)
	{
		distanceVec.push_back(distance);
	}

	// Calcule e imprima a distância total (a soma de todas as distâncias).
	for (int i = 0; i < distanceVec.size(); i++)
	{
		sumDistance += distanceVec[i];
	}

	cout << "The sum of the distances is " << sumDistance << endl;

	// Descubra e imprima a menor e a maior distância entre duas cidades vizinhas.
	sort(distanceVec);

	minorDistance = distanceVec.front();
	greaterDistance = distanceVec.back();

	cout << "The greater distance is " << greaterDistance << endl;
	cout << "The minor distance is " << minorDistance << endl;

	// Descubra e imprima a distância média entre dias cidades vizinhas.
	averageDistance = sumDistance / distanceVec.size();

	cout << "The average distance is " << averageDistance << endl;

	return 0;
}