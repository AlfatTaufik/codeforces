#include <stdio.h>

void Find(int low, int high) {
   int mid; // Midpoint of low..high
   char answer;

   mid = (high + low) / 2;

   printf("Is it %d? (l/h/y): ", mid);
   scanf(" %c", &answer);

   if((answer != 'l') &&
      (answer != 'h')) { // Base case:
      printf("Thank you!\n");  // Found number!
   }
   else { // Recursive case: Guess in
          // lower or upper half of range
      if (answer == 'l') {  // Guess in lower half
         Find(low, mid);    // Recursive call
      }
      else {                // Guess in upper half
         Find(mid + 1, high); // Recursive call
      }
   }

   return;
}

int main(void) {
   printf("Choose a number from 0 to 100.\n");
   printf("Answer with:\n");
   printf("   l (your num is lower)\n");
   printf("   h (your num is higher)\n");
   printf("   any other key (guess is right).\n");

   Find(0, 100);

   return 0;
}
