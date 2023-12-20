% Ask user for the coordinates of the triangle vertices
x1 = input('Enter x coordinate of vertex 1: ');
y1 = input('Enter y coordinate of vertex 1: ');
x2 = input('Enter x coordinate of vertex 2: ');
y2 = input('Enter y coordinate of vertex 2: ');
x3 = input('Enter x coordinate of vertex 3: ');
y3 = input('Enter y coordinate of vertex 3: ');

% Call the function to calculate the edges and the area
[edges, area] = calculateTriangleMetrics(x1, y1, x2, y2, x3, y3);

% Display the results
fprintf('The lengths of the edges are: \n');
fprintf('a: %f\nb: %f\nc: %f\n', edges(1), edges(2), edges(3));
fprintf('The area of the triangle is: %f\n', area);