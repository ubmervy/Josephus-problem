#include <iostream>
#include <vector>
#include <iomanip> 
#include <stdlib.h>

int N; // Number of people in a circle
int M; // Every M-th person is killed
int n; // Iteration number
int current = N - 1; // killing place index in current iteration
int next_alive, prev_alive;

void print_iteration(std::vector<int> person, std::vector<int> neighbour, int killed)
{
	std::cout << std::endl;
	std::cout << std::setw(20) << std::right << "place index: ";
	for (int i = 0; i < N; i++)
	{
		std::cout << i << " ";
	};
	std::cout << std::endl;
	std::cout << std::setw(20) << std::right << "person number: ";
	for (int i = 0; i < N; i++)
	{
		std::cout << person[i] << " ";
	};
	if (person[M - 1] == 0)
		std::cout << '\t' << " person with place index " << killed << " is killed";
	else
		std::cout << '\t' << "initial condition";
	std::cout << std::endl;
	std::cout << std::setw(20) << std::right << "next_alive_index: ";
	for (int i = 0; i < N; i++)
	{
		std::cout << neighbour[i] << " ";
	};
	std::cout << std::endl << std::endl;
};

int get_next_number(int number, int increment, std::vector<int> person)
{
	int j = 0;
	while (j < abs(increment))
		if (person[(number + j*abs(increment) / increment + 1 + N) % N] == 0) number++;
		else j++;
		int new_number = (number + increment + N) % N;
	return new_number;
};

int main(int argc, char* argv[])
{
	std::cout << "Enter the number of persons in a circle:" << std::endl;
	std::cin >> N;

	std::cout << "Enter a step:" << std::endl;
	std::cin >> M;

	std::vector<int> person; // persons
	std::vector<int> neighbour; // index of next alive person from current place

	person.resize(N);
	neighbour.resize(N);

	for (int i = 0; i < N; i++)
	{
		person[i] = neighbour[i] = i + 1;
	}

	print_iteration(person, neighbour, M);

	while (n <= N)
	{
		current = get_next_number(current, M, person);
		person[current] = 0;
		n++;
		next_alive = get_next_number(current, 1, person);
		prev_alive = get_next_number(current, -1, person);

		neighbour[prev_alive] = next_alive;

		print_iteration(person, neighbour, current);
	};

	return 0;
};

