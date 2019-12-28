#include"CarApplication.h"
void carApplication()
{
	Car a;
	a.setMaxSpeed(250);
	a.setMake("1234");
	a.setYearModel(2016);
	a.setSpeed(0);
	cout << a.getMake() << endl;
	cout << "accelerate " << endl;
	a.accelarate();
	cout << "speed : " << a.getSpeed() << endl;

	a.accelarate();
	cout << "speed : " << a.getSpeed() << endl;

	a.accelarate();
	cout << "speed : " << a.getSpeed() << endl;

	a.accelarate();
	cout << "speed : " << a.getSpeed() << endl;

	a.accelarate();
	cout << "speed : " << a.getSpeed() << endl;


	cout << "brake " <<endl;
	a.brake();
	cout << "speed : " << a.getSpeed() << endl;
	

	a.brake();
	cout << "speed : " << a.getSpeed() << endl;


	a.brake();
	cout << "speed : " << a.getSpeed() << endl;


	a.brake();
	cout << "speed : " << a.getSpeed() << endl;


	a.brake();
	cout << "speed : " << a.getSpeed() << endl;

}