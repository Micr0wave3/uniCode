% Define the initial conditions for the ODE system: [initial displacement; initial velocity]
y0 = [0; 0]; % [y(0); dy/dt(0)]

% Define the time span range from 0 to a fixed value calculated from 279145/25000.
tspan = [0, 279145/25000];

% Use the ode45 solver to solve the ODE system defined by the function 'ode_system'
% over the specified time interval tspan, with initial conditions y0.
[t, y] = ode45(@ode_system, tspan, y0);

% Calculate and extract the maximum value of the displacement (y) and its corresponding index.
[max_y, idx_y] = max(y(:,1));
% Calculate and extract the maximum value of the velocity (dy/dt) and its corresponding index.
[max_dy, idx_dy] = max(y(:,2));

% Display the maximum displacement value and its corresponding time point.
fprintf('Maximum value of y is %f at time %f\n', max_y, t(idx_y));
% Display the maximum velocity value and its corresponding time point.
fprintf('Maximum value of dy/dt is %f at time %f\n', max_dy, t(idx_dy));

% Initiate figure for plotting.
figure;

% Create a subplot for displacement (first plot in a 1x2 grid)
subplot(1, 2, 1);
% Plot the displacement (first column of "y") against time "t" with a blue line.
plot(t, y(:,1), 'b-');
% Add title to the displacement plot.
title('y vs t');
% Label x-axis of the displacement plot.
xlabel('Time t');
% Label y-axis of the displacement plot.
ylabel('Response y');
% Enable grid for better readability of the displacement plot.
grid on;

% Create a subplot for velocity (second plot in a 1x2 grid)
subplot(1, 2, 2);
% Plot the velocity (second column of "y") against time "t" with a red line.
plot(t, y(:,2), 'r-');
% Add title to the velocity plot.
title('dy/dt vs t');
% Label x-axis of the velocity plot.
xlabel('Time t');
% Label y-axis of the velocity plot.
ylabel('Derivative of y');
% Enable grid for better readability of the velocity plot.
grid on;

% Clear all variables from the current workspace, resetting it to its initial state.
clearvars;