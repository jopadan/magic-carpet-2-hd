﻿// Unit-tests.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//
#include <chrono>
#include <thread>
#include <iostream>
#include "regression-tests.h"


int CountFailedRegressionTests() {
	int numFailedTests = 0;

	Logger->info("--- Regressions tests ---");
	for (int i = 1; i <= 25; i++)
		if (i != 22)
			if (run_regtest(i) != 0)
			{
				numFailedTests++;
			}

	return numFailedTests;
}

int main(int argc, char** argv)
{
	//if (CommandLineParams.DoShowDebugMessages1()) -- for suppress messages
	int numFailedTests = 0;

	InitializeLogging(spdlog::level::info);
	numFailedTests += CountFailedRegressionTests();

	if (numFailedTests == 0)
	{
		Logger->info("All tests passed");
	}
	else
	{
		Logger->error("{} tests failed!", numFailedTests);
	}

	std::this_thread::sleep_for(std::chrono::milliseconds(2000));
	return numFailedTests;
}