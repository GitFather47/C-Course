#include <iostream>

using namespace std;

double averageSpeed(double distanceXtoY, double distanceYtoZ, double timeXtoY, double timeYtoZ) {
  // Calculate the total distance traveled.
  double totalDistance = distanceXtoY + distanceYtoZ;

  // Calculate the total time taken.
  double totalTime = timeXtoY + timeYtoZ;

  // Calculate the average speed.
  double averageSpeed = totalDistance / totalTime;

  // Return the average speed.
  return averageSpeed;
}

int main() {
  // Prompt the user for the distance between X and Y, and Y and Z.
  cout << "Enter the distance between X and Y in kilometers: ";
  double distanceXtoY;
  cin >> distanceXtoY;

  cout << "Enter the distance between Y and Z in kilometers: ";
  double distanceYtoZ;
  cin >> distanceYtoZ;

  // Prompt the user for the time taken to travel from X to Y, and from Y to Z.
  cout << "Enter the time taken to travel from X to Y in hours: ";
  double timeXtoY;
  cin >> timeXtoY;

  cout << "Enter the time taken to travel from Y to Z in hours: ";
  double timeYtoZ;
  cin >> timeYtoZ;

  // Calculate the average speed.
  double avgSpeed = averageSpeed(distanceXtoY, distanceYtoZ, timeXtoY, timeYtoZ);

  // Display the average speed.
  cout << "The average speed was " << avgSpeed << " km/h." << endl;

  return 0;
}
