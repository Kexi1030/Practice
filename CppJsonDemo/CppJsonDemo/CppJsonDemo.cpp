#include "json.hpp"
using json = nlohmann::json;
#include <iostream>
#include <fstream>
#include <typeinfo>


int main()
{
	// 1.声明与构造
	json j1;
	json j2 = json::object();
	json j3 = json::array();

	std::cout << j1.type_name() << std::endl; // output: null
	std::cout << j2.type_name() << std::endl; // output: null
	std::cout << j3.type_name() << std::endl; // output: null

	// 2.内容构造
	json j{
		{ "name", "Judd Trump"},
		{ "credits", 1754500 },
		{ "ranking", 1}
	};
	std::cout << j << std::endl;

	// 3.解析与序列化
	std::string s = j.dump(); // 序列化
	std::cout << s << std::endl;

	std::string s_2 = R"(
{
    "name": "Judd Trump",
    "credits": 1754500,
    "ranking": 1
}
)";
	auto j_2 = json::parse(s_2); // 解析
	std::cout << typeid(j_2).name() << std::endl;

	// 4.对json文件解析
	json j_3;
	std::ifstream("c:\\rankings.json") >> j_3;
	std::cout << typeid(j_2).name() << std::endl;

}
