function nthFibonacciNumber = fibonacci(n)
    % Check if the input is less than 1 and return a warning message
    if n < 1
        error('Input must be a positive integer.');
    elseif n == 1
        % Base case: f(1) = 1
        nthFibonacciNumber = 1;
    elseif n == 2
        % Base case: f(2) = 2
        nthFibonacciNumber = 2;
    else
        % Initialize the first two fibonacci numbers
        fibMinusTwo = 1;
        fibMinusOne = 2;
        % Compute the fibonacci sequence iteratively
        for i = 3:n
            nthFibonacciNumber = fibMinusOne + fibMinusTwo;
            % Update the last two fibonacci numbers
            fibMinusTwo = fibMinusOne;
            fibMinusOne = nthFibonacciNumber;
        end
    end
end