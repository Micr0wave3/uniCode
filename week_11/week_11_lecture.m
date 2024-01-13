% t = 0 : 0.1 : 5;
% y = exp(t);
% plot(t, y);

%   SOLVING DIFFERENTIAL EQUATION
% dif1 = @(t, y) y;
% [t, y] = ode45(dif1, [0 5], 1);
% plot(t, y);
% xlabel('time');
% ylabel('y');

% [t, y] = ode45(@problem3, [0 1], [0 0]);
% plot(t, y);

% for i = 1 : 4
%     x = linspace(0, 2*pi, 10*i);
%     y = cos(x) + sin(x);
%     subplot(2, 2, i);
%     plot(x, y, 'ro');
% end

% freq = 100 : 100 : 500;
% volts = [1.1 1.5 1.7 2.0 2.1];
% subplot(2 ,2, 1);
% bar(freq, volts);
% subplot(2, 2, 2);
% barh(freq, volts);
% subplot(2, 2, 3);
% area(freq, volts);
% subplot(2, 2, 4);
% stem(freq, volts);

% x = 0 : 0.01 : 6*pi;
% y = cos(x);
% comet(x, y);
% comter3(cos(x), sin(x), x);

[x, y, z] = sphere(10);
mesh(x, y, z);
surf(x, y, z);
colorbar;













