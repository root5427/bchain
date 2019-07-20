#include "Blockchain.h"

using namespace std;

Blockchain::Blockchain()
{
    _vChain.emplace_back(0, "Genesis Block");
    _nDifficulty = 6;
}

void Blockchain::AddBlock(Block bNew)
{
    bNew.sPrevhash = _GetLastBlock().GetHash();
    bNew.MineBlock(_nDifficulty);
    _vChain.push_back(bNew);
}

Block Blockchain::_GetLastBlock() const
{
    return _vChain.back();
}

uint32_t Blockchain::GetDifficulty()
{
    return this->_nDifficulty;
}