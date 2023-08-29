// 7_1_Symbol_rate.cpp: Задача 1. Частота символов
//Тема: Библиотека STL

#include<iostream>
#include<unordered_map>
#include<algorithm>

void print_result(const std::vector<std::pair<char, int>>& vec) {

	for (const auto& [key, value] : vec) {
		std::cout << key << ": " << value << '\n';
	}
}

bool compare(std::pair<char, int>p1, std::pair<char, int>p2) {
	return p1.second > p2.second;
}

int main()
{
	std::string str = "Hello world!!";
	std::cout << "[IN]: " << str << '\n';

	std::unordered_map<char, int> simbol_rate;
	std::for_each(str.cbegin(), str.cend(), [&simbol_rate](auto const& c) {

		std::pair<std::unordered_map<char, int>::iterator, bool> it;
		it = simbol_rate.insert(std::pair<char, int>(c, 1));
		if (it.second == false)++(it.first->second);
	});

	std::vector<std::pair<char, int>>result(simbol_rate.cbegin(), simbol_rate.cend());
	std::sort(result.begin(), result.end(), compare);

	std::cout << "[OUT]: " << '\n';
	print_result(result);

	return 0;
}
