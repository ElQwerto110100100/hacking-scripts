#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <limits.h>

#define MAX_NUM_LEN 12
#define HOTSTREAK 3
#define MAX_WINS 16
#define ONE_BILLION 1000000000
#define ROULETTE_SIZE 36
#define ROULETTE_SPINS 128
#define ROULETTE_SLOWS 16
#define NUM_WIN_MSGS 10
#define NUM_LOSE_MSGS 5

long cash = 0;
long wins = 0;

const char *win_msgs[NUM_WIN_MSGS] = {
  "Wow.. Nice One!",
  "You chose correct!",
  "Winner!",
  "Wow, you won!",
  "Alright, now you're cooking!",
  "Darn.. Here you go",
  "Darn, you got it right.",
  "You.. win.. this round...",
  "Congrats!",
  "You're not cheating are you?",
};

const char *lose_msgs1[NUM_LOSE_MSGS] = {
  "WRONG",
  "Nice try..",
  "YOU LOSE",
  "Not this time..",
  "Better luck next time..."
};

const char *lose_msgs2[NUM_LOSE_MSGS] = {
  "Just give up!",
  "It's over for you.",
  "Stop wasting your time.",
  "You're never gonna win",
  "If you keep it up, maybe you'll get the flag in 100000000000 years"
};

int main(int argc, char *argv[]) {
  long seed = 2476;
  srand(seed);
  for (int i = 0; i< 20; i++) {
    long spin = (rand() % ROULETTE_SIZE)+1;
    printf("\n Spin #'%d': '%lu' \n", i,spin);
  }
  return 1;
}
