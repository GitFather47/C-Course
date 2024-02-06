
#include <iostream>

using namespace std;

struct MovieData {
  string title;
  string director;
  int releaseYear;
  int runningTime;

  // Constructor to initialize all member data values
  MovieData(string title, string director, int releaseYear, int runningTime) {
    this->title = title;
    this->director = director;
    this->releaseYear = releaseYear;
    this->runningTime = runningTime;
  }

  // Function to display the movie data in a clearly formatted manner
  void display() {
    cout << "Movie Title: " << title << endl;
    cout << "Director: " << director << endl;
    cout << "Release Year: " << releaseYear << endl;
    cout << "Run Time: " << runningTime << " minutes" << endl;
  }
};

// Function to display the movie data in a clearly formatted manner,
// passed as constant references to avoid modifying the original data
void displayMovieData(const MovieData& movie) {
  cout << "Movie Title: " << movie.title << endl;
  cout << "Director: " << movie.director << endl;
  cout << "Release Year: " << movie.releaseYear << endl;
  cout << "Run Time: " << movie.runningTime << " minutes" << endl;
}

int main() {
  // Create two MovieData variables
  MovieData movie1("Scarface", "Brian De Palma", 1983, 170);
  MovieData movie2("The Godfather", "Francis Ford Coppola", 1972, 175);

  // Display the movie data
  cout << "Movie 1:" << endl;
  displayMovieData(movie1);
  cout << endl;

  cout << "Movie 2:" << endl;
  displayMovieData(movie2);
  cout << endl;

  return 0;
}
