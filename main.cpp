#include<iostream>

using namespace std;

int main(void){ 
  int   sys, total_ins;
  float m, ft, ins;
  float conversion_ft = 3.280839895, conversion_m = 0.3048;
  cout << "Please enter your which system you want to use" << endl;
  cin >> sys;

  if (sys == 0){
    // system is metric so output imperial
    cout << "Please enter your meters" << endl;
    cin >> m;
    if (m >= 0){
      ft = m * conversion_ft;
      total_ins = ft * 12 ;
      ins = total_ins % 12;
      cout << int(ft) << "'" << ins << '"' << endl;
    }
    else {
      return 0;
    }

  }

  if (sys == 1){
    // system is imperial so output metric
    cout << "Please input your feet" << endl;
    cin >> ft;
    cout << "Please input your inches" << endl;
    cin >> ins;

    if ((ft >= 0) && (ins >= 0)){
      m = (ft + (ins / 12)) * conversion_m;

      cout << m << "m" << endl;
    }

  }

  else {
    return 0;
  }
} 
  // Insert your code herereturn0;}
// first, it should ask the user which system she/he uses to input data; we assume that 0 means "metric" and 1 means "imperial"depending on a user's answer, the program should ask either for meters or feet and inchesnext, the program should output the distance in proper (different) units: either in feet and inches or in metersresult outputted as metric should look like 123.4mresult printed as imperial should look like 12'3.5"