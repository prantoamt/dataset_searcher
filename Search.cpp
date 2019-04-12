#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {

    ifstream ip("air_quality_Nov2017.csv");

  if(!ip.is_open()) std::cout << "ERROR OPENING FILE" << '\n';
string Station;
  string AirQuality;
  string Longitude;
  string Latitude;
  string O3Hour;
  string O3Quality;
  string O3Value;

  string NO2Hour;
  string NO2Quality;
  string NO2Value;
  string PM10Hour;
  string PM10Quality;
  string PM10Value;


  string Generated;
  string DateTime;


   string stationinput;
   string airqualityinput;
   string o3qualityinput;
   string o3valueinput;
   string no2qualityinput;
   string n02valueinput;
   string pm10qualityinput;
   string pm10valueinput;
   string date;
    string choice;

    cout<<"Press 1 to search Station"<<endl;
    cout<<"Press 2 to search AirQualinty"<<endl;
    cout<<"Press 3 to search O3 Quality"<<endl;

    cout<<"Press 4 to search O3 Value"<<endl;
    cout<<"Press 5 to search NO2 Quality"<<endl;
    cout<<"Press 6 to search NO2 Value"<<endl;

    cout<<"Press 7 to search PM10 Quality"<<endl;
    cout<<"Press 8 to search PM10 Value"<<endl;
    cout<<"Press 9 to search Date"<<endl;


    cin>> choice;
   // cout <<choice;

    if (choice == "1"){
     cout<<"Enter Station"<<endl;
    cin>> stationinput;

  while(ip.good()){
    getline(ip,Station,',');
    getline(ip,AirQuality,',');
    getline(ip,Longitude,',');
    getline(ip,Latitude,',');
    getline(ip,O3Hour,',');
    getline(ip,O3Quality,',');
    getline(ip,O3Value,',');

    getline(ip,NO2Hour,',');
    getline(ip,NO2Quality,',');
    getline(ip,NO2Value,',');

    getline(ip,PM10Hour,',');
    getline(ip,PM10Quality,',');
    getline(ip,PM10Value,',');

    getline(ip,Generated,',');
    getline(ip,DateTime,'\n');

    if (stationinput == Station)
        {
            std::cout<<Station <<" "<<AirQuality<< " " <<Longitude<<" "<<Latitude<<" " <<O3Hour<<" "<<O3Quality;
            cout<<" "<<O3Value<< " " <<NO2Hour<<" "<<NO2Quality<<" "<<NO2Value<<" " <<PM10Hour<<" "<<PM10Quality<<" "<<PM10Value<<" "<<Generated<<" "<<DateTime<<" "<<endl;
        }
  }

  ip.close();
}

if (choice == "2"){
     cout<<"Enter Air Quality"<<endl;
    cin>> airqualityinput;

  while(ip.good()){
    getline(ip,Station,',');
    getline(ip,AirQuality,',');
    getline(ip,Longitude,',');
    getline(ip,Latitude,',');
    getline(ip,O3Hour,',');
    getline(ip,O3Quality,',');
    getline(ip,O3Value,',');

    getline(ip,NO2Hour,',');
    getline(ip,NO2Quality,',');
    getline(ip,NO2Value,',');

    getline(ip,PM10Hour,',');
    getline(ip,PM10Quality,',');
    getline(ip,PM10Value,',');

    getline(ip,Generated,',');
    getline(ip,DateTime,'\n');

    if (airqualityinput == AirQuality)
        {
            std::cout<<Station <<" "<<AirQuality<< " " <<Longitude<<" "<<Latitude<<" " <<O3Hour<<" "<<O3Quality;
            cout<<" "<<O3Value<< " " <<NO2Hour<<" "<<NO2Quality<<" "<<NO2Value<<" " <<PM10Hour<<" "<<PM10Quality<<" "<<PM10Value<<" "<<Generated<<" "<<DateTime<<" "<<endl;
        }
  }

  ip.close();
}

