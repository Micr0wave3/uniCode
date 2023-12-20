function dydt = ode_system(t, y)
    dydt = zeros(2,1);
    dydt(1) = y(2);                   % y1' = y2
    dydt(2) = -10*y(2) - 16*y(1) + 16;% y2' = -10y2 - 16y1 + 16
end