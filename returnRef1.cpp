//returnRef1 Dan Mine

#include <iostream>
using namespace std;

//This function returns the cube of the num */
double CubeOf (int num)
{
	double result = num * num * num;
	return (result);
}
//-----------------------------------------------------------
int main()
{
	for (int count = 1; count <= 5; count++)
	{
		double xCubed = CubeOf(count);	//notice that xCubed is a
										//double datatype
		cout << count << " " << xCubed << endl;
	}
	return 0;
}
