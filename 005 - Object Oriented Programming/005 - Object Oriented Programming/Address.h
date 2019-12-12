#pragma once

using namespace  std;

class Address
{
public:
    int HouseNumber;
    string StreetName;
    string City;


    Address(const int houseNumber, const string& streetName, const string& city)
        : HouseNumber(houseNumber),
          StreetName(streetName),
          City(city)
    {
    }
};

