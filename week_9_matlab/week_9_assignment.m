%task 14
R = 5;
C = 10;
L = 4;
E = 2;
OMEGA = 2;
I = (E)/sqrt(R^2+(2*pi*OMEGA*L - (1)/(2*pi*OMEGA*C)^2));
disp(I);


%task 15
x = -10:0.1:10;
y1 = x.^2;
y2 = 2*x.^2;
plot(x, y1, 'r');
hold on;
plot(x, y2);

x_intersection = 0;
y_intersection = x_intersection^2;
plot(x_intersection, y_intersection, 'ko');


%task 16
deposit = 50;
interest_rate = 0.01;

balance = 0;

for month = 1:12
    balance = balance + deposit;
    balance = balance + interest_rate * balance;
    fprintf('Month %d: £%.2f \n', month, balance); 
end


%task 17
initial_deposit = 1000;
interest_rate = 0.01;
years = 10;

balance = initial_deposit;

for year = 1:years
    for month = 1:12
        balance = balance + interest_rate * balance;
    end
    
    fprintf('Year %d: £%.2f \n', year, balance);
end


%task 18
format long; % turns on long display format

a = 2; % initial value of a

for i = 1:8
    a = 0.5*a + 1/a; % update the value of a
    disp(a);
end
%a approaches the limit of sqrt(2)

%task 19
count = 0; % counter for number of negative numbers entered
negatives = []; % array to store negative numbers

while count < 10
    num = input('Enter a negative number: '); % ask user to enter a number
    if num < 0 % check if the number is negative
        count = count + 1; % increment counter
        negatives = [negatives, num]; % add the negative number to the array
    else
        disp('INCOMPREHENSIBLY LOUD BUZZER SOUND'); % display error message for invalid input
    end
end

disp('Your nums are:');
disp(negatives);