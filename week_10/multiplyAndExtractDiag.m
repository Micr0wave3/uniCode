function [f, B] = multiplyAndExtractDiag(A, b)
    % This function computes the product f = A*b
    % and creates a diagonal matrix B with the diagonal elements of A
    
    f = A * b; % Multiply matrix A by vector b
    B = diag(diag(A)); % Extract the diagonal elements of A to create matrix B
end