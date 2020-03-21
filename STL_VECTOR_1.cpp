#include<iostream>
#include<vector>
using namespace std;
int main(){
	
	//declaration
	std::vector<int> v;
	std::vector<int> v1(5,0);
	std::vector<int> v2={10,20,30,40,50};
	std::vector<int> v3{10,20,30,40,50};

	//access functions
	//at(),[],front(),back(),data().
	v2.at(3)=100;
	v3[3] = 100;
}