# retrun True if the circumference of the circle is greater than the square's perimeter
# else return false

from math import sqrt
def circle_or_square(rad, area):
	return (rad * 2 * 3.14) > (sqrt(area) * 4)
