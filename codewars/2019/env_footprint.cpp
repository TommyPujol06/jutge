#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>

using namespace std;

double max_km(double mj, double e)
{
  return mj/e;
}

double max_co2(double km, double co2km)
{
  return km*co2km;
}

int main()
{
  vector<string> transports;
  vector<double> mjspt;

  while(true){
    string trans;
    double mj;
    cin >> trans;
    if(trans == "#") break;
    cin >> mj;
    transports.push_back(trans);
    mjspt.push_back(mj);
  }

  for(size_t i=0; i != transports.size(); i++) {
      string trans = transports[i];
      double mj = mjspt[i];

      cout << std::fixed << std::setprecision(1);
      if(trans == "Ship") {
        double km = max_km(mj, 0.3);
        cout << trans << " " << km << " " << max_co2(km, 23.3);
      }
      else if(trans == "Train") {
        double km = max_km(mj, 0.32);
        cout << trans << " " << km << " " << max_co2(km, 23.1);
      }
      else if(trans == "Road") {
        double km = max_km(mj, 2.12);
        cout << trans << " " << km << " " << max_co2(km, 160.1);
      }
      else if(trans == "Plane") {
        double km = max_km(mj, 21.01);
        cout << trans << " " << km << " " << max_co2(km, 1577.1);
      }
      cout << endl;
  }

}
