#include "string.h"

int main(int argc, char const *argv[]) {
uint8_t myVal = 0;
uint8_t myConst = 0;
uint8_t lastVar = 0;

//added new variable
uint64_t somelargeVal;

for(;;)
{
  if(myVal > 5){
    myVal = 0;
    myConst++;
  }else
  myVal++;
}

  return 0;
}
