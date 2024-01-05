% Initiate a timer for performance measurement of the first for loop
tic;
% Initialize the accumulator variable for the sum
for_sum_1 = 0;
% Loop through each integer from 1 to 279145
for i_1 = 1:279145
    % Accumulate the squares of the loop variable
    for_sum_1 = for_sum_1 + i_1*i_1;
end
% Display the calculated sum using the for loop
fprintf('Sum using for loops - sum 1: %d\n', for_sum_1);
% Stop the timer and store the elapsed time
timeForLoop_1 = toc;
% Print the execution time for the first for loop
fprintf('Time taken for 1st "for loop": %f seconds\n================\n', timeForLoop_1);
%========================================================================%
% Initiate a timer for performance measurement of the second for loop
tic
% Initialize the accumulator variable for the sum, starting at 1
for_sum_2 = 1;
% Loop from 2 to 279145
for i_2 = 2:279145
    % Check if the loop variable is even
    if mod(i_2, 2) == 0
        % Subtract the reciprocal of the even index from the running total
        for_sum_2 = for_sum_2 - (1 / i_2);
    else
        % Add the reciprocal of the odd index to the running total
        for_sum_2 = for_sum_2 + (1 / i_2);
    end
end
% Print the resulting value from the second for loop for verification
fprintf('Sum using for loops - sum 2: %f\n', for_sum_2);
% Stop the timer and store the elapsed time for the second loop
timeForLoop_2 = toc;
% Print the execution time for the second for loop
fprintf('Time taken for 2nd "for loop": %f seconds\n================\n', timeForLoop_2);
%========================================================================%
% Initiate a timer for the vectorized approach for the first arithmetic progression
tic;
% Generate a vector containing all integers from 1 to 279145
vector = 1:279145;
% Calculate the sum of the squares of all elements in the vector
sumByVectorization = sum(vector .^ 2);

% Stop the stopwatch timer and print the result of the vectorized sum
timeVectorized_1 = toc;
fprintf('Sum using vectorization: %d\n', sumByVectorization);
fprintf('Time taken for vectorization: %f seconds\n================\n', timeVectorized_1);
%========================================================================%
% Initiate a timer for the vectorized approach for the second arithmetic progression
tic;
% Generate a vector for the denominators of terms in the series, from 1 to 279145
denominator = 1:279145;

% Create a vector with alternating signs (+1 and -1) for each term in the series
alternatingSigns = (-1).^(denominator+1);

% Divide the alternating sign by the corresponding denominator
terms = alternatingSigns ./ denominator;

% Calculate the sum of all terms in the series
sumResult = sum(terms);

% Print the sum of the alternating harmonic series
fprintf('Sum using vectorization - sum : %f\n', sumResult);
% Stop the timer and print the execution time for the vectorized series calculation
timeVectorized_2 = toc;
fprintf('Time taken for vectorization 2: %f seconds\n================\n', timeVectorized_2);
clear all;