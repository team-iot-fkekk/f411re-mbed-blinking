#include <mbed.h>

#define BLINKING_RATE_MS 500
int main()
{

  // put your setup code here, to run once:
  DigitalOut led(D7);

  while (1)
  {
    // put your main code here, to run repeatedly:
    led = !led;
    thread_sleep_for(BLINKING_RATE_MS);
  }
}