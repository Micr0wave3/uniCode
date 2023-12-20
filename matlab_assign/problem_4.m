A = input('Enter the 3x3 coefficient matrix A (in brackets [ ]): ');
b = input('Enter the 3x1 constant vector b (in brackets [ ]): ');

determinantA = det(A);
fprintf('The determinant of A is: %f\n', determinantA);

[rowA, colA] = size(A);
[rowB, colB] = size(b);
fprintf('The inner dimensions of A^-1 and b are: (%d × %d) and (%d × %d)\n', colA, rowA, rowB, colB);
disp(A);
disp(b);

if determinantA ~= 0 && colA == rowB
    V = A\b;
    fprintf('The values of the voltages are:\n');
    fprintf('V1: %f\nV2: %f\nV3: %f\n', V(1), V(2), V(3));
else
    % If determinant is zero or dimensions do not match, show an error
    if determinantA == 0
        fprintf('Matrix A is singular (determinant is zero); no unique solution exists.\n');
    end
    if colA ~= rowB
        fprintf('Inner dimensions of A-1 and b do not match; cannot perform matrix multiplication.\n');
    end
end