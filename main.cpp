//
// Created by erban on 2021/4/28.
//
#include <functional>
#include "spdlog/sinks/basic_file_sink.h"
#include "spdlog/sinks/daily_file_sink.h"
std::function<void()> m_fnc;


int main(int argc,char* argv[])
{
	m_fnc = [](){ printf("hellow");};
	m_fnc();

	{
		auto logger = spdlog::basic_logger_mt("basic_logger", "logs/basic-log.txt");
		logger->warn("warn warn warn");
	}
	{
		auto logger = spdlog::daily_logger_mt("daily_logger","logs/dail.txt");
		logger->error("error error error");
	}

	return 0;
}