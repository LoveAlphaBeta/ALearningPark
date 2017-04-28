#include<boebot.h>  // delay function Library
#include<at89x52.h> // chip Library

int int main() {
  while (1) {
    delay_nms(20);  // produce Low signal
    P1_1=0;
    P1_0=0;
    delay_nus(1700);  // produce High signal
    P1_1=1;
    P1_0=1;
  }
  return 0;
}
