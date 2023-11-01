#include <stdio.h>
#include <windows.h>

// Define notes and their frequencies
#define C4 261.63
#define D4 293.66
#define E4 329.63
#define F4 349.23
#define G4 392.00
#define A4 440.00
#define B4 493.88

int main()
{
   // Define the melody
   double melody[] = {C4, C4, G4, G4, A4, A4, G4, F4, F4, E4, E4, D4, D4, C4};

   // Define the duration of each note in milliseconds
   int duration[] = {400, 400, 400, 400, 400, 400, 850, 400, 400, 400, 400, 400, 400, 850};

   for (int i = 0; i < 14; i++)
   {
      printf("Play note %.2f Hz for %d ms\n", melody[i], duration[i]);
      Beep(melody[i], duration[i]);
   }

   return 0;
}
