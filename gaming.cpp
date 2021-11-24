#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Ultra {
  string gaming = "time";
};

void Gaming(string game);
void VideoGaming(string game, Ultra epic);

int main()
{
  string game = "gaming";
  Gaming(game);
  Ultra epic;
  VideoGaming(game, epic);
  return 0;
}

void Gaming(string game)
{
  cout << game;
}

void VideoGaming(string game)
{
  ofstream gamer("gaming.txt");
  int bro = game.length();
  int how = epic.gaming.length();
  for(int i = 0; i < bro; i++) {
    gamer << game[i];
  }
  gamer << " ";
  for(int i = 0; i < how; i++) {
    gamer << epic.gaming[i];
  }
  gamer.close();
}
