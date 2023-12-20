% Initial conditions
y0 = [0; 0]; % [y(0); dy/dt(0)]

% Time span
tspan = [0, 279145/25000];

% Solve ODE
[t, y] = ode45(@ode_system, tspan, y0);

% Find and display max values
[max_y, idx_y] = max(y(:,1));
[max_dy, idx_dy] = max(y(:,2));
fprintf('Maximum value of y is %f at time %f\n', max_y, t(idx_y));
fprintf('Maximum value of dy/dt is %f at time %f\n', max_dy, t(idx_dy));

% Plot y vs t
figure;
subplot(1, 2, 1);
plot(t, y(:,1), 'b-');
title('y vs t');
xlabel('Time t');
ylabel('Response y');
grid on;

% Plot dy/dt vs t
subplot(1, 2, 2);
plot(t, y(:,2), 'r-');
title('dy/dt vs t');
xlabel('Time t');
ylabel('Derivative of y');
grid on;

clearvars;
%https://ch.mathworks.com/matlabcentral/answers/867663-how-to-plot-multiple-graphs-in-one-figure