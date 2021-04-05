--SpaceLine--

This subroutine helps to get the closest approaching distance between two 
3-dimensional straight lines. Each line is defined by its starting position 
vector, r=(r_x, r_y, r_z) and directional vector v=(v_x, v_y, v_z). Thus,
the vector equation of a 3-dimensional straight line by r and v is:

l = r + t * v

where t is a real number.

This subroutine provides a function returning the closest distance between two
straight lines in 3-dimensional space. Also, the function returns two 
parameters that can be used to know where is the closest approaching points of 
each space lines.

SpaceLine.C >

g++ -O SpaceLine SpaceLine.C `root-config --cflags --libs`

SpaceLine_v2.C>

root -l SpaceLine_v2.C
