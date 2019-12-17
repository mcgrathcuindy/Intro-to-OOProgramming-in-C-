/*
name: Chris McGrath
date: 2/8/19
desc: parking lot for airport
*/
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class ParkingLot{
public:
  string getLotName(void);
  void setLotName(string);
  int getAvailableSpots(void);
  int getTakenSpots(void);
  double getRate(void);
  void setRate(double);
  void removeAll(void);
  void addCar(string);
  void removeCarByName(string);
  void setSpots(int);
  //double getProfit(void);
private:
  string name;
  vector<string> carName;
  double rate;
  unsigned int capacity;
};
string ParkingLot::getLotName(void){
  return name;
}
void ParkingLot::setLotName(string n){
  name = n;
  return;
}
double ParkingLot::getRate(void){
  return rate;
}
void ParkingLot::setRate(double r){
  rate = r;
  return;
}
void ParkingLot::addCar(string carN){
  if(carName.size() < capacity){
  carName.push_back(carN);
  }
  else { cout << "Sorry, lot full!" << endl;
  }
  return;
}
void ParkingLot::removeCarByName(string n){
  unsigned int i;
  for(i = 0; i < carName.size(); i++){
    if(n == carName.at(i)){
      carName.erase(carName.begin() + i);
    }
  }
}
int ParkingLot::getAvailableSpots(void){
  return (capacity - carName.size());
}
int ParkingLot::getTakenSpots(void){
  return carName.size();
}
void ParkingLot::setSpots(int s){
  capacity = s;
  return;
}
int main(void){
  ParkingLot economy;
  ParkingLot standard;
  ParkingLot premium;
  int input;
  string name;

  cout<<"Welcome to the parking lot at Uindy Airport!"<<endl;
  economy.setSpots(10);
  standard.setSpots(5);
  standard.setSpots(5);
  economy.setLotName("Economy");
  standard.setLotName("Standard");
  premium.setLotName("premium");
  economy.setRate(5);
  standard.setRate(10);
  premium.setRate(20);

   

  while(input != 7){
    cout << "Current lot status:" << endl;
    cout<<"Economy:"<<endl<<"   In the Economy lot, there are 10 spots with "<<economy.getTakenSpots()<<" occupied."<<endl;
    cout<<"  The daily rate is $"<<economy.getRate()<<" per day."<<endl;
    cout<<"Standard:"<<endl<<"   In the Standard lot, there are 5 spots with "<<standard.getTakenSpots()<<" occupied."<<endl;
    cout<<"  The daily rate is $"<<standard.getRate()<<" per day."<<endl; 
    cout<<"Premium:"<<endl<<"   In the Premium lot, there are 5 spots with "<<premium.getTakenSpots()<<" occupied."<<endl;
    cout<<"  The daily rate is $"<<premium.getRate()<<" per day."<<endl;
 
    cout<<"What would you like to do?"<<endl;
    cout<<"0: Enter Economy Lot ($5/day)"<<endl;
    cout<<"1: Enter Standard Lot ($10/day)"<<endl;
    cout<<"2: Enter Premium Lot ($20/day)"<<endl;
    cout<<"3: Leave Economy Lot"<<endl;
    cout<<"4: Leave Standard Lot"<<endl;
    cout<<"5: Leave Premium Lot"<<endl;
    cout<<"6: Get current profit per day"<<endl;
    cout<<"7: Exit"<<endl;

    cin>>input;
    if(input == 0){
      cout<<"What car name?"<<endl;
      cin>>name;
      economy.addCar(name);
    }else if(input == 1){
      cout << "What car name?" << endl;
      cin >> name;
      standard.addCar(name);
    
    }else if(input == 2){
      cout << "What car name?" << endl;
      cin >> name;
      premium.addCar(name);
    
    }else if(input == 3){
      cout << "what car name?" << endl;
      cin >> name;
      economy.removeCarByName(name);
    }else if(input == 4){
      cout << "what car name?" << endl;
      cin >> name;
      standard.removeCarByName(name);
    }else if(input == 5){
      cout << "what car name?" << endl;
      cin >> name;
      premium.removeCarByName(name);
    }else if(input == 6){
      cout << "Economy profit: $" << (economy.getTakenSpots()*economy.getRate()) << " /day" << endl;
      cout << "Standard profit: $" << (standard.getTakenSpots()*standard.getRate()) << " /day" << endl;
      cout << "Premium profit: $" << (premium.getTakenSpots()*premium.getRate()) << " /day" << endl;
      cout << "Total Profit: $" << ((economy.getTakenSpots()*economy.getRate()) +(standard.getTakenSpots()*standard.getRate()) + (premium.getTakenSpots()*premium.getRate())) << " /day" << endl;
      
    }
  }


  return 0;
}
