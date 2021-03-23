#pragma once
#include <iostream>
#include <sstream>

using namespace std;

class Bus
{
private:
	int Number_of_passenger_seats;
public:
	class Car
	{
	private:
		std::string Brand;
		int Number_of_cylinders;
		int  Power;
	public:

		Car();
		Car(string, int, int );
		Car(const Car&);
		~Car();

		std::string GetBrand() const { return Brand; };
		int  GetNumber_of_cylinders() const { return Number_of_cylinders; };
		int  GetPower() const { return Power; };

		void SetBrand(std::string Brand) { this->Brand = Brand; };
		void SetNumber_of_cylinders(int  Number_of_cylinders) { this->Number_of_cylinders = Number_of_cylinders; };
		void SetPower(int  Power) { this->Power = Power; };

		void Init(string Brand, int Number_of_cylinders, int  Power );
		void Display() const;
		void Read();

		Car& operator = (const Car& m);
		friend ostream& operator << (ostream& out, const Car& m);
		friend istream& operator >> (istream& in, Car& m);

		operator string() const;

		Car& operator ++ ();
		Car& operator -- ();
		Car operator ++ (int);
		Car operator -- (int);

		void  Re_assignment_Power();
		void  Change_Power();
		void  Re_assignment_Brand();
		void  Change_Brand();
	};
	Car car;
	int GetNumber_of_passenger_seats() const { return Number_of_passenger_seats; }
	Car getCar()const { return car; }

	void SetNumber_of_passenger_seats(int Number_of_passenger_seats) { this->Number_of_passenger_seats = Number_of_passenger_seats; };
	void SetCar(Car car) { this->car = car; };

	void Init(int  Number_of_passenger_seats, Car car);
	void Display() const;
	void Read();


	Bus(const Bus& s);
	Bus();

	Bus& operator = (const Bus& s);
	friend ostream& operator << (ostream& out, const Bus& s);
	friend istream& operator >> (istream& in, Bus& s);

	operator string() const;

	Bus& operator ++ ();
	Bus& operator -- ();
	Bus operator ++ (int);
	Bus operator -- (int);

	void  Re_assignment_Number_of_passenger_seats();
	void  Change_Number_of_passenger_seats();
	void  Re_assignment();
	void  Change();
};


