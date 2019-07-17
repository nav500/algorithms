/*
 * cricket_score.cpp
 *
 *  Created on: 12-Jul-2019
 *      Author: naveen
 */


#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	int i = 0;
	float rr1;
	float rr2;
	int batsman[2];
	//int d;
	int cs=20;
	int b;
	char runs[50];
	std::cin >> rr1;
	std::cin >> batsman[0];
	std::cin >> batsman[1];
	//std::cout << "b1:"<<batsman[0];
	//std::cout << "b2:"<<batsman[1];

	cin.getline(runs, 40);
	//i++;
	std::cout << runs;
	float d = i;
	std::cin >> rr2;
	std::cout << "cs:" << cs;
	//std::cout << i;
	float c1 = rr2*d;
	float c2 = 6.0*cs;
	std::cout <<"c1:" <<c1<<std::endl;
	std::cout<<"c2:" <<c2<<std::endl;
	float rrd = rr1-rr2;
	b = (c1-c2)/rrd;
	std::cout << b << std::endl;
	return 0;
}

