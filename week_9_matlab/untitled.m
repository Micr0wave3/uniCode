st = 'Hello world';
abc = 0;

you = [1, 2, 3, 4];
me = [5; 6; 7];
big_matrix = [1, 2, 3, 4, 5; 5, 4, 3, 2, 1; 1, 2, 3, 4, 5; 5, 4, 3, 2, 1; 1, 2, 3, 4, 5];

x = [1 2 3];
y = [2 4 6];
%x.*y;

a = sqrt(256);
x > y;
%==================================================================================================%
%x = [-2:0.001:2];
%a = sqrt(cos(x));
%b = cos(200*x);
%c = sqrt(abs(x)) - 0.7;
%d = (4-x.*x).^0.1;
%y = (a.*b + c).*d;
%xr = real(x);
%yr = real(y);
%plot(xr, yr, 'r-o');
%text(-1, -1.5, 'I', 'FontSize', 24);
%text(0.5, -1.5, 'MATLAB', 'FontSize', 24);
%==================================================================================================%
%disp(abc);
disp(['The value of abc is ', num2str(abc)]);

%for index = startValue: stepSize: endValue
%    statements
%end

for i = 1:5
    display(i);
end

for i = 1:10
    roooot = sqrt(i);
    display(['roooot of ', num2str(i), ' is: ', num2str(roooot)]);
end

r = rand;
if r > 0.5
    disp('r is bigger than 0.5')
end

for i = 1:10
    r = rand;
    if r > 0.5
        disp(r);
    end
end

for index = 1:1:100
    squareroot = sqrt(index);
    testifeven = rem(squareroot, 2);
    if testifeven == 0
        disp(squareroot);
    end
end