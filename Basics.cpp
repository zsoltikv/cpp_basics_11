#include <iostream> // include the input-output stream library for cin and cout

using namespace std; // use the standard namespace to avoid writing std constantly

// declare a function that swaps the values of two integer variables using pointers
//void csere(int *x, int *y);

//int main()
//{
//	// declare two integer variables to store the numbers entered by the user
//	int szam1;
//	int szam2;
//
//	// ask the user to enter two numbers
//	cout << "Kerem a ket szamot: ";
//	cin >> szam1 >> szam2;
//
//	// display the values of the two variables before swapping
//	cout << "A csere elott: szam1=" << szam1 << " szam2=" << szam2 << endl;
//
//	// call the csere function and pass the memory addresses of the two variables
//	csere(&szam1, &szam2);
//
//	// display the values of the two variables after swapping
//	cout << "A csere utan: szam1=" << szam1 << " szam2=" << szam2;
//
//	// return 0 to indicate that the program executed successfully
//	return 0;
//}
//
// define a function that swaps the values of two integer variables using pointers
//void csere(int *x, int *y)
//{
//	// store the value pointed to by x in a temporary variable
//	int seged = *x;
//
//	// assign the value pointed to by y to the variable pointed to by x
//	*x = *y;
//
//	// assign the original value of x stored in seged to the variable pointed to by y
//	*y = seged;
//}

// declare a function that calculates the arithmetic average of an integer array
// the function receives a pointer to the array and the number of elements
double atlag(int*, int);

int main()
{
	// declare and initialize the first integer array containing 10 values
	int jegy[10] = { 1, 2, 3, 23, 34, 56, 23, 45, 21, 23 };

	// declare and initialize the second integer array containing 10 values
	int jegy2[10] = { 10, 25, 43, 23, 34, 56, 23, 45, 21, 23 };

	// -------------------------------------------------------------------------------
	// --- 1. CALCULATING THE AVERAGE OF THE FIRST ARRAY ---
	// -------------------------------------------------------------------------------

	// call the atlag function with the first array and its number of elements
	// display the calculated arithmetic average on the screen
	cout << "Szamtani atlag: " << atlag(jegy, 10) << endl;

	// -------------------------------------------------------------------------------
	// --- 2. CALCULATING THE AVERAGE OF THE SECOND ARRAY ---
	// -------------------------------------------------------------------------------

	// call the atlag function with the second array and its number of elements
	// display the calculated arithmetic average on the screen
	cout << "\nSzamtani atlag: " << atlag(jegy2, 10) << endl;

	// return 0 to indicate that the program executed successfully
	return 0;
}

// define a function that calculates the arithmetic average of an integer array
// the function receives a pointer to the array and the number of elements
double atlag(int* tmb, int db)
{
	// declare and initialize a variable to accumulate the sum of the array elements
	double osszeg = 0;

	// loop through all elements of the array
	for (int i = 0; i < db; i++)
	{
		// add the current array element to the accumulated sum
		osszeg = osszeg + tmb[i];
	}

	// calculate and return the arithmetic average by dividing the sum by the number of elements
	return osszeg / db;
}