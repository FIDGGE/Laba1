/***********************
 *Автор: Гончаров Роман*
 *Вариант: 4           *
 ***********************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
  double W, Re, Ga, A, Pe;
    
  Re = 61000.0;
  Ga = 90000.0;

for (int i = 0; i < 5; i++) {
  cout << "W = ";
  cin  >>  W;

  A = W * pow(Re, 0.11);

  if (A < 1.0) {
  Pe = 4.75    * pow(A, 1.4)  * pow(Ga, -0.17);
} else {
  Pe = 0.00225 * pow(A, -3.3) * pow(Ga, 0.29);
}
        
  cout << "Pe = " << Pe         << endl
       << "A  = " << A          << endl
       << "-------------------" << endl;
}

  return 0;
}

