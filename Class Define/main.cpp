#include "class.cpp"

int main() {
	Define Person, Cat, Dog, Car;
	Person.Name = "Andrzej";
	Person.Age = 17;
	Person.B_Date_day = 23;
	Person.B_Date_month = 2;
	Person.B_Date_Year = 2005;
	Person.Introduce();

	Dog.Name = "Olek";
	Dog.Age = 3;
	Dog.B_Date_day = 23;
	Dog.B_Date_month = 2;
	Dog.B_Date_Year = 2019;
	Dog.Introduce();
	
	Cat.Name = "Marta";
	Cat.Age = 2;
	Cat.B_Date_day = 23;
	Cat.B_Date_month = 2;
	Cat.B_Date_Year = 2020;
	Cat.Introduce();

	Car.Name = "BMW";
	Car.Age = 5;
	Car.B_Date_day = 23;
	Car.B_Date_month = 2;
	Car.B_Date_Year = 2017;
	Car.Introduce();
}