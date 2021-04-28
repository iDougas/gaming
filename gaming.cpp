#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void Gaming(string game);
void VideoGaming(string game;)

int main()
{
  string game = "gaming";
  Gaming(game);
  VideoGaming(game);
  return 0;
}

void Gaming(string game)
{
  cout << game;
}

void VideoGaming(string game)
{
  ofstream gamer("gaming.txt");
  for(int i = 0; i < 6; i++) {
    gamer << game[i];
  }
  gamer.close();
}