if (choice == "3"){
     cout<<"Enter o3 quality"<<endl;
    cin>> o3qualityinput;

  while(ip.good()){
    getline(ip,Station,',');
    getline(ip,AirQuality,',');
    getline(ip,Longitude,',');
    getline(ip,Latitude,',');
    getline(ip,O3Hour,',');
    getline(ip,O3Quality,',');
    getline(ip,O3Value,',');

    getline(ip,NO2Hour,',');
    getline(ip,NO2Quality,',');
    getline(ip,NO2Value,',');

    getline(ip,PM10Hour,',');
    getline(ip,PM10Quality,',');
    getline(ip,PM10Value,',');

    getline(ip,Generated,',');
    getline(ip,DateTime,'\n');

    if (o3qualityinput == O3Quality)
        {
            std::cout<<Station <<" "<<AirQuality<< " " <<Longitude<<" "<<Latitude<<" " <<O3Hour<<" "<<O3Quality;
            cout<<" "<<O3Value<< " " <<NO2Hour<<" "<<NO2Quality<<" "<<NO2Value<<" " <<PM10Hour<<" "<<PM10Quality<<" "<<PM10Value<<" "<<Generated<<" "<<DateTime<<" "<<endl;
        }
  }

  ip.close();
}



if (choice == "4"){
     cout<<"Enter O3 Value"<<endl;
    cin>> o3valueinput;

  while(ip.good()){
    getline(ip,Station,',');
    getline(ip,AirQuality,',');
    getline(ip,Longitude,',');
    getline(ip,Latitude,',');
    getline(ip,O3Hour,',');
    getline(ip,O3Quality,',');
    getline(ip,O3Value,',');

    getline(ip,NO2Hour,',');
    getline(ip,NO2Quality,',');
    getline(ip,NO2Value,',');

    getline(ip,PM10Hour,',');
    getline(ip,PM10Quality,',');
    getline(ip,PM10Value,',');

    getline(ip,Generated,',');
    getline(ip,DateTime,'\n');

    if (o3valueinput == O3Value)
        {
            std::cout<<Station <<" "<<AirQuality<< " " <<Longitude<<" "<<Latitude<<" " <<O3Hour<<" "<<O3Quality;
            cout<<" "<<O3Value<< " " <<NO2Hour<<" "<<NO2Quality<<" "<<NO2Value<<" " <<PM10Hour<<" "<<PM10Quality<<" "<<PM10Value<<" "<<Generated<<" "<<DateTime<<" "<<endl;
        }
  }

  ip.close();
}

