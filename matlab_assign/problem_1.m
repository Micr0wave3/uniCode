% Request user input for the desired x value, prompting a message in the console
x = input('Please enter the value for x: ');

% Conditional structure to calculate the corresponding y value based on the input value of 'x'
if x < 0
    y = 100; % If x is less than 0, y is set to 100
elseif x >= 0 && x <= 50
    y = 2 * (x + 200); % If x is between 0 and 50 (inclusive), calculate y using this formula
elseif x > 50 && x < 100
    y = 3 * x - x / 20 + 10; % If x is between 50 and 100 (exclusive), calculate y using a different formula
elseif x >= 100
    y = 299; % If x is 100 or greater, y is set to 299
end

% Display the result showing the x and corresponding y value
disp(['For x = ', num2str(x), ', y = ', num2str(y)]);

% Generate a range of x values from -10 to 150 inclusive, with a step size of 0.1, for plotting purposes
x_vals = -10:0.1:150;

% Create an array of zeros that is the same size as x_vals to store the corresponding y values for plotting
y_vals = zeros(size(x_vals));

% Loop over the x_vals array to calculate the y values using the same logic as above
for i = 1:length(x_vals)
    current_x = x_vals(i); % The current x value based on the iteration index
    % Conditional logic identical to the above, applied to each element in x_vals
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

% Plot the relationship between all values in x_vals and their corresponding y_vals
plot(x_vals, y_vals);
title('Plot of y vs x'); % Add a title to the plot
xlabel('x'); % Label the x-axis
ylabel('y'); % Label the y-axis
grid on; % Turn on the grid for the plot to improve readability