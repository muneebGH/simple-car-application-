#include"Car.h"
Car::Car()
{
	yearModel = 0;
	copyString(make, "not entered ");
	int speed = 0;
	maxSpeed = 0;
}

void Car::setYearModel(int YM)
{	if(YM>1880)
	yearModel = YM;
}

void Car::setMake(const char * p)
{
	int length = getStringLength(p);
	int a = (int)p[0] - 48;
	int b = (int)p[length] - 48;
	int validA=0;
	if (a >= 0 && a <= 9)
	{
		validA = 1;
	}
	int validB = 0;
	if (b >= 0 && b <= 9)
	{
		validB = 1;
	}

	if(validA!=1 && validB!=1)
	copyString(make, p);



}

void Car::setMaxSpeed(float MS)
{
	if (MS > 0 && MS > speed)
	{
		maxSpeed = MS;
	}

}

void Car::setSpeed(int s)
{
	if(s>=0 && s<maxSpeed)
	speed = s;
}

int Car::getYearModel()
{
	return yearModel;
}

const char * Car::getMake()
{
	return make;
}

int Car::getSpeed()
{
	return speed;
	cout << speed << endl;
}

void Car::accelarate()
{
	if ((speed + 5) <= maxSpeed)
	{
		speed = speed + 5;
	}
}

void Car::brake()
{

	if ((speed - 5) >= 0)
	{
		speed = speed - 5;
	}
}

