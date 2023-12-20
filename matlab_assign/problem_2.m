%=============FOR LOOP FOR ARITHMETIC PROGRESSION #1===========%
tic;
for_sum_1 = 0;
for i_1 = 1:279145
    for_sum_1 = for_sum_1 + i_1*i_1;
end
fprintf('Sum using for loops: %d\n', for_sum_1);
disp(for_sum_1);
timeForLoop_1 = toc;
fprintf('Time taken for for loop: %f seconds\n', timeForLoop_1);
%============FOR LOOP FOR ARITHMETIC PROGRESSION #2============%
tic
for_sum_2 = 1;
for i_2 = 2:279145
    if mod(i_2, 2) == 0
        for_sum_2 = for_sum_2 - (1 / i_2);
    else
        for_sum_2 = for_sum_2 + (1 / i_2);
    end
end
fprintf('LOOP 2 TEST VALUE: %f\n', for_sum_2);
timeForLoop_2 = toc;
fprintf('Time taken for 2nd "for loop": %f seconds\n', timeForLoop_2);
%===============VECTOR FOR ARITHMETIC PROGRESSION #1==========%
tic;
% Calculate the sum using vectorized operations
vector = 1:279145;
sumByVectorization = sum(vector .^ 2);

candno = 279145;
sumByVectorization = sumByVectorization + candno^2;

% Stop the stopwatch timer and print the result
timeVectorized_1 = toc;
fprintf('Sum using vectorization: %d\n', sumByVectorization);
fprintf('Time taken for vectorization: %f seconds\n', timeVectorized_1);
%===============VECTOR FOR ARITHMETIC PROGRESSION #1==========%
tic;
denominator = 1:279145;

alternatingSigns = (-1).^(denominator+1);

terms = alternatingSigns ./ denominator;

sumResult = sum(terms);

fprintf('The sum of the alternating harmonic series is: %f\n', sumResult);
timeVectorized_2 = toc;
fprintf('Time taken for vectorization 2: %f seconds\n', timeVectorized_2);