if (choice == "5"){
     cout<<"Enter NO2 Quality"<<endl;
    cin>> no2qualityinput;

  while(ip.good()){
    getline(ip,Station,',');
    getline(ip,AirQuality,',');
    getline(ip,Longitude,',');
    getline(ip,Latitude,',');
    getline(ip,O3Hour,',');
    getline(ip,O3Quality,',');
    getline(ip,O3Value,',');

    getline(ip,NO2Hour,',');
    getline(ip,NO2Quality,',');
    getline(ip,NO2Value,',');

    getline(ip,PM10Hour,',');
    getline(ip,PM10Quality,',');
    getline(ip,PM10Value,',');

    getline(ip,Generated,',');
    getline(ip,DateTime,'\n');

    if (no2qualityinput == NO2Quality)
        {
            std::cout<<Station <<" "<<AirQuality<< " " <<Longitude<<" "<<Latitude<<" " <<O3Hour<<" "<<O3Quality;
            cout<<" "<<O3Value<< " " <<NO2Hour<<" "<<NO2Quality<<" "<<NO2Value<<" " <<PM10Hour<<" "<<PM10Quality<<" "<<PM10Value<<" "<<Generated<<" "<<DateTime<<" "<<endl;
        }
  }

  ip.close();
}




    if (choice == "6"){
     cout<<"Enter NO2 Value"<<endl;
    cin>> n02valueinput;

  while(ip.good()){
    getline(ip,Station,',');
    getline(ip,AirQuality,',');
    getline(ip,Longitude,',');
    getline(ip,Latitude,',');
    getline(ip,O3Hour,',');
    getline(ip,O3Quality,',');
    getline(ip,O3Value,',');

    getline(ip,NO2Hour,',');
    getline(ip,NO2Quality,',');
    getline(ip,NO2Value,',');

    getline(ip,PM10Hour,',');
    getline(ip,PM10Quality,',');
    getline(ip,PM10Value,',');

    getline(ip,Generated,',');
    getline(ip,DateTime,'\n');

    if (n02valueinput == NO2Value)
        {
            std::cout<<Station <<" "<<AirQuality<< " " <<Longitude<<" "<<Latitude<<" " <<O3Hour<<" "<<O3Quality;
            cout<<" "<<O3Value<< " " <<NO2Hour<<" "<<NO2Quality<<" "<<NO2Value<<" " <<PM10Hour<<" "<<PM10Quality<<" "<<PM10Value<<" "<<Generated<<" "<<DateTime<<" "<<endl;
        }
  }

  ip.close();
}


    if (choice == "7"){
     cout<<"Enter PM10 Quality"<<endl;
    cin>> pm10qualityinput;

  while(ip.good()){
    getline(ip,Station,',');
    getline(ip,AirQuality,',');
    getline(ip,Longitude,',');
    getline(ip,Latitude,',');
    getline(ip,O3Hour,',');
    getline(ip,O3Quality,',');
    getline(ip,O3Value,',');

    getline(ip,NO2Hour,',');
    getline(ip,NO2Quality,',');
    getline(ip,NO2Value,',');

    getline(ip,PM10Hour,',');
    getline(ip,PM10Quality,',');
    getline(ip,PM10Value,',');

    getline(ip,Generated,',');
    getline(ip,DateTime,'\n');

    if (pm10qualityinput == PM10Quality)
        {
            std::cout<<Station <<" "<<AirQuality<< " " <<Longitude<<" "<<Latitude<<" " <<O3Hour<<" "<<O3Quality;
            cout<<" "<<O3Value<< " " <<NO2Hour<<" "<<NO2Quality<<" "<<NO2Value<<" " <<PM10Hour<<" "<<PM10Quality<<" "<<PM10Value<<" "<<Generated<<" "<<DateTime<<" "<<endl;
        }
  }

  ip.close();
}

    if (choice == "8"){
     cout<<"Enter PM10 Value"<<endl;
    cin>> pm10valueinput;

  while(ip.good()){
    getline(ip,Station,',');
    getline(ip,AirQuality,',');
    getline(ip,Longitude,',');
    getline(ip,Latitude,',');
    getline(ip,O3Hour,',');
    getline(ip,O3Quality,',');
    getline(ip,O3Value,',');

    getline(ip,NO2Hour,',');
    getline(ip,NO2Quality,',');
    getline(ip,NO2Value,',');

    getline(ip,PM10Hour,',');
    getline(ip,PM10Quality,',');
    getline(ip,PM10Value,',');

    getline(ip,Generated,',');
    getline(ip,DateTime,'\n');

    if (pm10valueinput == PM10Value)
        {
            std::cout<<Station <<" "<<AirQuality<< " " <<Longitude<<" "<<Latitude<<" " <<O3Hour<<" "<<O3Quality;
            cout<<" "<<O3Value<< " " <<NO2Hour<<" "<<NO2Quality<<" "<<NO2Value<<" " <<PM10Hour<<" "<<PM10Quality<<" "<<PM10Value<<" "<<Generated<<" "<<DateTime<<" "<<endl;
        }
  }

  ip.close();
}

    if (choice == "9"){
     cout<<"Enter Date"<<endl;
    cin>> date;

  while(ip.good()){
    getline(ip,Station,',');
    getline(ip,AirQuality,',');
    getline(ip,Longitude,',');
    getline(ip,Latitude,',');
    getline(ip,O3Hour,',');
    getline(ip,O3Quality,',');
    getline(ip,O3Value,',');

    getline(ip,NO2Hour,',');
    getline(ip,NO2Quality,',');
    getline(ip,NO2Value,',');

    getline(ip,PM10Hour,',');
    getline(ip,PM10Quality,',');
    getline(ip,PM10Value,',');

    getline(ip,Generated,',');
    getline(ip,DateTime,'\n');

    if (date == DateTime)
        {
            std::cout<<Station <<" "<<AirQuality<< " " <<Longitude<<" "<<Latitude<<" " <<O3Hour<<" "<<O3Quality;
            cout<<" "<<O3Value<< " " <<NO2Hour<<" "<<NO2Quality<<" "<<NO2Value<<" " <<PM10Hour<<" "<<PM10Quality<<" "<<PM10Value<<" "<<Generated<<" "<<DateTime<<" "<<endl;
        }
  }

  ip.close();
}


return 0;

}
