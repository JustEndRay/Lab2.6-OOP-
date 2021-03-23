#include "Bus.h"
#include <string>
#include <sstream>
#include <iostream>

//bus
Bus::Bus()
{
	Number_of_passenger_seats = 0;
};

void Bus::Init(int Number_of_passenger_seats, Car car)
{
	SetNumber_of_passenger_seats(Number_of_passenger_seats);
	SetCar(car);
}
void Bus::Display() const
{
	cout << endl;
	cout << "Car = " << endl;
	car.Display();
	cout << "Number of passenger seats = " << Number_of_passenger_seats << endl;
}
void Bus::Read()
{
	int Number_of_passenger_seats;
	Car m;
	cout << "\nCar = ?" << endl;
	m.Read();
	cout << "Number of passenger seats = ?"; cin >> Number_of_passenger_seats;
	Init(Number_of_passenger_seats, m);
}
Bus::Bus(const Bus& s)
{
	car= s.car;
	Number_of_passenger_seats = s.Number_of_passenger_seats;
}
Bus& Bus::operator = (const Bus& s)
{
	car = s.car;
	Number_of_passenger_seats = s.Number_of_passenger_seats;

	return *this;
}
std::ostream& operator << (std::ostream& out, const Bus& Bus)
{
	out << string(Bus);

	return out;
}

istream& operator>>(istream& in, Bus& s)
{
	int Number_of_passenger_seats;
	cout << endl;
	cout << "car = ? ";
	in >> s.car;
	cout << "Number_of_passenger_seats = ? ";
	in >> Number_of_passenger_seats;
	s.SetNumber_of_passenger_seats(Number_of_passenger_seats);
	return in;
}

Bus Bus::operator ++ (int)
{ 
	Bus s(*this);
	car++;
	return s;
}
Bus Bus::operator -- (int)
{
	Bus s(*this);
	car--;
	return s;
}
void Bus::Re_assignment_Number_of_passenger_seats()
{
	int n;
	cout << "re-enter Number_of_passenger_seats" << endl;
	cin >> n;
	Number_of_passenger_seats = n;
}
void Bus::Change_Number_of_passenger_seats()
{
	cout << "Change_Number_of_passenger_seats" << endl;
	cin >> Number_of_passenger_seats;
}
void Bus::Re_assignment()
{
	car.Re_assignment_Brand();
	car.Re_assignment_Power();
	Re_assignment_Number_of_passenger_seats();
}
void Bus::Change()
{
	car.Change_Brand();
	car.Change_Power();
	Change_Number_of_passenger_seats();
}
Bus::operator string() const
{
	stringstream ss;
	ss << "car = " << endl;
	ss<< car << endl;
	ss << "Number of passenger seats = " << Number_of_passenger_seats << endl;

	return ss.str();
}
Bus& Bus::operator ++ ()
{
	++car;
	return*this;
}
Bus& Bus::operator -- ()
{
	--car;
	return*this;
}

//car
Bus::Car::Car()
{
}
Bus::Car::Car(string, int, int)
{
}
Bus::Car::Car(const Car&)
{
}
Bus::Car::~Car()
{
}
void Bus::Car::Init(string Brand, int Number_of_cylinders, int  Power)
{
	SetBrand(Brand);
	SetNumber_of_cylinders(Number_of_cylinders);
	SetPower(Power);
}
void Bus::Car::Display() const
{
	cout << "Brand = " << Brand << endl;
	cout << "Number_of_cylinders  = " << Number_of_cylinders << endl;
	cout << "Power  = " << Power << endl;
}
void Bus::Car::Read() {
	string Brand;
	int Number_of_cylinders;
	int Power;
	cout << endl; cout << "Brand = ? "; cin >> Brand;
	cout << "Number of cylinders  = ? "; cin >> Number_of_cylinders;
	cout << "Power  = ? "; cin >> Power;
	Init(Brand, Number_of_cylinders, Power);
}
Bus::Car& Bus::Car::operator = (const Bus::Car& m)
{ 
	this->Brand = m.Brand;
	this->Number_of_cylinders = m.Number_of_cylinders;
	this->Power = m.Power;
	return*this;
}
Bus::Car::operator string() const
{
	stringstream ss;
	ss << "Brand = " << Brand << endl;
	ss << "Number of cylinders  = " << Number_of_cylinders << endl;
	ss << "Power  = " << Power << endl;
	return ss.str();
}
ostream& operator << (ostream& out, const Bus::Car& m)
{
	out << string(m);
	return out;
}
istream& operator >> (istream& in, Bus::Car& m)
{
	string Brand;
	int Number_of_cylinders, Power;
	cout << endl; cout << "Brand = ? "; in >> Brand;
	cout << "Number of cylinders  = ? "; in >> Number_of_cylinders;
	cout << "Power  = ? "; in >> Power;
	m.SetBrand(Brand);
	m.SetNumber_of_cylinders(Number_of_cylinders);
	m.SetPower(Power);
	return in;
}

Bus::Car& Bus::Car::operator ++ ()
{
	++Power;
	return*this; 
}
Bus::Car& Bus::Car::operator -- ()
{
	--Power;
	return*this;
}
Bus::Car Bus::Car::operator ++ (int)
{
	Bus::Car t(*this);
	Power++;
	return t;
}
Bus::Car Bus::Car::operator -- (int)
{
	Bus::Car t(*this);
	Power--;
	return t;
}

void Bus::Car::Re_assignment_Power()
{
	int n;
	cout << "re-enter power" << endl;
	cin >> n;
	Power = n;
}

void Bus::Car::Change_Power()
{
	cout << "change power" << endl;
	cin >> Power;
}

void Bus::Car::Re_assignment_Brand()
{
	string n;
	cout << "re-enter Brand" << endl;
	cin >> n;
	Brand = n;
}

void Bus::Car::Change_Brand()
{
	cout << "change Brand" << endl;
	cin >> Brand;
}
