#include "SolutionTwo.hpp"
#include "printVector.hpp"

using namespace std;

int main(){

	SolutionTwo solution2;
    vector<vector<int>> graphOne={{4,3,1},{3,2,4},{3},{4},{}};
    vector<vector<int>> pathsGraphs=solution2.allPathsSourceTarget(graphOne);
    cout<<"Paths found it:"<<endl;
    printVector2D(pathsGraphs);

	return 0;
}