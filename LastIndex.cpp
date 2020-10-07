/* 
Author: Hernandez, Carlos
Date submitted: 2020/02/09
*/

#include <iostream>
using namespace std;
int largestIndex(int list[], int listSize);

int main()
{
 int list  [15]= {23, 51, 38, 56, 83, 38, 36, 49, 72, 35, 83, 36, 38, 51, 45}; //declare size of array to 15
 cout << "The index of the last largest element is:" << largestIndex (list,15) << endl; //print answer
 return 0;
}
int largestIndex(int list[], int listSize)
{
 int maxIndex = 0;
 for (int counter = 1; counter <listSize;counter++)
	if (list[maxIndex] <= list[counter])
		maxIndex = counter;//updates index
 return maxIndex; //returns the max index
}
 
 
 