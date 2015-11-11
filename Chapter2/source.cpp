/*
 * source.cpp
 *
 *  Created on: Nov 9, 2015
 *      Author: dillon
 */

#include <chrono>
#include <iostream>
	using namespace chrono;

	void t1(int n){
		auto sum = 0;
		for(auto i = 0; i < n ; ++i)
			sum++;
	}
	void t2(int n){
		auto sum = 0;
		for(auto i = 0; i < n; ++i)
			for(auto j = 0; j < n*n; j ++)
				sum ++;
	}
	void t3(int n){
		auto sum = 0;
		for(auto i = 0; i < n; ++ i)
			for(auto j = 0; j < i; j++)
				sum ++;
	}
	void t4(int n){
		auto sum = 0;
		for(auto i = 0 ; i < n; ++i)
			for(auto j = 0 ; j < i ; ++j)
				sum ++;
	}
	void t5(int n){
		auto sum = 0;
		for(auto i = 0; i < n; ++i)
			for(auto j = 0 ; j < i * i ; ++j)
				for(auto k = 0; k < j; ++k)
					sum ++;
	}
	void t6(int n){
		auto sum = 0;
		for(auto i = 1; i < n; ++i)
			for(auto j = 1; j < i*i; ++i)
				if(j % i == 0)
					for(auto k = 0 ; k < j ; ++k)
						++sum;
	}

	int main(){
	using namespace std;

	auto start = system_clock::now();
	v1(5);
	auto stop = system_clock::now();
	auto elapsed = duration_case<milliseconds>(stop - start);
	cout << "elapsed time:  " << elapsed.count();
	//************************************************
	auto start = system_clock::now();
	v1(10);
	auto stop = system_clock::now();
	auto elapsed = duration_case<milliseconds>(stop - start);
	cout << "elapsed time:  " << elapsed.count();
	//********************************************
	auto start = system_clock::now();
	v2(5);
	auto stop = system_clock::now();
	auto elapsed = duration_case<milliseconds>(stop - start);
	cout << "elapsed time:  " << elapsed.count();
	//********************************************
	auto start = system_clock::now();
	v2(10);
	auto stop = system_clock::now();
	auto elapsed = duration_case<milliseconds>(stop - start);
	cout << "elapsed time:  " << elapsed.count();
	//*******************************************
	auto start = system_clock::now();
	v3(5);
	auto stop = system_clock::now();
	auto elapsed = duration_case<milliseconds>(stop - start);
	cout << "elapsed time:  " << elapsed.count();
	//******************************************
	//*******************************************
	auto start = system_clock::now();
	v3(10);
	auto stop = system_clock::now();
	auto elapsed = duration_case<milliseconds>(stop - start);
	cout << "elapsed time:  " << elapsed.count();
	//******************************************
	//*******************************************
	auto start = system_clock::now();
	v4(5);
	auto stop = system_clock::now();
	auto elapsed = duration_case<milliseconds>(stop - start);
	cout << "elapsed time:  " << elapsed.count();
	//******************************************
	//*******************************************
	auto start = system_clock::now();
	v4(10);
	auto stop = system_clock::now();
	auto elapsed = duration_case<milliseconds>(stop - start);
	cout << "elapsed time:  " << elapsed.count();
	//******************************************
	//*******************************************
	auto start = system_clock::now();
	v5(5);
	auto stop = system_clock::now();
	auto elapsed = duration_case<milliseconds>(stop - start);
	cout << "elapsed time:  " << elapsed.count();
	//******************************************
	//*******************************************
	auto start = system_clock::now();
	v5(10):
	auto stop = system_clock::now();
	auto elapsed = duration_case<milliseconds>(stop - start);
	cout << "elapsed time:  " << elapsed.count();
	//******************************************
	//*******************************************
	auto start = system_clock::now();
	v6(5);
	auto stop = system_clock::now();
	auto elapsed = duration_case<milliseconds>(stop - start);
	cout << "elapsed time:  " << elapsed.count();
	//******************************************
	//*******************************************
	auto start = system_clock::now();
	v6(10);
	auto stop = system_clock::now();
	auto elapsed = duration_case<milliseconds>(stop - start);
	cout << "elapsed time:  " << elapsed.count();
	//******************************************
}

