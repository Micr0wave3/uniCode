function [edges, area] = calculateTriangleMetrics(x1, y1, x2, y2, x3, y3)
    % Calculate the distances between the vertices
    a_interm = (x2-x1) * (x2-x1) + (y2-y1) * (y2-y1);
    b_interm = (x3-x2) * (x3-x2) + (y3-y2) * (y3-y2);
    c_interm = (x1-x3) * (x1-x3) + (y1-y3) * (y1-y3);
    a = sqrt(a_interm);
    b = sqrt(b_interm);
    c = sqrt(c_interm);
    
    % Store the edges in an array
    edges = [a, b, c];
    
    % Calculate the semi-perimeter
    s = (a + b + c) / 2;
    
    % Calculate the area using Heron's formula
    area = sqrt(s * (s-a) * (s-b) * (s-c));
end