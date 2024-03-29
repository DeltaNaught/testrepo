#include <iostream>
#include <vector>

using namespace std;

//This is a single-line comment

/*This is a muli-line
comment*/

int main(int argc, char argv[])
{

	vector <int> vector1, vector2;

	vector1.push_back(1000);
	vector1.push_back(20);

	cout << vector1.at(0) << endl;
	cout << vector1.at(1) << endl;
	cout << vector1.size() << endl;

	vector2.push_back(100);
	vector2.push_back(200);

	cout << endl << vector2.at(0) << endl;
	cout << vector2.at(1) << endl;
	cout << vector2.size() << endl;
	
	vector <vector <int>> vector_2d;

	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);

	cout << vector_2d.at(0).at(0) << endl;
	cout << vector_2d.at(0).at(1) << endl;
	cout << vector_2d.at(1).at(0) << endl;
	cout << vector_2d.at(1).at(1) << endl;

	vector1.at(0) = 1000;

	cout << endl << vector_2d.at(0).at(0) << endl;
	cout << vector_2d.at(0).at(1) << endl;
	cout << vector_2d.at(1).at(0) << endl;
	cout << vector_2d.at(1).at(1) << endl;



	cout << endl << vector1.at(0) << endl;
	cout << vector1.at(1) << endl;

	return 0;
}
