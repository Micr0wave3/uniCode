%   get user input on the desired x value
x = input('Please enter the value for x: ');

%   calculate x value in accordance with user's choice of 'x' value
if x < 0
    y = 100;
elseif x >= 0 && x <= 50
    y = 2 * (x + 200);
elseif x > 50 && x < 100
    y = 3 * x - x / 20 + 10;
elseif x >= 100
    y = 299;
end

disp(['For x = ', num2str(x), ', y = ', num2str(y)]);

x_vals = -10:0.1:150;   % define range and step size for the plot later on

y_vals = zeros(size(x_vals)); % Initialize y-values with zeros for further remap of values
for i = 1:length(x_vals)
    current_x = x_vals(i); % current_x is defined as the next step to calculate the value for the plot
    if current_x < 0
        y_vals(i) = 100;
    elseif current_x >= 0 && current_x <= 50
        y_vals(i) = 2 * (current_x + 200);
    elseif current_x > 50 && current_x < 100
        y_vals(i) = 3 * current_x - current_x / 20 + 10;
    elseif current_x >= 100
        y_vals(i) = 299;
    end
end

% Now plot the function
plot(x_vals, y_vals);
title('Plot of y vs x');
xlabel('x');
ylabel('y');
grid on; % Add grid for better visualization