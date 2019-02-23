/*
Evan Crowley
Kattis - Booking a Room
https://open.kattis.com/problems/bookingaroom
*/
#include <iostream>

int main()
{
  using namespace std;

  int r, n;
  int bookedRoom;
  bool available = false;

  cin >> r >> n;                // get input for total rooms and how many to read in
  bool *room = new bool[r + 1]; // create a new bool as an array to mark the booked rooms

  for (int i = 0; i < n; i++)
  {
    cin >> bookedRoom;       // read in booked rooms
    room[bookedRoom] = true; // mark them in the new bool
  }

  for (int i = 1; i < r + 1; i++) // loop through all rooms
  {
    if (room[i] == false) // check for the first not booked
    {
      cout << i << endl; // if there is one, print that room number
      available = true;  // get out of the loop
      break;
    }
  }
  if (!available) // if no available rooms, required output
  {
    cout << "too late" << endl;
  }

  return 0;
}