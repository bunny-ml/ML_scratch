#include <iostream>
// #include <xtensor/xarray.hpp>
// #include <xtensor/xio.hpp>
// #include <xtensor/xmath.hpp>

using namespace std;


// variable decalation

// inputs
float inputs[4] = {1.0, 2.0, 3.0, 2.5};

// weights
float weights[3][4] = { 
					{0.2 , 0.8 , -0.5 , 1.0} ,
					{0.5 , -0.91 , 0.26 , -0.5},
					{-0.26 , -0.27 , 0.17 , 0.87}
				};

// biases
float biases[3] = {2.0, 3.0 ,0.5};
float output[3] = {0.0};

int main()
{

for (int n = 0; n < sizeof(weights)/sizeof(weights[0]); n++ )
{
	for (int i = 0; i < sizeof(inputs)/sizeof(inputs[0]); i++ )
	{
		output[n] += inputs[i] * weights[n][i];
	}
	output[n] += biases[n];
}



for (int i = 0; i < sizeof(output)/sizeof(output[0]); i++)
{
	cout << output[i] << "\n";
}
return 0;


}