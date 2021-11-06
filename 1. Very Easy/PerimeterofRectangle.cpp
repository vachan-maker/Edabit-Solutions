/* Find the Perimeter of a Rectangle
- Create a function that takes length and width and finds the perimeter of a rectangle.
Problem: https://edabit.com/challenge/yCs49ppiH3WwsaxBe
*/

#include <iostream>
using namespace std;

int findPerimeter(int length, int width) 
{
	int perimeter;
	perimeter = 2 * (length + width);
	return perimeter;
}
int main()
{
  int length, width;
  cout << "Enter the length and width of the rectangle";
  cin >> length >> width;
  cout << findPerimeter(length, width);
  return 0;
}
