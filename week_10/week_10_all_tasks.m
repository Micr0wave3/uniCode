%======================================================%
%           IF ELSEIF END STATEMENTS
%======================================================%
%   TASK 1
%
% x = input('Enter the value for x: ');
% y = input('Enter the value for y: ');
% 
% result = task_1_function(x, y);
% 
% fprintf('f(%f, %f) = %f\n', x, y, result);
%======================================================%
%   TASK 2
%
% user_grade = input('Input your result: ');
% if user_grade > 95 && user_grade < 101
%     disp('A');
% elseif user_grade > 86 && user_grade < 96
%     disp('B');
% elseif user_grade > 76 && user_grade < 86
%     disp('C');
% elseif user_grade > 66 && user_grade < 77
%     disp('D');
% elseif user_grade > 0 && user_grade < 67
%     disp('F');
% else
%     disp('Invalid input');
% end
%======================================================%
%           THE WHILE LOOP
%======================================================%
%   TASK 1
%
% max_sum = 1000;
% current_sum = 0;
% n = 0;
% 
% 
% while true
%     n = n + 1;
%     next_term = n^2;
%     if current_sum + next_term > max_sum
%         break;
%     end
%     current_sum = current_sum + next_term;
% end
% 
% terms_used = n - 1; 
% 
% fprintf('The number of terms used in the sum: %d\n', terms_used);
% fprintf('The sum of the series is: %d\n', current_sum);
%======================================================%
%   TASK 2
% 
% n = input('Enter the value for n (n > 2): ');
% if n <= 2
%     fprintf('Please enter a value greater than 2.\n');
% else
%     nthFibonacciNumber = fibonacci(n);
%     fprintf('The %dth Fibonacci number is: %d\n', n, nthFibonacciNumber);
% end
%======================================================%
%           MORE PRACTICAL PROBLEMS
%======================================================%
%   TASK 1
%
% n = input('Enter the value for n (n must be an integer greater than one): ');
% 
% if n <= 1 || round(n) ~= n
%     disp('Please enter an integer greater than one.');
% else
%     terms = 1 ./ (1:n);
%     harmonic_sum = sum(terms);
% 
%     fprintf('The sum of the first %d terms of the harmonic series is: %f\n', n, harmonic_sum);
% end
%======================================================%
%   TASK 2
%
% n = 10;
% terms = (1/2).^(0:n-1);
% geometric_sum = sum(terms);
% fprintf('The sum of the first %d terms of the geometric series is: %f\n', n, geometric_sum);
%======================================================%
%   TASK 3
%
% numerators = 3:4:19;
% denominators = 10:10:50;
% 
% terms = numerators ./ denominators;
% 
% series_sum = sum(terms);
% 
% fprintf('The sum of the series is: %f\n', series_sum);
%======================================================%
%   TASK 4
%
% radii = [0.051, 0.052, 0.049, 0.048, 0.047, 0.053, 0.051, 0.052, 0.049, 0.051];
% heights = [1.111, 1.121, 1.132, 1.113, 1.082, 1.091, 1.102, 1.114, 1.075, 1.144];
% 
% volumes = pi * (radii.^2) .* heights;
% 
% mean_volume = mean(volumes);
% std_dev_volume = std(volumes);
% 
% fprintf('Volumes of cylinders (in m^3):\n');
% disp(volumes)
% 
% fprintf('Mean volume (in m^3): %f\n', mean_volume);
% 
% fprintf('Standard deviation of volume (in m^3): %f\n', std_dev_volume);
%======================================================%
%   TASK 5
%
% A = 5;
% tau1 = 1;
% tau2 = 0.5;
% 
% t = 0:0.1:5;
% 
% y1 = A * exp(-tau1 * t);
% y2 = A * exp(-tau2 * t);
% 
% figure;
% plot(t, y1, 'b-', 'LineWidth', 2);
% hold on;
% plot(t, y2, 'r--', 'LineWidth', 2);
% 
% xlabel('Time, t (seconds)');
% ylabel('y = A * exp(-\tau * t)');
% title('Exponential Decay with Different Time Constants');
% 
% legend(['\tau = ' num2str(tau1)], ['\tau = ' num2str(tau2)]);
% 
% grid on;
%======================================================%
%               SCRIPTS AND FUNCTIONS
%======================================================%
%   TASK 1
%
% x_original = 5;
% 
% x_doubled = doubleInput(x_original);
% 
% fprintf('Original value: %d\n', x_original);
% fprintf('Doubled value: %d\n', x_doubled);
%======================================================%
%   TASK 2
%
% x = input('Enter the first number (x): ');
% y = input('Enter the second number (y): ');
% 
% fprintf('Original values - x: %f, y: %f\n', x, y);
% 
% [x, y] = swop(x, y);
% 
% fprintf('Swopped values - x: %f, y: %f\n', x, y);
%======================================================%
%    TASK 3
%
% A = [1,2,3; 4,5,6; 7,8,9];
% b = [1; 2; 3];
% 
% [f, B] = multiplyAndExtractDiag(A, b);
% 
% disp('The product f = A*b is:');
% disp(f);
% disp('The matrix B with non-zero entries only on the diagonal is:');
% disp(B);
%======================================================%
%               PLOTS
%======================================================%
%   TASK 1
%
% years = 1790:2000;
% 
% P = 197273000 ./ (1 + exp(-0.03134 * (years - 1913.25)));
% %????? WHY NUMBER SO BIG????
% figure;
% plot(years, P, 'b');
% 
% xlabel('Year');
% ylabel('Population');
% title('Population of the USA from 1790 to 2000');
% 
% set(gca, 'YScale', 'log');
% 
% grid on;
%======================================================%
%   TASK 2
%
% x = 0:0.01:10;
% 
% y1 = exp(-2.5 * x) .* sin(10 * x);
% y2 = exp(-5 * x) .* sin(20 * x);
% 
% figure;
% 
% plot(x, y1, 'b-');
% hold on;
% plot(x, y2, 'r--');
% 
% xlabel('x');
% ylabel('y');
% legend('y1 = e^{-2.5x} sin(10x)', 'y2 = e^{-5x} sin(20x)');
% title('Comparison of y1 and y2');
% 
% grid on;
%======================================================%


%                                                           -u_Wav3