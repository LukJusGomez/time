#ifndef TIME_H
#define TIME_H

using namespace std;

class Time
{
	private:
		unsigned int hour, minute, second;
		
	public:
		explicit Time( int = 0, int = 0, int = 0);
		
		// set functions
		void setTime(int, int, int);
		void setHour(int);
		void setMinute(int);
		void setSecond(int);
		
		// get functions
		unsigned int getHour() const;
		unsigned int getMinute() const;
		unsigned int getSecond() const;
		
		void printUniversal() const;
		void printStandard() const;
		
		unsigned int addtime() const;
	//void Time::addtime(int, int, int);
};

#endif
