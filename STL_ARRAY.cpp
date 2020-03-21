#include<iostream>
#include<array>
using namespace std;
int main(){
	//Declearation section of ARRAY .
	//Here we can declare our array using 3 methods.
	std::array<int,5> arr1={1,2,3,4,5}; //inithializer list.
	std::array<int,5> arr2 {1,2,3,4,5}; //uniform initialization.
	std::array<int,5> arr3;
	arr3={1,2,3,4,5};

	//we can access these arrays using some functions.
	// 1.	at(position);
	// 2.	[];
	// 3. 	front();
	// 4.	back();
	// 5. 	data(); //return pointer of original array.
	for(int i=0;i<5;i++)
		cout<<arr1.at(i)<<" - ";
	//this is also right .
	//cout<<arr1[i]<<" - ";
	cout<<endl;
	cout<<"front of array : "<<arr1.front()<<endl;
	cout<<"back of array  : "<<arr1.back()<<endl;

}