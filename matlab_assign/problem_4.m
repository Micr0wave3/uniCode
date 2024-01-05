% Prompt the user to input a 3x3 coefficient matrix and store it in variable A.
A = input('Enter the 3x3 coefficient matrix A (for example [1, 2, 3; 4, 5, 6; 7, 8, 9] including brackets): ');
% Prompt the user to input a 3x1 constant vector and store it in variable b.
b = input('Enter the 3x1 constant vector b (for example [12; 34; 56]): ');

% Calculate the determinant of matrix A and store it in variable determinantA.
determinantA = det(A);
% Display the determinant value of matrix A.
fprintf('The determinant of A is: %f\n', determinantA);

% Retrive and store the size (number of rows and columns) of matrix A.
[rowA, colA] = size(A);
% Retrive and store the size (number of rows and columns) of vector b.
[rowB, colB] = size(b);
% Display the inner dimensions of A^-1 (inverse of A) and vector b to user.
fprintf('The inner dimensions of A^-1 and b are: (%d × %d) and (%d × %d)\n', colA, rowA, rowB, colB);

% Print the matrix A and vector b.
disp(A);
disp(b);

% Check if the determinant of A is not zero and the inner dimensions of A and b match for multiplication.
if determinantA ~= 0 && colA == rowB
    % Solve the system of linear equations Ax = b for x and store in V.
    V = A\b;
    % Display the solution of the system (voltages V1, V2, V3).
    fprintf('The values of the voltages are:\n');
    fprintf('V1: %f\nV2: %f\nV3: %f\n', V(1), V(2), V(3));
else
    % Display an error message if the determinant is zero, indicating that the matrix A is singular.
    if determinantA == 0
        fprintf('Matrix A is singular (determinant is zero); no unique solution exists.\n');
    end
    % Display an error message if the inner dimensions do not match, which is necessary to perform matrix multiplication.
    if colA ~= rowB
        fprintf('Inner dimensions of A-1 and b do not match; cannot perform matrix multiplication.\n');
    end
end