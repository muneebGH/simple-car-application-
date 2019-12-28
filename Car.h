#include<iostream>
#include"MyOOPString.h"
using namespace std;
class Car
{
private:
	int yearModel;
	char make[30];
	int speed;
	float maxSpeed;
public:
	Car();
	void setYearModel(int YM);
	void setMake(const char * p);
	void setSpeed(int s);
	void setMaxSpeed(float MS);
	int getYearModel();
	const char * getMake();
	int getSpeed();
	void accelarate();
	void brake();
};