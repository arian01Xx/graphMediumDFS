#ifndef PRINT_VECTOR_HPP
#define PRINT_VECTOR_HPP

#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void printVector2D(vector<vector<int>> twoD){
	for(int i=0; i<twoD.size(); i++){
		for(int j=0; j<twoD[i].size(); j++){
			cout<<twoD[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}

#endif