#include <bits/stdc++.h>

using namespace std;

class car
{
	private:
	string drivemode;
	int max_seat;
	int price;
	
	public:
	string brand;
	string model;
	int year;
	
	car(string x, string y, int a, int b)
	{
		brand=x;
		model=y;
		year=a;
		max_seat=b;
	}
	int getseat()
	{
		return max_seat;
	}
	string get_drivemode()
	{
		return drivemode;
	}

};

class BMW_car : public car
{
	private:
	string drivemode;
	
	public:
	BMW_car(string y ,int a, int b) : car ("BMW", y, a, b)
	{
		cout<<"Constructing BMW_car\n";
		drivemode="Rear-wheel";
	}
	
	string get_drivemode()
	{
		return drivemode;
	}
		
};

class AUDI_car : public car
{
	private:
	string drivemode;
	
	public:
	AUDI_car(string y ,int a, int b) : car ("AUDI", y, a, b)
	{
		cout<<"Constructing AUDI_car\n";
		drivemode="Front-wheel";
	}
	
	string get_drivemode()
	{
		return drivemode;
	}
		
};

class BENZ_car : public car
{
	private:
	string drivemode;
	
	public:
	BENZ_car(string y ,int a, int b) : car ("BENZ", y, a, b)
	{
		cout<<"Constructing BENZ_car\n";
		drivemode="Front-wheel";
	}
	
	string get_drivemode()
	{
		return drivemode;
	}
		
};

int main()
{
    BMW_car car_1("X5", 2023, 6);
    cout<<car_1.brand;
    cout<<": drivemode ="<<car_1.get_drivemode()<<endl;
    
    AUDI_car car_2("A1", 2024, 6);
    cout<<car_2.brand;
    cout<<": drivemode ="<<car_2.get_drivemode()<<endl;
    
    BENZ_car car_3("X5", 2023, 6);
    cout<<car_3.brand;
    cout<<": drivemode ="<<car_3.get_drivemode()<<endl;
}
