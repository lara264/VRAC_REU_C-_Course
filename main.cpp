#include <iostream>
#include <fstream>
#include <string>
#include <vector>

//reference: geeksforgeeks, tutorialspoint

int main() {

	std::vector<std::vector<std::string>> data;

	std::fstream myfile;

	myfile.open("housing.csv", std::ios::in);

	//data being read in: longitude, ltitude, housing_median)age, total_rooms, total_bedrooms, population, households, median_income, median_house_value, ocean_proximity

	std::string line;
	int i = 0;

	if (myfile.is_open()) {
		while (i < 5) {
			std::getline(myfile, line);
			std::cout << line << std::endl;
			std::cout << "I printed the line" << std::endl;
			i++;
		}
	}
	else {
		std::cout << "failed to open file" << std::endl;
	}
	



	return 0;
}