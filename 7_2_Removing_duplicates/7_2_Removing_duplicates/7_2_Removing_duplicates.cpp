// 7_2_Removing_duplicates.cpp : Задача 2. Устранение дубликатов
//Тема: Библиотека STL

#include<iostream>
#include<unordered_set>
#include<algorithm>

void print_result(const std::vector<int>& vec) {

	for (const auto& value : vec) {
		std::cout << value << '\n';
	}
}

bool compare(int p1, int p2) {
	return p1 > p2;
}

int main()
{
	std::cout << "[IN]: "<<'\n';
	int n = 0;
	std::cin >> n;

	std::unordered_set<int> nums;

	int tmp = 0;

	for (int i = 0; i < n; i++)
	{
		std::cin >> tmp; nums.insert(tmp);
	}

	std::vector<int> result(nums.cbegin(), nums.cend());
	std::sort(result.begin(), result.end(), compare);

	std::cout << "[OUT]: " << '\n';
	print_result(result);

	return 0;
}

