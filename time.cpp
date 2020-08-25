#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "time.h"

// konstruktor
Time::Time(int hour, int minute, int second)
{
	setTime( hour, minute, second);
}

//set new time
void Time::setTime(int h, int m, int s)
{
	setHour(h);
	setMinute(m);
	setSecond(s);
}

//SET
void Time::setHour(int h)
{
	if( h >= 0 && h < 24 )
		hour = h;
	else
		throw invalid_argument( "hour must be 0-23" );
}

void Time::setMinute(int m)
{
	if( m >= 0 && m < 60 )
		minute = m;
	else
		throw invalid_argument( "munite must be 0-59" );
}

void Time::setSecond(int s)
{
	if( s >= 0 && s < 60 )
		second = s;
	else
		throw invalid_argument( "second must be 0-59" );
}

//GET
unsigned int Time::getHour() const
{
	return hour;
}

unsigned int Time::getMinute() const
{
	return minute;
}

unsigned int Time::getSecond() const
{
	return second;
}

//PRINT
void Time::printUniversal() const
{
	cout<< setfill('0')<<setw(2)<<getHour()<<":"<<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond();
	//cout<< setfill('0')<<setw(2)<<hour<<":"<<setw(2)<<minute<<":"<<setw(2)<<second;
}

void Time::printStandard() const
{
	cout<<(( getHour() == 0 || getHour() == 12 ) ? 12 : getHour() % 12)<<":"<<setfill('0')
	<< setw(2)<<getMinute()<< setw(2)<<getSecond()<<(hour < 12 ? "AM" : "PM" );
}

unsigned int Time::addtime() const
//void Time::addtime(int h, int m, int s)
{
	int h = getHour();
	int m = getMinute();
	int s = getSecond();
//	int hour;
//	int minute;
//	int second;
//	cout<<hour<<":"<<minute<<":"<<second;

	if(s != 59)
		{
			s++;
		//	second = second;
			
		}
	else if(s == 59)
		{
			s = 0;
		//	second = second;
			if(m != 59)
				{
					m++;
		//			minute =  minute;
				}
			else if( m == 59)
				{
					m = 0;
		//			minute = minute;
					if(h != 23)
						{
							h++;
		//					hour = hour;
						}
					else if(h == 23)
						{
							h = 0;
		//					hour = hour;
						}
				}
		}
	//cout<<hour<<":"<<minute<<":"<<second;
	//cout<<"\n";
	cout<< setfill('0')<<setw(2)<<h<<":"<<setw(2)<<m<<":"<<setw(2)<<s;
	//setTime( hour, minute, second);
	
	return h;
	return m;
	return s;
	//setTime(h, m, s);
}
