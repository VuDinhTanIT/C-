#ifndef COIN_H
#define COIN_H
#include <iostream>
#include <string>
using namespace std;

class Coin
{
private:
// The side facing up
string sideUp;

public:
// Constructor
Coin()
{
// Simulates tossing of the coin
int toss = rand() % 2;
if(toss == 0)
{
sideUp = "heads";
}
else
{
sideUp = "tails";
}
}
// Returns the side facing up
string getSideUp()
{
return sideUp;
}
};

#endif

