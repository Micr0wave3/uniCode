function dy = problem3(t, y);
v1 = y(1);
v2 = y(2);
V = 100 * sin(72*t);
L = 4;
R = 500;
C = 0.000001;
dv1 = v2;
dv2 = (V - R * v2 - v1 / C) / L;
dy = [dv1; dv2];
end