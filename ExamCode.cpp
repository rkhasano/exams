#include "ExamCode.hpp"

#include "cuTEST/Menu.hpp"

string ExamCoding::Location( int x, int y )
{
  string location = "";
  if ( x==0 || y==0 ) // Check if at least one coordinate is equal to 0
  { 
    if (x > 0) location = location + "EAST";
	else if (x < 0) location = location + "WEST";
	else if (y > 0) location = location + "NORTH";
	else if (y <0 ) location = location + "SOUTH";
	else location = location + "ORIGIN";
  }
  else //If neither x nor y is equal to 0
  {
	  if (x > 0 && y > 0) location = location + "NORTHEAST";
	  else if (x < 0 && y>0) location = location + "NORTHWEST";
	  else if (x > 0 && y<0) location = location + "SOUTHEAST";
	  else location = location + "SOUTHWEST";
  
  }

  return location;
}


string ExamCoding::Draw( int number )
{
  string result = "";

  for (int i=1;i<=number;i++) 
  {
	  
	  if ( i%2 == 0) result += "!";
	  else result += "?";
  
  }

  return result;
}







