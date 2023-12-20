function [edges, area] = calculateTriangleMetrics(x1, y1, x2, y2, x3, y3)
    % Calculate the distances between the vertices
    a = sqrt((x2-x1)^2 + (y2-y1)^2);
    b = sqrt((x3-x2)^2 + (y3-y2)^2);
    c = sqrt((x1-x3)^2 + (y1-y3)^2);
    
    % Store the edges in an array
    edges = [a, b, c];
    
    % Calculate the semi-perimeter
    s = (a + b + c) / 2;
    
    % Calculate the area using Heron's formula
    area = sqrt(s * (s-a) * (s-b) * (s-c));
end