#include "Blockchain.h"
#include <time.h>
using namespace std;

main()
{
    // record start time to calculate runtime of code
    time_t tStart = time(nullptr), tEnd;
    Blockchain bChain = Blockchain();

    cout << "Difficulty is \t\t" << bChain.GetDifficulty() << '\n';

    cout << "Mining block 1..." << endl;
    bChain.AddBlock(Block(1, "Block 1 Data"));

    cout << "Mining block 2..." << endl;
    bChain.AddBlock(Block(2, "Block 3 Data"));

    cout << "Mining block 3..." << endl;
    bChain.AddBlock(Block(3, "Block 3 Data"));

    tEnd = time(nullptr);
    cout << "RUNTIME: \t\t" << tEnd - tStart << endl;
}