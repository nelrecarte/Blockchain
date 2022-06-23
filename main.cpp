#include <iostream>
#include <ctime>
#include <vector>

#include "TransactionData.h"
#include "Block.h"
#include "Blockchain.h"

using namespace std;

int main()
{
	Blockchain bitcoin;

	time_t data1Time;
	TransactionData data1(1500, "Nelson", "Ricardo", time(&data1Time));
	bitcoin.addBlock(data1);


	time_t data2Time;
	TransactionData data2(2000, "Elkyn", "Jose", time(&data2Time));
	bitcoin.addBlock(data2);

	bitcoin.printChain();

	return 0;
}