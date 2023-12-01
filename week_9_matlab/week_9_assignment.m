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
format long;

a = 2

for i = 1:8
    a = 0.5*a + 1/a;
    disp(a);
end
%a approaches the limit of sqrt(2)

%task 19
count = 0;
negatives = [];

while count < 10
    num = input('Enter a negative number: ');
    if num < 0
        count = count + 1;
        negatives = [negatives, num];
    else
        disp('INCOMPREHENSIBLY LOUD BUZZER SOUND');
    end
end

disp('Your nums are:');
disp(negatives);
