#include <iostream>
#include <cmath>

using namespace std;

int days_left(int population)
{
  int days = 0;
  int zombies = 1;
  do {
    int infected = min(population, 2*zombies);
    int dead = ceil(0.25*zombies);
    population -= infected;
    zombies += infected - dead;
    days++;
  } while(population > 0);
  return days;
}

int main()
{
  int population;
  cin >> population;

  cout << days_left(population) << " days" << endl;
}
