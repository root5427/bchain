#include <vector>
#include "Block.h"
using namespace std;

class Blockchain
{

public:
    Blockchain();

    void AddBlock(Block bNew);
    uint32_t GetDifficulty();

private:
    uint32_t _nDifficulty;
    vector<Block> _vChain;

    Block _GetLastBlock() const;
};