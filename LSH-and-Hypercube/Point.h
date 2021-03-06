#ifndef __POINT__
#define __POINT__

#include <iostream>
#include <string>
#include <unordered_map>
#include <forward_list>  
#include <vector>  
#include <chrono>
#include <random>
using namespace std; 

class Point{
private:
	string name;
	string g;
public:
	static int d;

	Point(string);
	~Point();
	virtual float get_multcoord(const int& i,const float& v_i) {}
	virtual void print_coords() {}
	virtual void* get_coords() {}
	virtual double abs() {}

	void add_h2g(long);
	string get_g();
	string get_name();
};

typedef pair<Point *,double> DPnt;

class Point_int : public Point{
public:
	int * coords;

	Point_int(int *,string);
	~Point_int();
	float get_multcoord(const int& i,const float& v_i);	// multiplication of float v_i with coordinate i of point
	void print_coords();
	void* get_coords();
	double abs(); // ||<point>|| 
};

class Point_double : public Point{
public:
	double * coords;

	Point_double(double *,string);
	~Point_double();
	float get_multcoord(const int& i,const float& v_i);	// multiplication of float v_i with coordinate i of point
	void print_coords();
	void* get_coords();
	double abs(); // ||<point>|| 
};

#endif
